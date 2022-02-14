
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_clk_info {unsigned int id; } ;



__attribute__((used)) static const struct tegra_bpmp_clk_info *
FUNC_0(const struct tegra_bpmp_clk_info *VAR_0,
      unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_0[VAR_3].id == VAR_2)
   return &VAR_0[VAR_3];

 return ((void*)0);
}
