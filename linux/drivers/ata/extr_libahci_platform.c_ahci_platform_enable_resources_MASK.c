
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_host_priv {int rsts; } ;


 int FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 int FUNC_4 (struct ahci_host_priv*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct ahci_host_priv *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto disable_regulator;

 VAR_1 = FUNC_6(VAR_0->rsts);
 if (VAR_1)
  goto disable_clks;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto disable_resets;

 return 0;

disable_resets:
 FUNC_5(VAR_0->rsts);

disable_clks:
 FUNC_0(VAR_0);

disable_regulator:
 FUNC_1(VAR_0);

 return VAR_1;
}
