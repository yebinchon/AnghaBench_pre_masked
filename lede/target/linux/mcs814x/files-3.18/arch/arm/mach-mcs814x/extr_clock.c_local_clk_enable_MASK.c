
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {scalar_t__ usecount; struct clk* parent; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable ) (struct clk*,int) ;} ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*,int) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->parent)
  VAR_1 = FUNC_2(VAR_0->parent);

 if (VAR_1)
  return VAR_1;

 if ((VAR_0->usecount == 0) && (VAR_0->ops->enable))
  VAR_1 = VAR_0->ops->enable(VAR_0, 1);

 if (!VAR_1)
  VAR_0->usecount++;
 else if (VAR_0->parent && VAR_0->parent->ops->enable)
  FUNC_0(VAR_0->parent);

 return VAR_1;
}
