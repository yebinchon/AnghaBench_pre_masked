
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct clk_hw {int dummy; } ;
struct alchemy_fgcs_clk {int parent; int reglock; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 struct alchemy_fgcs_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct alchemy_fgcs_clk *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2, VAR_3;

 FUNC_0(VAR_1->reglock, VAR_2);
 VAR_3 = VAR_1->parent - 1;
 FUNC_1(VAR_1->reglock, VAR_2);
 return VAR_3;
}
