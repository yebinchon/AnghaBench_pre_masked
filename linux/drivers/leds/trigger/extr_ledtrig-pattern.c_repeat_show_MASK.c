
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_trig_data {int last_repeat; int lock; } ;
struct led_classdev {struct pattern_trig_data* trigger_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_0(VAR_1);
 struct pattern_trig_data *VAR_5 = VAR_4->trigger_data;
 int VAR_6;

 FUNC_1(&VAR_5->lock);

 VAR_6 = VAR_5->last_repeat;

 FUNC_2(&VAR_5->lock);

 return FUNC_3(VAR_3, VAR_0, "%d\n", VAR_6);
}
