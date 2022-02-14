
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {long (* round_rate ) (struct clk_hw*,unsigned long,unsigned long*) ;} ;


 TYPE_1__ VAR_0 ;
 long FUNC_0 (struct clk_hw*,unsigned long,unsigned long*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long *VAR_3)
{
 return VAR_0.round_rate(VAR_1, VAR_2, VAR_3);
}
