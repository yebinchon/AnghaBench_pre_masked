
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct nct6775_data {int * pwm_weight_temp_sel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct nct6775_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct nct6775_data*,char*,int ) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct nct6775_data *VAR_3 = FUNC_0(VAR_0);
 struct sensor_device_attribute *VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = VAR_4->index;

 return FUNC_1(VAR_3, VAR_2,
     VAR_3->pwm_weight_temp_sel[VAR_5]);
}
