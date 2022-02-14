
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmp401_data {int* status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int nr; int index; } ;


 scalar_t__ FUNC_0 (struct tmp401_data*) ;
 int FUNC_1 (struct tmp401_data*) ;
 int FUNC_2 (char*,char*,int) ;
 struct tmp401_data* FUNC_3 (struct device*) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_1)->nr;
 int VAR_4 = FUNC_4(VAR_1)->index;
 struct tmp401_data *VAR_5 = FUNC_3(VAR_0);

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 return FUNC_2(VAR_2, "%d\n", !!(VAR_5->status[VAR_3] & VAR_4));
}
