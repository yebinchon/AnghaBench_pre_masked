
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned long (* round_rate ) (struct clk*,unsigned long) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (struct clk*,unsigned long) ;

long FUNC_4(struct clk *VAR_1, unsigned long VAR_2)
{
 if (FUNC_0(VAR_1->ops && VAR_1->ops->round_rate)) {
  unsigned long VAR_3, VAR_4;

  FUNC_1(&VAR_0, VAR_3);
  VAR_4 = VAR_1->ops->round_rate(VAR_1, VAR_2);
  FUNC_2(&VAR_0, VAR_3);

  return VAR_4;
 }

 return VAR_2;
}
