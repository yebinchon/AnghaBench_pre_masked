
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct w83793_data {int pwm_default; int temp_critical; int pwm_downtime; int pwm_uptime; } ;
struct sensor_device_attribute_2 {int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;
 struct w83793_data* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_4, struct device_attribute *VAR_5, char *VAR_6)
{
 struct sensor_device_attribute_2 *VAR_7 =
     FUNC_3(VAR_5);
 int VAR_8 = VAR_7->nr;
 struct w83793_data *VAR_9 = FUNC_4(VAR_4);
 u32 VAR_10 = 0;

 if (VAR_8 == VAR_0)
  VAR_10 = (VAR_9->pwm_default & 0x3f) << 2;
 else if (VAR_8 == VAR_2)
  VAR_10 = FUNC_1(VAR_9->pwm_uptime);
 else if (VAR_8 == VAR_1)
  VAR_10 = FUNC_1(VAR_9->pwm_downtime);
 else if (VAR_8 == VAR_3)
  VAR_10 = FUNC_0(VAR_9->temp_critical & 0x7f);

 return FUNC_2(VAR_6, "%d\n", VAR_10);
}
