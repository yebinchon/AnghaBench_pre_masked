
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_gate {int flags; int bit_idx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct clk_gate*) ;
 struct clk_gate* FUNC_2 (struct clk_hw*) ;

int FUNC_3(struct clk_hw *VAR_1)
{
 u32 VAR_2;
 struct clk_gate *VAR_3 = FUNC_2(VAR_1);

 VAR_2 = FUNC_1(VAR_3);


 if (VAR_3->flags & VAR_0)
  VAR_2 ^= FUNC_0(VAR_3->bit_idx);

 VAR_2 &= FUNC_0(VAR_3->bit_idx);

 return VAR_2 ? 1 : 0;
}
