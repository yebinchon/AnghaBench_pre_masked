
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int flags; int usecount; struct clk* parent; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable ) (struct clk*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;

int FUNC_3(struct clk *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->usecount++ == 0) {
  if (VAR_1->parent) {
   VAR_2 = FUNC_3(VAR_1->parent);
   if (VAR_2)
    goto err;

   if (VAR_1->flags & VAR_0)
    FUNC_0(VAR_1->parent);
  }

  VAR_2 = VAR_1->ops->enable(VAR_1);
  if (VAR_2) {
   if (VAR_1->parent)
    FUNC_1(VAR_1->parent);
   goto err;
  }
 }
 return VAR_2;

err:
 VAR_1->usecount--;
 return VAR_2;
}
