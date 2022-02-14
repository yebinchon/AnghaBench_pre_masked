
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int* pwm_ctl; int * pwm_auto_temp; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct vt1211_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct vt1211_data *VAR_3 = FUNC_3(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 =
      FUNC_2(VAR_1);
 int VAR_5 = VAR_4->index;
 int VAR_6 = VAR_4->nr;

 return FUNC_1(VAR_2, "%d\n", FUNC_0(VAR_3->pwm_ctl[VAR_5] & 7,
         VAR_3->pwm_auto_temp[VAR_6]));
}
