
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct it87_data {int * fan_div; int ** fan; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct it87_data*) ;
 struct it87_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_6(VAR_1);
 int VAR_4 = VAR_3->nr;
 int VAR_5 = VAR_3->index;
 int VAR_6;
 struct it87_data *VAR_7 = FUNC_4(VAR_0);

 VAR_6 = FUNC_3(VAR_7) ?
  FUNC_1(VAR_7->fan[VAR_4][VAR_5]) :
  FUNC_2(VAR_7->fan[VAR_4][VAR_5],
        FUNC_0(VAR_7->fan_div[VAR_4]));
 return FUNC_5(VAR_2, "%d\n", VAR_6);
}
