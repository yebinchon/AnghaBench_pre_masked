
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pattern_trig_data {int is_hw_pattern; int lock; scalar_t__ npatterns; int timer; } ;
struct led_classdev {int (* pattern_clear ) (struct led_classdev*) ;struct pattern_trig_data* trigger_data; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct led_classdev*) ;
 int FUNC_4 (struct pattern_trig_data*,int const*,size_t) ;
 int FUNC_5 (struct pattern_trig_data*,char const*,size_t) ;
 int FUNC_6 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_7(struct led_classdev *VAR_0,
        const char *VAR_1, const u32 *VAR_2,
        size_t VAR_3, bool VAR_4)
{
 struct pattern_trig_data *VAR_5 = VAR_0->trigger_data;
 int VAR_6 = 0;

 FUNC_1(&VAR_5->lock);

 FUNC_0(&VAR_5->timer);

 if (VAR_5->is_hw_pattern)
  VAR_0->pattern_clear(VAR_0);

 VAR_5->is_hw_pattern = VAR_4;
 VAR_5->npatterns = 0;

 if (VAR_1)
  VAR_6 = FUNC_5(VAR_5, VAR_1, VAR_3);
 else
  VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_3);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_3(VAR_0);
 if (VAR_6)
  VAR_5->npatterns = 0;

out:
 FUNC_2(&VAR_5->lock);
 return VAR_6 < 0 ? VAR_6 : VAR_3;
}
