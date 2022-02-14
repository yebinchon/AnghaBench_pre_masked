
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_mmio_context {int attached_clk; int * clk; } ;
struct regmap {struct regmap_mmio_context* bus_context; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct regmap *VAR_0)
{
 struct regmap_mmio_context *VAR_1 = VAR_0->bus_context;

 FUNC_0(VAR_1->clk);

 VAR_1->attached_clk = 0;
 VAR_1->clk = ((void*)0);
}
