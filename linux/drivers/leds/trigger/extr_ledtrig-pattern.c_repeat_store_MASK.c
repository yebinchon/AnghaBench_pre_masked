
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_trig_data {int last_repeat; int repeat; int is_indefinite; int lock; scalar_t__ is_hw_pattern; int timer; } ;
struct led_classdev {int (* pattern_clear ) (struct led_classdev*) ;struct pattern_trig_data* trigger_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct led_classdev*) ;
 int FUNC_6 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_1(VAR_1);
 struct pattern_trig_data *VAR_6 = VAR_5->trigger_data;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;


 if (VAR_8 < -1 || VAR_8 == 0)
  return -VAR_0;

 FUNC_3(&VAR_6->lock);

 FUNC_0(&VAR_6->timer);

 if (VAR_6->is_hw_pattern)
  VAR_5->pattern_clear(VAR_5);

 VAR_6->last_repeat = VAR_6->repeat = VAR_8;

 if (VAR_6->repeat == -1)
  VAR_6->is_indefinite = 1;
 else
  VAR_6->is_indefinite = 0;

 VAR_7 = FUNC_5(VAR_5);

 FUNC_4(&VAR_6->lock);
 return VAR_7 < 0 ? VAR_7 : VAR_4;
}
