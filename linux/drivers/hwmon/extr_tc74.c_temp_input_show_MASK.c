
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc74_data {int temp_input; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct tc74_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct tc74_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2, "%d\n", VAR_3->temp_input * 1000);
}
