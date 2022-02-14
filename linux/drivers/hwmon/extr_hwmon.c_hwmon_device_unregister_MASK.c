
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int*) ;

void FUNC_6(struct device *VAR_2)
{
 int VAR_3;

 if (FUNC_4(FUNC_5(FUNC_1(VAR_2), VAR_0, &VAR_3) == 1)) {
  FUNC_2(VAR_2);
  FUNC_3(&VAR_1, VAR_3);
 } else
  FUNC_0(VAR_2->parent,
   "hwmon_device_unregister() failed: bad class ID!\n");
}
