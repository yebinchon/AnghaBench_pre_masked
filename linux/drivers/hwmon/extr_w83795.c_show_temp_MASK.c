
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int* temp_read_vrlsb; int ** temp; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,long) ;
 long FUNC_1 (int ) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct w83795_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 =
     FUNC_2(VAR_2);
 int VAR_5 = VAR_4->nr;
 int VAR_6 = VAR_4->index;
 struct w83795_data *VAR_7 = FUNC_3(VAR_1);
 long VAR_8 = FUNC_1(VAR_7->temp[VAR_6][VAR_5]);

 if (VAR_5 == VAR_0)
  VAR_8 += (VAR_7->temp_read_vrlsb[VAR_6] >> 6) * 250;
 return FUNC_0(VAR_3, "%ld\n", VAR_8);
}
