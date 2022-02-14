
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct it87_data {int** auto_pwm; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;
 struct it87_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct it87_data*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct it87_data *VAR_5 = FUNC_1(VAR_1);
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_2);
 int VAR_7 = VAR_6->index;
 unsigned long VAR_8;

 if (FUNC_3(VAR_3, 10, &VAR_8) < 0 || VAR_8 > 127)
  return -VAR_0;

 FUNC_4(&VAR_5->update_lock);
 VAR_5->auto_pwm[VAR_7][1] = (VAR_5->auto_pwm[VAR_7][1] & 0x80) | VAR_8;
 FUNC_2(VAR_5, FUNC_0(VAR_7, 4),
    VAR_5->auto_pwm[VAR_7][1]);
 FUNC_5(&VAR_5->update_lock);
 return VAR_4;
}
