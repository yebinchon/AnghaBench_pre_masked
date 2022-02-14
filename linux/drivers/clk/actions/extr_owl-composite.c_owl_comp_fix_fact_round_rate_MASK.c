
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk_fixed_factor {int hw; } ;
struct TYPE_3__ {struct clk_fixed_factor fix_fact_hw; } ;
struct owl_composite {TYPE_2__* fix_fact_ops; TYPE_1__ rate; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {long (* round_rate ) (int *,unsigned long,unsigned long*) ;} ;


 struct owl_composite* FUNC_0 (struct clk_hw*) ;
 long FUNC_1 (int *,unsigned long,unsigned long*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
   unsigned long *VAR_2)
{
 struct owl_composite *VAR_3 = FUNC_0(VAR_0);
 struct clk_fixed_factor *VAR_4 = &VAR_3->rate.fix_fact_hw;

 return VAR_3->fix_fact_ops->round_rate(&VAR_4->hw, VAR_1, VAR_2);
}
