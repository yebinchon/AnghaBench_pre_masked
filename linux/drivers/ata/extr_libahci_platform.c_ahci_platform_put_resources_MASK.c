
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ahci_host_priv {int nports; scalar_t__* target_pwrs; scalar_t__* clks; scalar_t__ got_runtime_pm; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1, void *VAR_2)
{
 struct ahci_host_priv *VAR_3 = VAR_2;
 int VAR_4;

 if (VAR_3->got_runtime_pm) {
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_3->clks[VAR_4]; VAR_4++)
  FUNC_0(VAR_3->clks[VAR_4]);





 for (VAR_4 = 0; VAR_4 < VAR_3->nports; VAR_4++)
  if (VAR_3->target_pwrs && VAR_3->target_pwrs[VAR_4])
   FUNC_4(VAR_3->target_pwrs[VAR_4]);

 FUNC_1(VAR_3->target_pwrs);
}
