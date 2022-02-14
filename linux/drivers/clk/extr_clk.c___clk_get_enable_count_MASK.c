
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* core; } ;
struct TYPE_2__ {unsigned int enable_count; } ;



unsigned int FUNC_0(struct clk *VAR_0)
{
 return !VAR_0 ? 0 : VAR_0->core->enable_count;
}
