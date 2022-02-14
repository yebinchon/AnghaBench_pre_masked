
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned long (* recalc_rate ) (int ,unsigned long) ;} ;


 int FUNC_0 (struct clk_core*) ;
 int FUNC_1 (struct clk_core*) ;
 unsigned long FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_core *VAR_0,
    unsigned long VAR_1)
{
 unsigned long VAR_2 = VAR_1;

 if (VAR_0->ops->recalc_rate && !FUNC_0(VAR_0)) {
  VAR_2 = VAR_0->ops->recalc_rate(VAR_0->hw, VAR_1);
  FUNC_1(VAR_0);
 }
 return VAR_2;
}
