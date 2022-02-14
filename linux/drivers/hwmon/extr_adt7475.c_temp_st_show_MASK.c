
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int* enh_acoustics; } ;
typedef int ssize_t ;


 int* VAR_0 ;
 struct adt7475_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,...) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_2(VAR_2);
 struct adt7475_data *VAR_5 = FUNC_0(VAR_1);
 long VAR_6;

 switch (VAR_4->index) {
 case 0:
  VAR_6 = VAR_5->enh_acoustics[0] & 0xf;
  break;
 case 1:
  VAR_6 = (VAR_5->enh_acoustics[1] >> 4) & 0xf;
  break;
 case 2:
 default:
  VAR_6 = VAR_5->enh_acoustics[1] & 0xf;
  break;
 }

 if (VAR_6 & 0x8)
  return FUNC_1(VAR_3, "%d\n", VAR_0[VAR_6 & 0x7]);
 else
  return FUNC_1(VAR_3, "0\n");
}
