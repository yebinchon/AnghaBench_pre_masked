
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_frac_div {int flags; int frac_width; int width; } ;


 int FUNC_0 (unsigned long,unsigned long,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct tegra_clk_frac_div *VAR_0, unsigned long VAR_1,
     unsigned long VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0->width,
      VAR_0->frac_width, VAR_0->flags);

 if (VAR_3 < 0)
  return 0;

 return VAR_3;
}
