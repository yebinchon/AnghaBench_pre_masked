
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_mmio_context {int attached_clk; struct clk* clk; } ;
struct regmap {struct regmap_mmio_context* bus_context; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;

int FUNC_1(struct regmap *VAR_0, struct clk *VAR_1)
{
 struct regmap_mmio_context *VAR_2 = VAR_0->bus_context;

 VAR_2->clk = VAR_1;
 VAR_2->attached_clk = 1;

 return FUNC_0(VAR_2->clk);
}
