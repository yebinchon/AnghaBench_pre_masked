
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83793_data {int* temp_mode; } ;
struct sensor_device_attribute_2 {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_1 (struct device_attribute*) ;
 struct w83793_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct w83793_data *VAR_4 = FUNC_2(VAR_1);
 struct sensor_device_attribute_2 *VAR_5 =
     FUNC_1(VAR_2);
 int VAR_6 = VAR_5->index;
 u8 VAR_7 = (VAR_6 < 4) ? 0x03 : 0x01;
 u8 VAR_8 = (VAR_6 < 4) ? (2 * VAR_6) : (VAR_6 - 4);
 u8 VAR_9;
 VAR_6 = (VAR_6 < 4) ? 0 : 1;

 VAR_9 = (VAR_4->temp_mode[VAR_6] >> VAR_8) & VAR_7;


 if (VAR_9 == 1)
  VAR_9 = VAR_6 == 0 ? 3 : 4;
 else
  VAR_9 = VAR_0[VAR_9];

 return FUNC_0(VAR_3, "%d\n", VAR_9);
}
