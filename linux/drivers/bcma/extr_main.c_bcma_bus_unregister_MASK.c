
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_bus {int drv_cc_b; int drv_cc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bcma_bus*,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bcma_bus*) ;

void FUNC_4(struct bcma_bus *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->drv_cc);
 if (VAR_2 == -VAR_0)
  FUNC_1(VAR_1, "Some GPIOs are still in use.\n");
 else if (VAR_2)
  FUNC_1(VAR_1, "Can not unregister GPIO driver: %i\n", VAR_2);

 FUNC_0(&VAR_1->drv_cc_b);

 FUNC_3(VAR_1);
}
