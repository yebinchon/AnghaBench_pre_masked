
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct nct6775_data {scalar_t__* REG_PWM_MODE; unsigned long* pwm_mode; int update_lock; int * PWM_MODE_MASK; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct nct6775_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nct6775_data*,scalar_t__) ;
 int FUNC_5 (struct nct6775_data*,scalar_t__,int ) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct nct6775_data *VAR_5 = FUNC_0(VAR_1);
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_2);
 int VAR_7 = VAR_6->index;
 unsigned long VAR_8;
 int VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_1(VAR_3, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 > 1)
  return -VAR_0;


 if (VAR_5->REG_PWM_MODE[VAR_7] == 0) {
  if (!VAR_8)
   return -VAR_0;
  return VAR_4;
 }

 FUNC_2(&VAR_5->update_lock);
 VAR_5->pwm_mode[VAR_7] = VAR_8;
 VAR_10 = FUNC_4(VAR_5, VAR_5->REG_PWM_MODE[VAR_7]);
 VAR_10 &= ~VAR_5->PWM_MODE_MASK[VAR_7];
 if (!VAR_8)
  VAR_10 |= VAR_5->PWM_MODE_MASK[VAR_7];
 FUNC_5(VAR_5, VAR_5->REG_PWM_MODE[VAR_7], VAR_10);
 FUNC_3(&VAR_5->update_lock);
 return VAR_4;
}
