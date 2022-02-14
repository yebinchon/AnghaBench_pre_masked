
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_4__ {int hw; } ;
struct clk_fixup_div {TYPE_2__ divider; TYPE_1__* ops; } ;
struct TYPE_3__ {unsigned long (* recalc_rate ) (int *,unsigned long) ;} ;


 unsigned long FUNC_0 (int *,unsigned long) ;
 struct clk_fixup_div* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_fixup_div *VAR_2 = FUNC_1(VAR_0);

 return VAR_2->ops->recalc_rate(&VAR_2->divider.hw, VAR_1);
}
