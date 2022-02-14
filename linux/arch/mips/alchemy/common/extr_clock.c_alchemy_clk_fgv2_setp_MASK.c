
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct clk_hw {int dummy; } ;
struct alchemy_fgcs_clk {int reglock; scalar_t__ isen; scalar_t__ parent; } ;


 int FUNC_0 (struct alchemy_fgcs_clk*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct alchemy_fgcs_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct alchemy_fgcs_clk *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;

 FUNC_1(VAR_2->reglock, VAR_3);
 VAR_2->parent = VAR_1 + 1;
 if (VAR_2->isen)
  FUNC_0(VAR_2);
 FUNC_2(VAR_2->reglock, VAR_3);

 return 0;
}
