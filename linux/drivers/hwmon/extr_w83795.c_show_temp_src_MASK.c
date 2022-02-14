
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83795_data {int* temp_src; } ;
struct sensor_device_attribute_2 {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,unsigned int) ;
 struct sensor_device_attribute_2* FUNC_1 (struct device_attribute*) ;
 scalar_t__** VAR_2 ;
 struct w83795_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 =
     FUNC_1(VAR_4);
 struct w83795_data *VAR_7 = FUNC_2(VAR_3);
 int VAR_8 = VAR_6->index;
 u8 VAR_9 = VAR_7->temp_src[VAR_8 / 2];

 if (VAR_8 & 1)
  VAR_9 >>= 4;
 else
  VAR_9 &= 0x0f;


 if (VAR_9 >= 4 || VAR_2[VAR_9][VAR_8] == VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_5, "%u\n", (unsigned int)VAR_2[VAR_9][VAR_8] + 1);
}
