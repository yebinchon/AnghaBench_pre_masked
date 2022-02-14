
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute_2 {size_t nr; int index; } ;
struct pem_data {int* data_string; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct pem_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct pem_data*) ;
 struct pem_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_4(VAR_2);
 struct pem_data *VAR_5 = FUNC_2(VAR_1);
 u8 VAR_6;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = VAR_5->data_string[VAR_4->nr] & VAR_4->index;
 return FUNC_3(VAR_3, VAR_0, "%d\n", !!VAR_6);
}
