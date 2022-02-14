
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_host_priv {int nports; scalar_t__ ahci_regulator; scalar_t__ phy_regulator; scalar_t__* target_pwrs; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct ahci_host_priv *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_1(VAR_0->ahci_regulator);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->phy_regulator);
 if (VAR_1)
  goto disable_ahci_pwrs;

 for (VAR_2 = 0; VAR_2 < VAR_0->nports; VAR_2++) {
  if (!VAR_0->target_pwrs[VAR_2])
   continue;

  VAR_1 = FUNC_1(VAR_0->target_pwrs[VAR_2]);
  if (VAR_1)
   goto disable_target_pwrs;
 }

 return 0;

disable_target_pwrs:
 while (--VAR_2 >= 0)
  if (VAR_0->target_pwrs[VAR_2])
   FUNC_0(VAR_0->target_pwrs[VAR_2]);

 FUNC_0(VAR_0->phy_regulator);
disable_ahci_pwrs:
 FUNC_0(VAR_0->ahci_regulator);
 return VAR_1;
}
