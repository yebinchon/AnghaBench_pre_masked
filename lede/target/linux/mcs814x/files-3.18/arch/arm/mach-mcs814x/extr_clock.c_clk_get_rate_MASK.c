
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {unsigned long rate; struct clk* parent; TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned long (* get_rate ) (struct clk*) ;} ;


 int FUNC_0 (struct clk*) ;
 unsigned long FUNC_1 (struct clk*) ;
 scalar_t__ FUNC_2 (int ) ;

unsigned long FUNC_3(struct clk *VAR_0)
{
 if (FUNC_2(FUNC_0(VAR_0)))
  return 0;

 if (VAR_0->rate)
  return VAR_0->rate;

 if (VAR_0->ops && VAR_0->ops->get_rate)
  return VAR_0->ops->get_rate(VAR_0);

 return FUNC_3(VAR_0->parent);
}
