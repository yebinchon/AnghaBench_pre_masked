
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ reg_clk_offset; scalar_t__ csr_reg; int reg_clk_mask; scalar_t__ reg_csr_offset; int reg_csr_mask; } ;
struct xgene_clk {scalar_t__ lock; TYPE_1__ param; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 struct xgene_clk* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct clk_hw *VAR_0)
{
 struct xgene_clk *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2 = 0;
 u32 VAR_3;

 if (VAR_1->lock)
  FUNC_2(VAR_1->lock, VAR_2);

 if (VAR_1->param.csr_reg) {
  FUNC_1("%s clock disabled\n", FUNC_0(VAR_0));

  VAR_3 = FUNC_5(VAR_1->param.csr_reg +
     VAR_1->param.reg_csr_offset);
  VAR_3 |= VAR_1->param.reg_csr_mask;
  FUNC_6(VAR_3, VAR_1->param.csr_reg +
     VAR_1->param.reg_csr_offset);


  VAR_3 = FUNC_5(VAR_1->param.csr_reg +
     VAR_1->param.reg_clk_offset);
  VAR_3 &= ~VAR_1->param.reg_clk_mask;
  FUNC_6(VAR_3, VAR_1->param.csr_reg +
     VAR_1->param.reg_clk_offset);
 }

 if (VAR_1->lock)
  FUNC_3(VAR_1->lock, VAR_2);
}
