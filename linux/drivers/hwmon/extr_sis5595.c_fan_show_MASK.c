
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis5595_data {int * fan_div; int * fan; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct sis5595_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct sis5595_data *VAR_3 = FUNC_2(VAR_0);
 struct sensor_device_attribute *VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = VAR_4->index;
 return FUNC_3(VAR_2, "%d\n", FUNC_1(VAR_3->fan[VAR_5],
  FUNC_0(VAR_3->fan_div[VAR_5])));
}
