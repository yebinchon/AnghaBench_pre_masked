
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {int dummy; } ;
typedef int ssize_t ;


 struct adt7462_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;
 char* FUNC_3 (struct adt7462_data*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_2(VAR_1);
 struct adt7462_data *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%s\n", FUNC_3(VAR_4, VAR_3->index));
}
