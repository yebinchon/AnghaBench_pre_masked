
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max1668_data {int* temp_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (struct max1668_data*) ;
 int FUNC_1 (struct max1668_data*) ;
 struct max1668_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_1)->index;
 struct max1668_data *VAR_4 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_3(VAR_2, "%d\n", VAR_4->temp_min[VAR_3] * 1000);
}
