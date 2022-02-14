
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {scalar_t__ divider_reg; } ;
struct xgene_clk {TYPE_1__ param; } ;
struct clk_hw {int dummy; } ;


 struct xgene_clk* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long *VAR_2)
{
 struct xgene_clk *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4 = *VAR_2;
 u32 VAR_5;

 if (VAR_3->param.divider_reg) {

  if (VAR_1 > VAR_4)
   VAR_1 = VAR_4;
  VAR_5 = VAR_4 / VAR_1;
 } else {
  VAR_5 = 1;
 }

 return VAR_4 / VAR_5;
}
