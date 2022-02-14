
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7418_data {int* in; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 struct ad7418_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct ad7418_data *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_2(VAR_2, "%d\n",
  ((VAR_4->in[VAR_3->index] >> 6) * 2500 + 512) / 1024);
}
