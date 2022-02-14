
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int reg_divider_shift; int reg_divider_width; scalar_t__ reg_divider_offset; scalar_t__ divider_reg; } ;
struct xgene_clk {TYPE_1__ param; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (char*,int ,unsigned long,unsigned long) ;
 struct xgene_clk* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
    unsigned long VAR_1)
{
 struct xgene_clk *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3;

 if (VAR_2->param.divider_reg) {
  VAR_3 = FUNC_3(VAR_2->param.divider_reg +
     VAR_2->param.reg_divider_offset);
  VAR_3 >>= VAR_2->param.reg_divider_shift;
  VAR_3 &= (1 << VAR_2->param.reg_divider_width) - 1;

  FUNC_1("%s clock recalc rate %ld parent %ld\n",
   FUNC_0(VAR_0),
   VAR_1 / VAR_3, VAR_1);

  return VAR_1 / VAR_3;
 } else {
  FUNC_1("%s clock recalc rate %ld parent %ld\n",
   FUNC_0(VAR_0), VAR_1, VAR_1);
  return VAR_1;
 }
}
