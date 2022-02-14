
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pfdv2 {int vld_bit; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct clk_pfdv2 *VAR_1)
{
 u32 VAR_2;

 return FUNC_0(VAR_1->reg, VAR_2, VAR_2 & (1 << VAR_1->vld_bit),
      0, VAR_0);
}
