
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {struct clk_core* core; } ;
struct clk_core {TYPE_1__* ops; scalar_t__ enable_count; } ;
struct TYPE_2__ {int (* disable ) (struct clk_hw*) ;int (* enable ) (struct clk_hw*) ;} ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;

void FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_core *VAR_1 = VAR_0->core;

 if (VAR_1->enable_count)
  VAR_1->ops->enable(VAR_0);
 else
  VAR_1->ops->disable(VAR_0);
}
