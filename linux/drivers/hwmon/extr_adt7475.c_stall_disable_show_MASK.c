
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute_2 {scalar_t__ index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int* enh_acoustics; } ;
typedef int ssize_t ;


 int FUNC_0 (scalar_t__) ;
 struct adt7475_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_3(VAR_1);
 struct adt7475_data *VAR_4 = FUNC_1(VAR_0);

 u8 VAR_5 = FUNC_0(5 + VAR_3->index);

 return FUNC_2(VAR_2, "%d\n", !!(VAR_4->enh_acoustics[0] & VAR_5));
}
