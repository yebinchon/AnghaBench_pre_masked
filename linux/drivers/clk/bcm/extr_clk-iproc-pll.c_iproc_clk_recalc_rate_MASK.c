
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct iproc_pll {scalar_t__ control_base; } ;
struct TYPE_2__ {unsigned int shift; int width; scalar_t__ offset; } ;
struct iproc_clk_ctrl {int flags; TYPE_1__ mdiv; } ;
struct iproc_clk {struct iproc_pll* pll; struct iproc_clk_ctrl* ctrl; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (scalar_t__) ;
 struct iproc_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
  unsigned long VAR_2)
{
 struct iproc_clk *VAR_3 = FUNC_2(VAR_1);
 const struct iproc_clk_ctrl *VAR_4 = VAR_3->ctrl;
 struct iproc_pll *VAR_5 = VAR_3->pll;
 u32 VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;

 if (VAR_2 == 0)
  return 0;

 VAR_6 = FUNC_1(VAR_5->control_base + VAR_4->mdiv.offset);
 VAR_7 = (VAR_6 >> VAR_4->mdiv.shift) & FUNC_0(VAR_4->mdiv.width);
 if (VAR_7 == 0)
  VAR_7 = 256;

 if (VAR_4->flags & VAR_0)
  VAR_8 = VAR_2 / (VAR_7 * 2);
 else
  VAR_8 = VAR_2 / VAR_7;

 return VAR_8;
}
