
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expires; } ;
struct pattern_trig_data {int npatterns; TYPE_1__ timer; scalar_t__ patterns; scalar_t__ next; scalar_t__ curr; scalar_t__ delta_t; int repeat; scalar_t__ is_hw_pattern; } ;
struct led_classdev {int (* pattern_set ) (struct led_classdev*,scalar_t__,int,int ) ;struct pattern_trig_data* trigger_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (struct led_classdev*,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_2(struct led_classdev *VAR_2)
{
 struct pattern_trig_data *VAR_3 = VAR_2->trigger_data;

 if (!VAR_3->npatterns)
  return 0;

 if (VAR_3->is_hw_pattern) {
  return VAR_2->pattern_set(VAR_2, VAR_3->patterns,
          VAR_3->npatterns, VAR_3->repeat);
 }


 if (VAR_3->npatterns < 2)
  return -VAR_0;

 VAR_3->delta_t = 0;
 VAR_3->curr = VAR_3->patterns;
 VAR_3->next = VAR_3->patterns + 1;
 VAR_3->timer.expires = VAR_1;
 FUNC_0(&VAR_3->timer);

 return 0;
}
