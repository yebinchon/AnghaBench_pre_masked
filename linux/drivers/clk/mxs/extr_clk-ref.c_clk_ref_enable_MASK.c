
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_ref {int idx; scalar_t__ reg; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct clk_ref* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_ref *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(1 << ((VAR_2->idx + 1) * 8 - 1), VAR_2->reg + VAR_0);

 return 0;
}
