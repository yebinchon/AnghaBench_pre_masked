
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pfd {int idx; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct clk_pfd* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_pfd *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_1->reg) & (1 << ((VAR_1->idx + 1) * 8 - 1)))
  return 0;

 return 1;
}
