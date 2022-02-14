
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_drv_pci {int early_setup_done; scalar_t__ hostmode; } ;


 int FUNC_0 (struct bcma_drv_pci*) ;
 scalar_t__ FUNC_1 (struct bcma_drv_pci*) ;

void FUNC_2(struct bcma_drv_pci *VAR_0)
{
 if (VAR_0->early_setup_done)
  return;

 VAR_0->hostmode = FUNC_1(VAR_0);
 if (VAR_0->hostmode)
  goto out;

 FUNC_0(VAR_0);

out:
 VAR_0->early_setup_done = 1;
}
