
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {int (* fan_from_reg_min ) (int ,int ) ;int * fan_div; int * fan_min; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;
 struct w83627ehf_data* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct w83627ehf_data *VAR_3 = FUNC_4(VAR_0);
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = VAR_4->index;
 return FUNC_0(VAR_2, "%d\n",
         VAR_3->fan_from_reg_min(VAR_3->fan_min[VAR_5],
           VAR_3->fan_div[VAR_5]));
}
