
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct nct6775_data {int have_temp; int* temp_src; int* pwm_weight_temp_sel; int update_lock; int * REG_WEIGHT_TEMP_SEL; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nct6775_data*,int ) ;
 struct nct6775_data* FUNC_6 (struct device*) ;
 int FUNC_7 (struct nct6775_data*,int ,int) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct nct6775_data *VAR_6 = FUNC_6(VAR_2);
 struct sensor_device_attribute *VAR_7 = FUNC_8(VAR_3);
 int VAR_8 = VAR_7->index;
 unsigned long VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_4, 10, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_9 > VAR_1)
  return -VAR_0;
 VAR_9 = FUNC_1(VAR_9, VAR_1 + 1);
 if (VAR_9 && (!(VAR_6->have_temp & FUNC_0(VAR_9 - 1)) ||
      !VAR_6->temp_src[VAR_9 - 1]))
  return -VAR_0;

 FUNC_3(&VAR_6->update_lock);
 if (VAR_9) {
  VAR_12 = VAR_6->temp_src[VAR_9 - 1];
  VAR_6->pwm_weight_temp_sel[VAR_8] = VAR_12;
  VAR_11 = FUNC_5(VAR_6, VAR_6->REG_WEIGHT_TEMP_SEL[VAR_8]);
  VAR_11 &= 0xe0;
  VAR_11 |= (VAR_12 | 0x80);
  FUNC_7(VAR_6, VAR_6->REG_WEIGHT_TEMP_SEL[VAR_8], VAR_11);
 } else {
  VAR_6->pwm_weight_temp_sel[VAR_8] = 0;
  VAR_11 = FUNC_5(VAR_6, VAR_6->REG_WEIGHT_TEMP_SEL[VAR_8]);
  VAR_11 &= 0x7f;
  FUNC_7(VAR_6, VAR_6->REG_WEIGHT_TEMP_SEL[VAR_8], VAR_11);
 }
 FUNC_4(&VAR_6->update_lock);

 return VAR_5;
}
