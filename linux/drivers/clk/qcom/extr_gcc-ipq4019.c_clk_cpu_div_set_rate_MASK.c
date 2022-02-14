
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct freq_tbl {int pre_div; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int regmap; } ;
struct TYPE_4__ {int shift; int reg; TYPE_1__ clkr; int width; } ;
struct clk_fepll {TYPE_2__ cdiv; int freq_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct freq_tbl* FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct clk_fepll* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct clk_fepll *VAR_4 = FUNC_3(VAR_1);
 const struct freq_tbl *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_4->freq_tbl, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (FUNC_0(VAR_4->cdiv.width) - 1) << VAR_4->cdiv.shift;
 VAR_7 = FUNC_2(VAR_4->cdiv.clkr.regmap,
     VAR_4->cdiv.reg, VAR_6,
     VAR_5->pre_div << VAR_4->cdiv.shift);




 FUNC_4(1);

 return 0;
}
