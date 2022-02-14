
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1029_data {int* fan; int* fan_div; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 struct adm1029_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,...) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct adm1029_data *VAR_4 = FUNC_1(VAR_0);
 u16 VAR_5;

 if (VAR_4->fan[VAR_3->index] == 0 ||
     (VAR_4->fan_div[VAR_3->index] & 0xC0) == 0 ||
     VAR_4->fan[VAR_3->index] == 255) {
  return FUNC_2(VAR_2, "0\n");
 }

 VAR_5 = 1880 * 120 / FUNC_0(VAR_4->fan_div[VAR_3->index])
     / VAR_4->fan[VAR_3->index];
 return FUNC_2(VAR_2, "%d\n", VAR_5);
}
