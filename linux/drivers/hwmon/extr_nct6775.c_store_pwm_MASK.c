
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct nct6775_data {int** pwm; int update_lock; int * REG_TEMP_SEL; int ** REG_PWM; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned long FUNC_0 (unsigned long,int,int) ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nct6775_data*,int ) ;
 int FUNC_6 (struct nct6775_data*,int ,int) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1, const char *VAR_2,
   size_t VAR_3)
{
 struct nct6775_data *VAR_4 = FUNC_1(VAR_0);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_7(VAR_1);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index;
 unsigned long VAR_8;
 int VAR_9[7] = { 0, 1, 1, VAR_4->pwm[2][VAR_6], 0, 0, 0 };
 int VAR_10[7]
   = { 255, 255, VAR_4->pwm[3][VAR_6] ? : 255, 255, 255, 255, 255 };
 int VAR_11;
 u8 VAR_12;

 VAR_11 = FUNC_2(VAR_2, 10, &VAR_8);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_8 = FUNC_0(VAR_8, VAR_9[VAR_7], VAR_10[VAR_7]);

 FUNC_3(&VAR_4->update_lock);
 VAR_4->pwm[VAR_7][VAR_6] = VAR_8;
 FUNC_6(VAR_4, VAR_4->REG_PWM[VAR_7][VAR_6], VAR_8);
 if (VAR_7 == 2) {
  VAR_12 = FUNC_5(VAR_4, VAR_4->REG_TEMP_SEL[VAR_6]);
  VAR_12 &= 0x7f;
  if (VAR_8)
   VAR_12 |= 0x80;
  FUNC_6(VAR_4, VAR_4->REG_TEMP_SEL[VAR_6], VAR_12);
 }
 FUNC_4(&VAR_4->update_lock);
 return VAR_3;
}
