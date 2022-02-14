
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {scalar_t__ usecount; struct clk* parent; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable ) (struct clk*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct clk*,int ) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_0)
{
 FUNC_0(!VAR_0->usecount);

 if (VAR_0->usecount > 0) {
  VAR_0->usecount--;

  if ((VAR_0->usecount == 0) && (VAR_0->ops->enable))
   VAR_0->ops->enable(VAR_0, 0);

  if (VAR_0->parent)
   FUNC_2(VAR_0->parent);
 }
}
