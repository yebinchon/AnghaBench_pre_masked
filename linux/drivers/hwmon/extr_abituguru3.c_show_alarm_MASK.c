
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute_2 {size_t index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru3_data {int* alarms; int** settings; TYPE_1__* sensors; } ;
typedef int ssize_t ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 struct abituguru3_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct sensor_device_attribute_2 *VAR_5 = FUNC_2(VAR_2);
 struct abituguru3_data *VAR_6 = FUNC_0(VAR_1);

 if (!VAR_6)
  return -VAR_0;

 VAR_4 = VAR_6->sensors[VAR_5->index].port;







 if ((VAR_6->alarms[VAR_4 / 8] & (0x01 << (VAR_4 % 8))) &&
   (!VAR_5->nr || (VAR_6->settings[VAR_4][0] & VAR_5->nr)))
  return FUNC_1(VAR_3, "1\n");
 else
  return FUNC_1(VAR_3, "0\n");
}
