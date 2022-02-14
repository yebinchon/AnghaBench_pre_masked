
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct clk {TYPE_3__* core; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct TYPE_5__ {TYPE_1__* hw; } ;
struct TYPE_4__ {struct clk* clk; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

struct clk *FUNC_2(struct clk *VAR_0)
{
 struct clk *VAR_1;

 if (!VAR_0)
  return ((void*)0);

 FUNC_0();

 VAR_1 = !VAR_0->core->parent ? ((void*)0) : VAR_0->core->parent->hw->clk;
 FUNC_1();

 return VAR_1;
}
