
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int factor_hw; } ;
struct owl_composite {TYPE_1__ rate; int common; } ;
struct clk_hw {int dummy; } ;


 struct owl_composite* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int *,int *,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
   unsigned long VAR_2)
{
 struct owl_composite *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_3->common,
     &VAR_3->rate.factor_hw,
     VAR_1, VAR_2);
}
