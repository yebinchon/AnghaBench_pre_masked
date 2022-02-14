
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct clk_fepll_vco {int refclkdiv_shift; int fdbkdiv_shift; int fdbkdiv_width; int refclkdiv_width; int reg; } ;
struct TYPE_3__ {int regmap; } ;
struct TYPE_4__ {TYPE_1__ clkr; } ;
struct clk_fepll {TYPE_2__ cdiv; struct clk_fepll_vco* pll_vco; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static u64 FUNC_2(struct clk_fepll *VAR_0,
       unsigned long VAR_1)
{
 const struct clk_fepll_vco *VAR_2 = VAR_0->pll_vco;
 u32 VAR_3, VAR_4, VAR_5;
 u64 VAR_6;

 FUNC_1(VAR_0->cdiv.clkr.regmap, VAR_2->reg, &VAR_5);
 VAR_4 = (VAR_5 >> VAR_2->refclkdiv_shift) &
      (FUNC_0(VAR_2->refclkdiv_width) - 1);
 VAR_3 = (VAR_5 >> VAR_2->fdbkdiv_shift) &
    (FUNC_0(VAR_2->fdbkdiv_width) - 1);

 VAR_6 = VAR_1 / VAR_4;
 VAR_6 *= 2;
 VAR_6 *= VAR_3;

 return VAR_6;
}
