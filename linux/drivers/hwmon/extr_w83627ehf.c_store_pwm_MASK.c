
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {unsigned long* pwm; int update_lock; int * REG_PWM; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned long FUNC_0 (unsigned long,int ,int) ;
 struct w83627ehf_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct w83627ehf_data*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct w83627ehf_data *VAR_4 = FUNC_1(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_5(VAR_1);
 int VAR_6 = VAR_5->index;
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_2, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_0(VAR_7, 0, 255);

 FUNC_3(&VAR_4->update_lock);
 VAR_4->pwm[VAR_6] = VAR_7;
 FUNC_6(VAR_4, VAR_4->REG_PWM[VAR_6], VAR_7);
 FUNC_4(&VAR_4->update_lock);
 return VAR_3;
}
