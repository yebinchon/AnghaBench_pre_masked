
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct nct6775_data {unsigned long* fan_pulses; int* FAN_PULSE_SHIFT; int update_lock; int * REG_FAN_PULSES; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct nct6775_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nct6775_data*,int ) ;
 int FUNC_5 (struct nct6775_data*,int ,int) ;
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

 if (VAR_8 > 4)
  return -VAR_0;

 FUNC_2(&VAR_5->update_lock);
 VAR_5->fan_pulses[VAR_7] = VAR_8 & 3;
 VAR_10 = FUNC_4(VAR_5, VAR_5->REG_FAN_PULSES[VAR_7]);
 VAR_10 &= ~(0x03 << VAR_5->FAN_PULSE_SHIFT[VAR_7]);
 VAR_10 |= (VAR_8 & 3) << VAR_5->FAN_PULSE_SHIFT[VAR_7];
 FUNC_5(VAR_5, VAR_5->REG_FAN_PULSES[VAR_7], VAR_10);
 FUNC_3(&VAR_5->update_lock);

 return VAR_4;
}
