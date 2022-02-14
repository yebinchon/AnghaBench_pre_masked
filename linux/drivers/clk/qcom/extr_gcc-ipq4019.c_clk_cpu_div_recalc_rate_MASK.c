
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int regmap; } ;
struct TYPE_4__ {int shift; int width; int reg; TYPE_1__ clkr; } ;
struct clk_fepll {TYPE_2__ cdiv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk_fepll*,unsigned long) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ,int ,int*) ;
 struct clk_fepll* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_5(struct clk_hw *VAR_0,
   unsigned long VAR_1)
{
 struct clk_fepll *VAR_2 = FUNC_4(VAR_0);
 u32 VAR_3, VAR_4;
 u64 VAR_5;

 FUNC_3(VAR_2->cdiv.clkr.regmap, VAR_2->cdiv.reg, &VAR_3);
 VAR_3 = (VAR_3 >> VAR_2->cdiv.shift) & (FUNC_0(VAR_2->cdiv.width) - 1);






 if (VAR_3 > 10)
  VAR_4 = (VAR_3 + 1) * 2;
 else
  VAR_4 = VAR_3 + 12;

 VAR_5 = FUNC_1(VAR_2, VAR_1) * 2;
 FUNC_2(VAR_5, VAR_4);

 return VAR_5;
}
