
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct nct6775_data {int * pwm_mode; int ** fan_time; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct nct6775_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct nct6775_data *VAR_3 = FUNC_0(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = VAR_4->nr;
 int VAR_6 = VAR_4->index;

 return FUNC_1(VAR_2, "%d\n",
         FUNC_2(VAR_3->fan_time[VAR_6][VAR_5],
       VAR_3->pwm_mode[VAR_5]));
}
