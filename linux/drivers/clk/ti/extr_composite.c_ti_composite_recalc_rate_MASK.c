
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long (* recalc_rate ) (struct clk_hw*,unsigned long) ;} ;


 unsigned long FUNC_0 (struct clk_hw*,unsigned long) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_1,
           unsigned long VAR_2)
{
 return VAR_0.recalc_rate(VAR_1, VAR_2);
}
