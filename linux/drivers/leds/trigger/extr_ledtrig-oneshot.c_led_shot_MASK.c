
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oneshot_trig_data {int invert; } ;
struct led_classdev {int blink_delay_off; int blink_delay_on; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct led_classdev*,int *,int *,int ) ;
 struct oneshot_trig_data* FUNC_1 (struct device*) ;
 struct led_classdev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_2(VAR_0);
 struct oneshot_trig_data *VAR_5 = FUNC_1(VAR_0);

 FUNC_0(VAR_4,
   &VAR_4->blink_delay_on, &VAR_4->blink_delay_off,
   VAR_5->invert);


 return VAR_3;
}
