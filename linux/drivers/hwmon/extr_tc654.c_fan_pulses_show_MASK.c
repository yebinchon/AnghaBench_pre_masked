
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tc654_data {int config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tc654_data*) ;
 int FUNC_2 (struct tc654_data*) ;
 int* VAR_0 ;
 int FUNC_3 (char*,char*,int) ;
 struct tc654_data* FUNC_4 (struct device*) ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_5(VAR_2)->index;
 struct tc654_data *VAR_5 = FUNC_4(VAR_1);
 u8 VAR_6;

 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_0((VAR_5->config >> VAR_0[VAR_4]) & 0x03);
 return FUNC_3(VAR_3, "%d\n", VAR_6);
}
