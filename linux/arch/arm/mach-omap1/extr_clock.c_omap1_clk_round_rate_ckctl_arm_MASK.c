
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int FUNC_0 (struct clk*,unsigned long) ;

long FUNC_1(struct clk *VAR_0, unsigned long VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;
 if (VAR_2 > 3)
  VAR_2 = 3;
 return VAR_0->parent->rate / (1 << VAR_2);
}
