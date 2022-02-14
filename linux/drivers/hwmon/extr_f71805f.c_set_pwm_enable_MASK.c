
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct f71805f_data {int* fan_ctrl; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int kobj; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct f71805f_data* FUNC_2 (struct device*) ;
 int * VAR_7 ;
 int FUNC_3 (struct f71805f_data*,int ) ;
 int FUNC_4 (struct f71805f_data*,int ,int) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_8, struct device_attribute
         *VAR_9, const char *VAR_10, size_t VAR_11)
{
 struct f71805f_data *VAR_12 = FUNC_2(VAR_8);
 struct sensor_device_attribute *VAR_13 = FUNC_9(VAR_9);
 int VAR_14 = VAR_13->index;
 u8 VAR_15;
 unsigned long VAR_16;
 int VAR_17;

 VAR_17 = FUNC_5(VAR_10, 10, &VAR_16);
 if (VAR_17)
  return VAR_17;

 if (VAR_16 < 1 || VAR_16 > 3)
  return -VAR_0;

 if (VAR_16 > 1) {
  if (FUNC_8(&VAR_8->kobj, VAR_7[VAR_14],
         VAR_5))
   FUNC_1(VAR_8, "chmod -w pwm%d failed\n", VAR_14 + 1);
 }

 FUNC_6(&VAR_12->update_lock);
 VAR_15 = FUNC_3(VAR_12, FUNC_0(VAR_14))
     & ~VAR_2;
 switch (VAR_16) {
 case 1:
  VAR_15 |= VAR_1;
  break;
 case 2:
  VAR_15 |= VAR_4;
  break;
 case 3:
  VAR_15 |= VAR_3;
  break;
 }
 VAR_12->fan_ctrl[VAR_14] = VAR_15;
 FUNC_4(VAR_12, FUNC_0(VAR_14), VAR_15);
 FUNC_7(&VAR_12->update_lock);

 if (VAR_16 == 1) {
  if (FUNC_8(&VAR_8->kobj, VAR_7[VAR_14],
         VAR_5 | VAR_6))
   FUNC_1(VAR_8, "chmod +w pwm%d failed\n", VAR_14 + 1);
 }

 return VAR_11;
}
