
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct max16065_data {int* adc; int * range; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 struct max16065_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 struct max16065_data *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = VAR_5->adc[VAR_4->index];

 if (FUNC_4(VAR_6 < 0))
  return VAR_6;

 return FUNC_2(VAR_3, VAR_0, "%d\n",
   FUNC_0(VAR_6, VAR_5->range[VAR_4->index]));
}
