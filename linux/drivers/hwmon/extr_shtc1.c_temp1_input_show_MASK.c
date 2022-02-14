
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shtc1_data {int temperature; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct shtc1_data*) ;
 int FUNC_1 (struct shtc1_data*) ;
 struct shtc1_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct shtc1_data *VAR_3 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 return FUNC_3(VAR_2, "%d\n", VAR_3->temperature);
}
