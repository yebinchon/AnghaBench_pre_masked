
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_host_priv {scalar_t__* clks; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct ahci_host_priv *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; VAR_2--)
  if (VAR_1->clks[VAR_2])
   FUNC_0(VAR_1->clks[VAR_2]);
}
