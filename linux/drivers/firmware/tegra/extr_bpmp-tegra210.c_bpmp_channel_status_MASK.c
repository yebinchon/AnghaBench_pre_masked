
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_bpmp {struct tegra210_bpmp* priv; } ;
struct tegra210_bpmp {scalar_t__ arb_sema; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct tegra_bpmp *VAR_1, unsigned int VAR_2)
{
 struct tegra210_bpmp *VAR_3 = VAR_1->priv;

 return FUNC_1(VAR_3->arb_sema + VAR_0) & FUNC_0(VAR_2);
}
