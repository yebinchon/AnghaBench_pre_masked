
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct iproc_pll {scalar_t__ control_base; } ;
struct TYPE_2__ {unsigned int shift; scalar_t__ offset; int width; } ;
struct iproc_clk_ctrl {int flags; TYPE_1__ mdiv; } ;
struct iproc_clk {struct iproc_pll* pll; struct iproc_clk_ctrl* ctrl; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct iproc_pll*,scalar_t__,scalar_t__,unsigned int) ;
 unsigned int FUNC_3 (scalar_t__) ;
 struct iproc_clk* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 struct iproc_clk *VAR_5 = FUNC_4(VAR_2);
 const struct iproc_clk_ctrl *VAR_6 = VAR_5->ctrl;
 struct iproc_pll *VAR_7 = VAR_5->pll;
 u32 VAR_8;
 unsigned int VAR_9;

 if (VAR_3 == 0 || VAR_4 == 0)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_4, VAR_3);
 if (VAR_6->flags & VAR_1)
  VAR_9 /= 2;

 if (VAR_9 > 256)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7->control_base + VAR_6->mdiv.offset);
 if (VAR_9 == 256) {
  VAR_8 &= ~(FUNC_1(VAR_6->mdiv.width) << VAR_6->mdiv.shift);
 } else {
  VAR_8 &= ~(FUNC_1(VAR_6->mdiv.width) << VAR_6->mdiv.shift);
  VAR_8 |= VAR_9 << VAR_6->mdiv.shift;
 }
 FUNC_2(VAR_7, VAR_7->control_base, VAR_6->mdiv.offset, VAR_8);

 return 0;
}
