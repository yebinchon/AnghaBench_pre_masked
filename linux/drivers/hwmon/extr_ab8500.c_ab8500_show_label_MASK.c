
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct sensor_device_attribute* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 char *VAR_4;
 struct sensor_device_attribute *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = VAR_5->index;

 switch (VAR_6) {
 case 1:
  VAR_4 = "ext_adc1";
  break;
 case 2:
  VAR_4 = "ext_adc2";
  break;
 case 3:
  VAR_4 = "bat_temp";
  break;
 case 4:
  VAR_4 = "bat_ctrl";
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_3, "%s\n", VAR_4);
}
