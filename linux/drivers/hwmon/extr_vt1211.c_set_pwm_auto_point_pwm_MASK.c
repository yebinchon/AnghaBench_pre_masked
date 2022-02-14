
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int update_lock; int ** pwm_auto_pwm; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned long,int ,int) ;
 struct vt1211_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct vt1211_data*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct vt1211_data *VAR_4 = FUNC_2(VAR_0);
 struct sensor_device_attribute_2 *VAR_5 =
      FUNC_6(VAR_1);
 int VAR_6 = VAR_5->index;
 int VAR_7 = VAR_5->nr;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_2, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_4(&VAR_4->update_lock);
 VAR_4->pwm_auto_pwm[VAR_6][VAR_7] = FUNC_1(VAR_8, 0, 255);
 FUNC_7(VAR_4, FUNC_0(VAR_6, VAR_7),
        VAR_4->pwm_auto_pwm[VAR_6][VAR_7]);
 FUNC_5(&VAR_4->update_lock);

 return VAR_3;
}
