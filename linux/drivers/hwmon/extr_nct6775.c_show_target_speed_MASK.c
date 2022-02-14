
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct nct6775_data {int * fan_div; int * target_speed; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ) ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct nct6775_data *VAR_3 = FUNC_1(VAR_0);
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = VAR_4->index;

 return FUNC_2(VAR_2, "%d\n",
         FUNC_0(VAR_3->target_speed[VAR_5],
          VAR_3->fan_div[VAR_5]));
}
