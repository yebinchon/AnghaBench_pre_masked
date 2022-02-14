
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_pwm_tacho_data {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct aspeed_pwm_tacho_data*,int) ;
 struct aspeed_pwm_tacho_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = VAR_3->index;
 int VAR_5;
 struct aspeed_pwm_tacho_data *VAR_6 = FUNC_1(VAR_0);

 VAR_5 = FUNC_0(VAR_6, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_2(VAR_2, "%d\n", VAR_5);
}
