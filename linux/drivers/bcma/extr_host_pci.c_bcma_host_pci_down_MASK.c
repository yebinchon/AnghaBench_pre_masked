
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_bus {scalar_t__ hosttype; int * drv_pci; int host_is_pcie2; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct bcma_bus *VAR_1)
{
 if (VAR_1->hosttype != VAR_0)
  return;

 if (!VAR_1->host_is_pcie2)
  FUNC_0(&VAR_1->drv_pci[0]);
}
