
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_drv_pci {scalar_t__ hostmode; scalar_t__ setup_done; } ;


 int FUNC_0 (struct bcma_drv_pci*) ;
 int FUNC_1 (struct bcma_drv_pci*) ;
 int FUNC_2 (struct bcma_drv_pci*) ;

void FUNC_3(struct bcma_drv_pci *VAR_0)
{
 if (VAR_0->setup_done)
  return;

 FUNC_1(VAR_0);

 if (VAR_0->hostmode)
  FUNC_2(VAR_0);
 else
  FUNC_0(VAR_0);
}
