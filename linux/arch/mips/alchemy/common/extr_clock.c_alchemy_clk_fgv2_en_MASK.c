
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct alchemy_fgcs_clk {int reglock; } ;


 int FUNC_0 (struct alchemy_fgcs_clk*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct alchemy_fgcs_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct alchemy_fgcs_clk *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;


 FUNC_1(VAR_1->reglock, VAR_2);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1->reglock, VAR_2);

 return 0;
}
