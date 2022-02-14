
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct alchemy_fgcs_clk {int shift; int reg; } ;


 int FUNC_0 (int ) ;
 struct alchemy_fgcs_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
          unsigned long VAR_1)
{
 struct alchemy_fgcs_clk *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3 = FUNC_0(VAR_2->reg) >> (VAR_2->shift + 2);

 VAR_3 = ((VAR_3 & 0xff) + 1) * 2;
 return VAR_1 / VAR_3;
}
