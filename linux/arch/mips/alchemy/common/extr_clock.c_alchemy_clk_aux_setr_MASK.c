
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct alchemy_auxpll_clk {unsigned long maxmult; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 struct alchemy_auxpll_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1,
    unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct alchemy_auxpll_clk *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5 = VAR_2;

 if (VAR_2)
  VAR_5 /= VAR_3;
 else
  VAR_5 = 0;


 if (((VAR_5 < 7) && (VAR_5 != 0)) || (VAR_5 > VAR_4->maxmult))
  return -VAR_0;

 FUNC_0(VAR_5, VAR_4->reg);
 return 0;
}
