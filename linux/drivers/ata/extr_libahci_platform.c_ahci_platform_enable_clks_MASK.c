
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_host_priv {scalar_t__* clks; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct ahci_host_priv *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0 && VAR_1->clks[VAR_2]; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1->clks[VAR_2]);
  if (VAR_3)
   goto disable_unprepare_clk;
 }
 return 0;

disable_unprepare_clk:
 while (--VAR_2 >= 0)
  FUNC_0(VAR_1->clks[VAR_2]);
 return VAR_3;
}
