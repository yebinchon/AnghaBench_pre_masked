
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct berlin2_avpll_vco {int flags; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct berlin2_avpll_vco* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3)
{
 struct berlin2_avpll_vco *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->base + VAR_1);
 if (VAR_4->flags & VAR_0)
  VAR_5 >>= 4;

 return !!(VAR_5 & VAR_2);
}
