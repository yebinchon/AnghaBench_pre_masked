
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {scalar_t__* temp_tmin; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct adm1026_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = VAR_4->index;
 struct adm1026_data *VAR_6 = FUNC_1(VAR_1);
 return FUNC_2(VAR_3, "%d\n", FUNC_0(VAR_6->temp_tmin[VAR_5] +
  VAR_0));
}
