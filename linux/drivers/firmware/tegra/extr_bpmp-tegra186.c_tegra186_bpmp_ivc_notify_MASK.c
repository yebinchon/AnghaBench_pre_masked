
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_ivc {int dummy; } ;
struct tegra_bpmp {struct tegra186_bpmp* priv; } ;
struct TYPE_2__ {int * channel; } ;
struct tegra186_bpmp {TYPE_1__ mbox; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_bpmp*) ;

__attribute__((used)) static void FUNC_2(struct tegra_ivc *VAR_0, void *VAR_1)
{
 struct tegra_bpmp *VAR_2 = VAR_1;
 struct tegra186_bpmp *VAR_3 = VAR_2->priv;

 if (FUNC_0(VAR_3->mbox.channel == ((void*)0)))
  return;

 FUNC_1(VAR_2);
}
