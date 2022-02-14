
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_device_ctl_info {int kobj; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct edac_device_ctl_info *VAR_0)
{
 FUNC_0(0, "\n");
 FUNC_0(4, "name of kobject is: %s\n", FUNC_1(&VAR_0->kobj));
 FUNC_2(&VAR_0->kobj);
}
