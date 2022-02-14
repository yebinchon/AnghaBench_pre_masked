
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int update_lock; int * pwm; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (unsigned long,int ,int) ;
 struct w83781d_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct w83781d_data*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3,
  size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_5(VAR_2);
 struct w83781d_data *VAR_6 = FUNC_1(VAR_1);
 int VAR_7 = VAR_5->index;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_3(&VAR_6->update_lock);
 VAR_6->pwm[VAR_7] = FUNC_0(VAR_8, 0, 255);
 FUNC_6(VAR_6, VAR_0[VAR_7], VAR_6->pwm[VAR_7]);
 FUNC_4(&VAR_6->update_lock);
 return VAR_4;
}
