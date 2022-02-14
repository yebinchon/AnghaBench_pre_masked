
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int reg_divider_width; int reg_divider_shift; scalar_t__ reg_divider_offset; scalar_t__ divider_reg; } ;
struct xgene_clk {scalar_t__ lock; TYPE_1__ param; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (char*,int ,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 struct xgene_clk* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 struct xgene_clk *VAR_3 = FUNC_4(VAR_0);
 unsigned long VAR_4 = 0;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 if (VAR_3->lock)
  FUNC_2(VAR_3->lock, VAR_4);

 if (VAR_3->param.divider_reg) {

  if (VAR_1 > VAR_2)
   VAR_1 = VAR_2;
  VAR_7 = VAR_6 = VAR_2 / VAR_1;
  VAR_6 &= (1 << VAR_3->param.reg_divider_width) - 1;
  VAR_6 <<= VAR_3->param.reg_divider_shift;


  VAR_5 = FUNC_5(VAR_3->param.divider_reg +
    VAR_3->param.reg_divider_offset);
  VAR_5 &= ~(((1 << VAR_3->param.reg_divider_width) - 1)
    << VAR_3->param.reg_divider_shift);
  VAR_5 |= VAR_6;
  FUNC_6(VAR_5, VAR_3->param.divider_reg +
     VAR_3->param.reg_divider_offset);
  FUNC_1("%s clock set rate %ld\n", FUNC_0(VAR_0),
   VAR_2 / VAR_7);
 } else {
  VAR_7 = 1;
 }

 if (VAR_3->lock)
  FUNC_3(VAR_3->lock, VAR_4);

 return VAR_2 / VAR_7;
}
