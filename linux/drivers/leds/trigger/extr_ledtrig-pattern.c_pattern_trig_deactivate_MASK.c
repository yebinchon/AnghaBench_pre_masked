
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_trig_data {int timer; } ;
struct led_classdev {int activated; int (* pattern_clear ) (struct led_classdev*) ;struct pattern_trig_data* trigger_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pattern_trig_data*) ;
 int FUNC_2 (struct led_classdev*,int ) ;
 int FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_1)
{
 struct pattern_trig_data *VAR_2 = VAR_1->trigger_data;

 if (!VAR_1->activated)
  return;

 if (VAR_1->pattern_clear)
  VAR_1->pattern_clear(VAR_1);

 FUNC_0(&VAR_2->timer);

 FUNC_2(VAR_1, VAR_0);
 FUNC_1(VAR_2);
 VAR_1->activated = 0;
}
