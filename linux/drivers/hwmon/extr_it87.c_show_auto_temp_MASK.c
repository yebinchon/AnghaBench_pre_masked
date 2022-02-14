
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct it87_data {int** auto_temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct it87_data*) ;
 struct it87_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct it87_data *VAR_3 = FUNC_2(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 =
   FUNC_4(VAR_1);
 int VAR_5 = VAR_4->nr;
 int VAR_6 = VAR_4->index;
 int VAR_7;

 if (FUNC_1(VAR_3) || VAR_6)
  VAR_7 = VAR_3->auto_temp[VAR_5][VAR_6];
 else
  VAR_7 = VAR_3->auto_temp[VAR_5][1] - (VAR_3->auto_temp[VAR_5][0] & 0x1f);

 return FUNC_3(VAR_2, "%d\n", FUNC_0(VAR_7));
}
