
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int* pwm; int* pwm_ctl; int pwm_clk; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;






 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct vt1211_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct vt1211_data *VAR_3 = FUNC_3(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 =
      FUNC_2(VAR_1);
 int VAR_5 = VAR_4->index;
 int VAR_6 = VAR_4->nr;
 int VAR_7;

 switch (VAR_6) {
 case 131:
  VAR_7 = VAR_3->pwm[VAR_5];
  break;
 case 129:
  VAR_7 = ((VAR_3->pwm_ctl[VAR_5] >> 3) & 1) ? 2 : 0;
  break;
 case 128:
  VAR_7 = 90000 >> (VAR_3->pwm_clk & 7);
  break;
 case 130:
  VAR_7 = (VAR_3->pwm_ctl[VAR_5] & 7) + 1;
  break;
 default:
  VAR_7 = 0;
  FUNC_0(VAR_0, "Unknown attr fetch (%d)\n", VAR_6);
 }

 return FUNC_1(VAR_2, "%d\n", VAR_7);
}
