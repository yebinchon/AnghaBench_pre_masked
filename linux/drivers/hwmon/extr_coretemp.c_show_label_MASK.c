
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_data {int cpu_core_id; scalar_t__ is_pkg_data; } ;
struct sensor_device_attribute {size_t index; } ;
struct platform_data {int pkg_id; struct temp_data** core_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_2(VAR_1);
 struct platform_data *VAR_4 = FUNC_0(VAR_0);
 struct temp_data *VAR_5 = VAR_4->core_data[VAR_3->index];

 if (VAR_5->is_pkg_data)
  return FUNC_1(VAR_2, "Package id %u\n", VAR_4->pkg_id);

 return FUNC_1(VAR_2, "Core %u\n", VAR_5->cpu_core_id);
}
