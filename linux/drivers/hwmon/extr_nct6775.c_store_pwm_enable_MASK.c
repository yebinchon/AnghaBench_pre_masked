
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sensor_device_attribute {int index; } ;
struct nct6775_data {scalar_t__ kind; unsigned long* pwm_enable; int** pwm; int update_lock; int * REG_FAN_MODE; int ** REG_PWM; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nct6775_data*,int) ;
 int FUNC_1 (struct device*,char*) ;
 struct nct6775_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct nct6775_data*,int ) ;
 int FUNC_7 (struct nct6775_data*,int ,int) ;
 unsigned long VAR_2 ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct nct6775_data*,int) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 struct sensor_device_attribute* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_11(struct device *VAR_5, struct device_attribute *VAR_6,
   const char *VAR_7, size_t VAR_8)
{
 struct nct6775_data *VAR_9 = FUNC_2(VAR_5);
 struct sensor_device_attribute *VAR_10 = FUNC_10(VAR_6);
 int VAR_11 = VAR_10->index;
 unsigned long VAR_12;
 int VAR_13;
 u16 VAR_14;

 VAR_13 = FUNC_3(VAR_7, 10, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_12 > VAR_4)
  return -VAR_0;

 if (VAR_12 == VAR_3 && VAR_9->kind != VAR_1)
  return -VAR_0;

 if (VAR_12 == VAR_4 && FUNC_0(VAR_9, VAR_11)) {
  FUNC_1(VAR_5, "Inconsistent trip points, not switching to SmartFan IV mode\n");
  FUNC_1(VAR_5, "Adjust trip points and try again\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_9->update_lock);
 VAR_9->pwm_enable[VAR_11] = VAR_12;
 if (VAR_12 == VAR_2) {



  VAR_9->pwm[0][VAR_11] = 255;
  FUNC_7(VAR_9, VAR_9->REG_PWM[0][VAR_11], 255);
 }
 FUNC_9(VAR_9, VAR_11);
 VAR_14 = FUNC_6(VAR_9, VAR_9->REG_FAN_MODE[VAR_11]);
 VAR_14 &= 0x0f;
 VAR_14 |= FUNC_8(VAR_12) << 4;
 FUNC_7(VAR_9, VAR_9->REG_FAN_MODE[VAR_11], VAR_14);
 FUNC_5(&VAR_9->update_lock);
 return VAR_8;
}
