
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int* pwm_ctl; int update_lock; int * pwm_auto_temp; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,long) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct vt1211_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct vt1211_data*,int ) ;
 int FUNC_8 (struct vt1211_data*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
           struct device_attribute *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 struct vt1211_data *VAR_5 = FUNC_2(VAR_1);
 struct sensor_device_attribute_2 *VAR_6 =
      FUNC_6(VAR_2);
 int VAR_7 = VAR_6->index;
 int VAR_8 = VAR_6->nr;
 int VAR_9;
 long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_3, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;


 FUNC_4(&VAR_5->update_lock);


 VAR_9 = FUNC_7(VAR_5, VAR_0);
 VAR_5->pwm_ctl[0] = VAR_9 & 0xf;
 VAR_5->pwm_ctl[1] = (VAR_9 >> 4) & 0xf;

 VAR_5->pwm_auto_temp[VAR_8] = FUNC_0(VAR_5->pwm_ctl[VAR_7] & 7, VAR_10);
 FUNC_8(VAR_5, FUNC_1(VAR_8),
        VAR_5->pwm_auto_temp[VAR_8]);
 FUNC_5(&VAR_5->update_lock);

 return VAR_4;
}
