
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct freq_tbl {int src; scalar_t__ pre_div; int m; int n; int member_0; } ;
struct clk_hw {int dummy; } ;
struct TYPE_6__ {int regmap; } ;
struct clk_dyn_rcg {TYPE_2__* s; TYPE_3__* p; TYPE_4__* mn; int * md_reg; TYPE_1__ clkr; int * ns_reg; int bank_reg; } ;
struct TYPE_9__ {int width; } ;
struct TYPE_8__ {int pre_div_width; } ;
struct TYPE_7__ {int parent_map; } ;


 int FUNC_0 (struct clk_dyn_rcg*,struct freq_tbl*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct clk_hw*,int ,int ) ;
 int FUNC_5 (struct clk_dyn_rcg*,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 struct clk_dyn_rcg* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_dyn_rcg *VAR_2 = FUNC_7(VAR_0);
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6;
 struct freq_tbl VAR_7 = { 0 };
 bool VAR_8 = !!VAR_2->mn[1].width;
 bool VAR_9 = !!VAR_2->p[1].pre_div_width;

 FUNC_6(VAR_2->clkr.regmap, VAR_2->bank_reg, &VAR_5);
 VAR_6 = FUNC_5(VAR_2, VAR_5);

 FUNC_6(VAR_2->clkr.regmap, VAR_2->ns_reg[VAR_6], &VAR_3);

 if (VAR_8) {
  FUNC_6(VAR_2->clkr.regmap, VAR_2->md_reg[VAR_6], &VAR_4);
  VAR_7.m = FUNC_1(&VAR_2->mn[VAR_6], VAR_4);
  VAR_7.n = FUNC_2(&VAR_2->mn[VAR_6], VAR_3, VAR_7.m);
 }

 if (VAR_9)
  VAR_7.pre_div = FUNC_3(&VAR_2->p[VAR_6], VAR_3) + 1;

 VAR_7.src = FUNC_4(VAR_0, VAR_2->s[VAR_6].parent_map, VAR_1);
 return FUNC_0(VAR_2, &VAR_7);
}
