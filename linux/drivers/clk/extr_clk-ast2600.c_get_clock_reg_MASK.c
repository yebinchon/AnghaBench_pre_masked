
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aspeed_clk_gate {int clock_idx; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct aspeed_clk_gate *VAR_2)
{
 if (VAR_2->clock_idx < 32)
  return VAR_0;

 return VAR_1;
}
