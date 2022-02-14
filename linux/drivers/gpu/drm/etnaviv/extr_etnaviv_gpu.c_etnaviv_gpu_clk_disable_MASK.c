
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {scalar_t__ clk_reg; scalar_t__ clk_bus; scalar_t__ clk_core; scalar_t__ clk_shader; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct etnaviv_gpu *VAR_0)
{
 if (VAR_0->clk_shader)
  FUNC_0(VAR_0->clk_shader);
 if (VAR_0->clk_core)
  FUNC_0(VAR_0->clk_core);
 if (VAR_0->clk_bus)
  FUNC_0(VAR_0->clk_bus);
 if (VAR_0->clk_reg)
  FUNC_0(VAR_0->clk_reg);

 return 0;
}
