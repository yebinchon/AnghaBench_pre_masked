
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mn {int width; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int regmap; } ;
struct clk_dyn_rcg {scalar_t__ bank_reg; scalar_t__* ns_reg; scalar_t__* md_reg; TYPE_2__* p; TYPE_1__ clkr; struct mn* mn; } ;
struct TYPE_4__ {int pre_div_width; } ;


 unsigned long FUNC_0 (unsigned long,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mn*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct mn*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (struct clk_dyn_rcg*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct mn*,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__*) ;
 struct clk_dyn_rcg* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_8(struct clk_hw *VAR_0, unsigned long VAR_1)
{
 struct clk_dyn_rcg *VAR_2 = FUNC_7(VAR_0);
 u32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;
 struct mn *VAR_11;
 bool VAR_12 = !!VAR_2->p[1].pre_div_width;
 bool VAR_13 = !!VAR_2->mn[1].width;

 FUNC_6(VAR_2->clkr.regmap, VAR_2->bank_reg, &VAR_9);
 VAR_10 = FUNC_4(VAR_2, VAR_9);

 FUNC_6(VAR_2->clkr.regmap, VAR_2->ns_reg[VAR_10], &VAR_6);
 VAR_3 = VAR_4 = VAR_5 = VAR_8 = 0;

 if (VAR_13) {
  VAR_11 = &VAR_2->mn[VAR_10];
  FUNC_6(VAR_2->clkr.regmap, VAR_2->md_reg[VAR_10], &VAR_7);
  VAR_3 = FUNC_1(VAR_11, VAR_7);
  VAR_4 = FUNC_2(VAR_11, VAR_6, VAR_3);

  if (VAR_2->ns_reg[0] != VAR_2->ns_reg[1])
   VAR_9 = VAR_6;
  VAR_8 = FUNC_5(VAR_11, VAR_9);
 }

 if (VAR_12)
  VAR_5 = FUNC_3(&VAR_2->p[VAR_10], VAR_6);

 return FUNC_0(VAR_1, VAR_3, VAR_4, VAR_8, VAR_5);
}
