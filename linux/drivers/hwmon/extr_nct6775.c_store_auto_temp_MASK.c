
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct nct6775_data {int auto_pwm_num; int update_lock; int ** auto_temp; int * REG_CRITICAL_TEMP; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nct6775_data*,int,int) ;
 struct nct6775_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nct6775_data*,int ,int ) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct nct6775_data *VAR_5 = FUNC_2(VAR_1);
 struct sensor_device_attribute_2 *VAR_6 = FUNC_7(VAR_2);
 int VAR_7 = VAR_6->nr;
 int VAR_8 = VAR_6->index;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_3, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 > 255000)
  return -VAR_0;

 FUNC_4(&VAR_5->update_lock);
 VAR_5->auto_temp[VAR_7][VAR_8] = FUNC_0(VAR_9, 1000);
 if (VAR_8 < VAR_5->auto_pwm_num) {
  FUNC_6(VAR_5,
        FUNC_1(VAR_5, VAR_7, VAR_8),
        VAR_5->auto_temp[VAR_7][VAR_8]);
 } else {
  FUNC_6(VAR_5, VAR_5->REG_CRITICAL_TEMP[VAR_7],
        VAR_5->auto_temp[VAR_7][VAR_8]);
 }
 FUNC_5(&VAR_5->update_lock);
 return VAR_4;
}
