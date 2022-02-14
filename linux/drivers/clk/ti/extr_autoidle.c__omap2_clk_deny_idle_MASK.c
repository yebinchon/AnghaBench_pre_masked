
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw_omap {int autoidle_count; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* deny_idle ) (struct clk_hw_omap*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct clk_hw_omap*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw_omap *VAR_1)
{
 if (VAR_1->ops && VAR_1->ops->deny_idle) {
  unsigned long VAR_2;

  FUNC_0(&VAR_0, VAR_2);
  VAR_1->autoidle_count++;
  if (VAR_1->autoidle_count == 1)
   VAR_1->ops->deny_idle(VAR_1);

  FUNC_1(&VAR_0, VAR_2);
 }
 return 0;
}
