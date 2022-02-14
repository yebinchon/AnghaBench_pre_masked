
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_host_priv {int nports; int phy_regulator; int ahci_regulator; int * target_pwrs; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct ahci_host_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nports; VAR_1++) {
  if (!VAR_0->target_pwrs[VAR_1])
   continue;
  FUNC_0(VAR_0->target_pwrs[VAR_1]);
 }

 FUNC_0(VAR_0->ahci_regulator);
 FUNC_0(VAR_0->phy_regulator);
}
