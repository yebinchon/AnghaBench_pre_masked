
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_pll {TYPE_1__* vco; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ lock; int cfg_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct clk_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_2, unsigned long
  VAR_3)
{
 struct clk_pll *VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5 = 0;
 unsigned int VAR_6;

 if (VAR_4->vco->lock)
  FUNC_1(VAR_4->vco->lock, VAR_5);

 VAR_6 = FUNC_0(VAR_4->vco->cfg_reg);

 if (VAR_4->vco->lock)
  FUNC_2(VAR_4->vco->lock, VAR_5);

 VAR_6 = (VAR_6 >> VAR_1) & VAR_0;

 return VAR_3 / (1 << VAR_6);
}
