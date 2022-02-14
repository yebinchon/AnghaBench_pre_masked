
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {TYPE_1__* core; } ;
struct TYPE_2__ {unsigned long min_rate; unsigned long max_rate; } ;



void FUNC_0(struct clk_hw *VAR_0, unsigned long VAR_1,
      unsigned long VAR_2)
{
 VAR_0->core->min_rate = VAR_1;
 VAR_0->core->max_rate = VAR_2;
}
