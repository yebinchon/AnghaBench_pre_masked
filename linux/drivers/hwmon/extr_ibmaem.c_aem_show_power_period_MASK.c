
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aem_data {int * power_period; int (* update ) (struct aem_data*) ;} ;
typedef int ssize_t ;


 struct aem_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (struct aem_data*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct aem_data *VAR_4 = FUNC_0(VAR_0);
 VAR_4->update(VAR_4);

 return FUNC_1(VAR_2, "%lu\n", VAR_4->power_period[VAR_3->index]);
}
