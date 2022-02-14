
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_channel {unsigned int index; int bpmp; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static bool
FUNC_2(struct tegra_bpmp_channel *VAR_0)
{
 unsigned int VAR_1 = VAR_0->index;

 return FUNC_1(VAR_0->bpmp, VAR_1) == FUNC_0(VAR_1);
}
