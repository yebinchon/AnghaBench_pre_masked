
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {scalar_t__ clk_bus; scalar_t__ clk_core; scalar_t__ clk_shader; scalar_t__ clk_reg; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct etnaviv_gpu *VAR_0)
{
 int VAR_1;

 if (VAR_0->clk_reg) {
  VAR_1 = FUNC_1(VAR_0->clk_reg);
  if (VAR_1)
   return VAR_1;
 }

 if (VAR_0->clk_bus) {
  VAR_1 = FUNC_1(VAR_0->clk_bus);
  if (VAR_1)
   return VAR_1;
 }

 if (VAR_0->clk_core) {
  VAR_1 = FUNC_1(VAR_0->clk_core);
  if (VAR_1)
   goto disable_clk_bus;
 }

 if (VAR_0->clk_shader) {
  VAR_1 = FUNC_1(VAR_0->clk_shader);
  if (VAR_1)
   goto disable_clk_core;
 }

 return 0;

disable_clk_core:
 if (VAR_0->clk_core)
  FUNC_0(VAR_0->clk_core);
disable_clk_bus:
 if (VAR_0->clk_bus)
  FUNC_0(VAR_0->clk_bus);

 return VAR_1;
}
