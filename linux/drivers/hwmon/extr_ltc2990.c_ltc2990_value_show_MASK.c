
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct ltc2990_data {int i2c; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ltc2990_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 struct ltc2990_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->i2c, VAR_4->index, &VAR_6);
 if (FUNC_4(VAR_7 < 0))
  return VAR_7;

 return FUNC_2(VAR_3, VAR_0, "%d\n", VAR_6);
}
