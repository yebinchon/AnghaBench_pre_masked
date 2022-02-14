
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_channel {int index; TYPE_1__* bpmp; } ;
struct tegra210_bpmp {scalar_t__ arb_sema; } ;
struct TYPE_2__ {struct tegra210_bpmp* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct tegra_bpmp_channel *VAR_1)
{
 struct tegra210_bpmp *VAR_2 = VAR_1->bpmp->priv;

 FUNC_1(FUNC_0(VAR_1->index), VAR_2->arb_sema + VAR_0);

 return 0;
}
