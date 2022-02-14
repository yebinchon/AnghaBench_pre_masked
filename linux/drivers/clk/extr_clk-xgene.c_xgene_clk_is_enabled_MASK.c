
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int reg_clk_mask; scalar_t__ csr_reg; scalar_t__ reg_clk_offset; } ;
struct xgene_clk {TYPE_1__ param; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (char*,int ,...) ;
 struct xgene_clk* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct xgene_clk *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2 = 0;

 if (VAR_1->param.csr_reg) {
  FUNC_1("%s clock checking\n", FUNC_0(VAR_0));
  VAR_2 = FUNC_3(VAR_1->param.csr_reg +
     VAR_1->param.reg_clk_offset);
  FUNC_1("%s clock is %s\n", FUNC_0(VAR_0),
   VAR_2 & VAR_1->param.reg_clk_mask ? "enabled" :
       "disabled");
 }

 if (!VAR_1->param.csr_reg)
  return 1;
 return VAR_2 & VAR_1->param.reg_clk_mask ? 1 : 0;
}
