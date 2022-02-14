
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct nct6775_data {unsigned long** fan_time; int update_lock; int ** REG_FAN_TIME; int * pwm_mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct nct6775_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nct6775_data*,int ,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,int ) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct nct6775_data *VAR_4 = FUNC_0(VAR_0);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_6(VAR_1);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_5(VAR_8, VAR_4->pwm_mode[VAR_6]);
 FUNC_2(&VAR_4->update_lock);
 VAR_4->fan_time[VAR_7][VAR_6] = VAR_8;
 FUNC_4(VAR_4, VAR_4->REG_FAN_TIME[VAR_7][VAR_6], VAR_8);
 FUNC_3(&VAR_4->update_lock);
 return VAR_3;
}
