
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct berlin2_avpll_channel {int index; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct berlin2_avpll_channel* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct berlin2_avpll_channel *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 if (VAR_3->index == 7)
  return 1;

 VAR_4 = FUNC_0(VAR_3->base + VAR_0);
 VAR_4 &= VAR_1 << VAR_3->index;

 return !!VAR_4;
}
