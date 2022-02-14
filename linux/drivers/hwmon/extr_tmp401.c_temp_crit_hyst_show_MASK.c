
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmp401_data {int temp_crit_hyst; int update_lock; int config; int ** temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (struct tmp401_data*) ;
 int FUNC_1 (struct tmp401_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,int ) ;
 struct tmp401_data* FUNC_6 (struct device*) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 int VAR_3, VAR_4 = FUNC_7(VAR_1)->index;
 struct tmp401_data *VAR_5 = FUNC_6(VAR_0);

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_2(&VAR_5->update_lock);
 VAR_3 = FUNC_5(VAR_5->temp[3][VAR_4], VAR_5->config);
 VAR_3 -= VAR_5->temp_crit_hyst * 1000;
 FUNC_3(&VAR_5->update_lock);

 return FUNC_4(VAR_2, "%d\n", VAR_3);
}
