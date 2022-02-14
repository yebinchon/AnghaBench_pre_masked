
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll {void* i2c_clk; int i2c_clk_rate; int dev; void* soc_clk; void* ref_clk; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct tegra_dfll *VAR_0)
{
 VAR_0->ref_clk = FUNC_4(VAR_0->dev, "ref");
 if (FUNC_0(VAR_0->ref_clk)) {
  FUNC_3(VAR_0->dev, "missing ref clock\n");
  return FUNC_1(VAR_0->ref_clk);
 }

 VAR_0->soc_clk = FUNC_4(VAR_0->dev, "soc");
 if (FUNC_0(VAR_0->soc_clk)) {
  FUNC_3(VAR_0->dev, "missing soc clock\n");
  return FUNC_1(VAR_0->soc_clk);
 }

 VAR_0->i2c_clk = FUNC_4(VAR_0->dev, "i2c");
 if (FUNC_0(VAR_0->i2c_clk)) {
  FUNC_3(VAR_0->dev, "missing i2c clock\n");
  return FUNC_1(VAR_0->i2c_clk);
 }
 VAR_0->i2c_clk_rate = FUNC_2(VAR_0->i2c_clk);

 return 0;
}
