
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct nct6775_data {int auto_pwm_num; int kind; unsigned long** auto_pwm; int CRITICAL_PWM_ENABLE_MASK; int update_lock; int * REG_CRITICAL_PWM_ENABLE; int * REG_CRITICAL_PWM; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct nct6775_data*,int,int) ;
 int * VAR_1 ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;



 int FUNC_5 (struct nct6775_data*,int ) ;
 int FUNC_6 (struct nct6775_data*,int ,int) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct nct6775_data *VAR_6 = FUNC_1(VAR_2);
 struct sensor_device_attribute_2 *VAR_7 = FUNC_7(VAR_3);
 int VAR_8 = VAR_7->nr;
 int VAR_9 = VAR_7->index;
 unsigned long VAR_10;
 int VAR_11;
 u8 VAR_12;

 VAR_11 = FUNC_2(VAR_4, 10, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 if (VAR_10 > 255)
  return -VAR_0;

 if (VAR_9 == VAR_6->auto_pwm_num) {
  if (VAR_6->kind != 137 && !VAR_10)
   return -VAR_0;
  if (VAR_6->kind != 135 && VAR_10)
   VAR_10 = 0xff;
 }

 FUNC_3(&VAR_6->update_lock);
 VAR_6->auto_pwm[VAR_8][VAR_9] = VAR_10;
 if (VAR_9 < VAR_6->auto_pwm_num) {
  FUNC_6(VAR_6,
        FUNC_0(VAR_6, VAR_8, VAR_9),
        VAR_6->auto_pwm[VAR_8][VAR_9]);
 } else {
  switch (VAR_6->kind) {
  case 137:

   VAR_12 = FUNC_5(VAR_6,
       VAR_1[VAR_8]);
   if (VAR_10)
    VAR_12 |= 0x02;
   else
    VAR_12 &= ~0x02;
   FUNC_6(VAR_6, VAR_1[VAR_8],
         VAR_12);
   break;
  case 136:
   break;
  case 139:
  case 138:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   FUNC_6(VAR_6, VAR_6->REG_CRITICAL_PWM[VAR_8],
         VAR_10);
   VAR_12 = FUNC_5(VAR_6,
     VAR_6->REG_CRITICAL_PWM_ENABLE[VAR_8]);
   if (VAR_10 == 255)
    VAR_12 &= ~VAR_6->CRITICAL_PWM_ENABLE_MASK;
   else
    VAR_12 |= VAR_6->CRITICAL_PWM_ENABLE_MASK;
   FUNC_6(VAR_6,
         VAR_6->REG_CRITICAL_PWM_ENABLE[VAR_8],
         VAR_12);
   break;
  }
 }
 FUNC_4(&VAR_6->update_lock);
 return VAR_5;
}
