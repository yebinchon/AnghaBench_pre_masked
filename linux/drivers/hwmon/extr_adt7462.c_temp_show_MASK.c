
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {int* temp_frac; int* temp; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct adt7462_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (struct adt7462_data*,size_t) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 struct adt7462_data *VAR_5 = FUNC_0(VAR_1);
 u8 VAR_6 = VAR_5->temp_frac[VAR_4->index] >> VAR_0;

 if (!FUNC_2(VAR_5, VAR_4->index))
  return FUNC_1(VAR_3, "0\n");

 return FUNC_1(VAR_3, "%d\n", 1000 * (VAR_5->temp[VAR_4->index] - 64) +
         250 * VAR_6);
}
