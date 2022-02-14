
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mn {int mnctr_reset_bit; scalar_t__ width; scalar_t__ reset_in_cc; } ;
struct freq_tbl {scalar_t__ pre_div; int n; int m; } ;
struct TYPE_2__ {unsigned int enable_reg; int regmap; } ;
struct clk_rcg {unsigned int ns_reg; unsigned int md_reg; TYPE_1__ clkr; int p; struct mn mn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mn*,int ,int ,int ) ;
 int FUNC_2 (struct mn*,int ,int ,int ) ;
 int FUNC_3 (struct mn*,int ,int ,int ) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int ,unsigned int,int *) ;
 int FUNC_6 (int ,unsigned int,int ,int ) ;
 int FUNC_7 (int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(struct clk_rcg *VAR_0, const struct freq_tbl *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;
 struct mn *VAR_5 = &VAR_0->mn;
 u32 VAR_6 = 0;
 unsigned int VAR_7;

 if (VAR_0->mn.reset_in_cc)
  VAR_7 = VAR_0->clkr.enable_reg;
 else
  VAR_7 = VAR_0->ns_reg;

 if (VAR_0->mn.width) {
  VAR_6 = FUNC_0(VAR_5->mnctr_reset_bit);
  FUNC_6(VAR_0->clkr.regmap, VAR_7, VAR_6, VAR_6);

  FUNC_5(VAR_0->clkr.regmap, VAR_0->md_reg, &VAR_3);
  VAR_3 = FUNC_1(VAR_5, VAR_1->m, VAR_1->n, VAR_3);
  FUNC_7(VAR_0->clkr.regmap, VAR_0->md_reg, VAR_3);

  FUNC_5(VAR_0->clkr.regmap, VAR_0->ns_reg, &VAR_2);

  if (VAR_0->clkr.enable_reg != VAR_0->ns_reg) {
   FUNC_5(VAR_0->clkr.regmap, VAR_0->clkr.enable_reg, &VAR_4);
   VAR_4 = FUNC_3(VAR_5, VAR_1->m, VAR_1->n, VAR_4);
   FUNC_7(VAR_0->clkr.regmap, VAR_0->clkr.enable_reg, VAR_4);
  } else {
   VAR_2 = FUNC_3(VAR_5, VAR_1->m, VAR_1->n, VAR_2);
  }
  VAR_2 = FUNC_2(VAR_5, VAR_1->m, VAR_1->n, VAR_2);
 } else {
  FUNC_5(VAR_0->clkr.regmap, VAR_0->ns_reg, &VAR_2);
 }

 VAR_2 = FUNC_4(&VAR_0->p, VAR_1->pre_div - 1, VAR_2);
 FUNC_7(VAR_0->clkr.regmap, VAR_0->ns_reg, VAR_2);

 FUNC_6(VAR_0->clkr.regmap, VAR_7, VAR_6, 0);

 return 0;
}
