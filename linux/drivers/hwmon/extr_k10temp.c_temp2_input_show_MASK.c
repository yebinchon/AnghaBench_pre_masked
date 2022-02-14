
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k10temp_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct k10temp_data* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (struct k10temp_data*) ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct k10temp_data *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2, "%u\n", VAR_4);
}
