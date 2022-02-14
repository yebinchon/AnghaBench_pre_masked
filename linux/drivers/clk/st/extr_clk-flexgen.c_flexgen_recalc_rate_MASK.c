
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_5__ {struct clk_hw hw; } ;
struct TYPE_4__ {struct clk_hw hw; } ;
struct flexgen {TYPE_2__ fdiv; TYPE_1__ pdiv; } ;
struct TYPE_6__ {unsigned long (* recalc_rate ) (struct clk_hw*,unsigned long) ;} ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 TYPE_3__ VAR_0 ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long) ;
 unsigned long FUNC_2 (struct clk_hw*,unsigned long) ;
 struct flexgen* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
  unsigned long VAR_2)
{
 struct flexgen *VAR_3 = FUNC_3(VAR_1);
 struct clk_hw *VAR_4 = &VAR_3->pdiv.hw;
 struct clk_hw *VAR_5 = &VAR_3->fdiv.hw;
 unsigned long VAR_6;

 FUNC_0(VAR_4, VAR_1);
 FUNC_0(VAR_5, VAR_1);

 VAR_6 = VAR_0.recalc_rate(VAR_4, VAR_2);

 return VAR_0.recalc_rate(VAR_5, VAR_6);
}
