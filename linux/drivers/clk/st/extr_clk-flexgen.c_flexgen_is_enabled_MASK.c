
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_3__ {struct clk_hw hw; } ;
struct flexgen {TYPE_1__ fgate; } ;
struct TYPE_4__ {int (* is_enabled ) (struct clk_hw*) ;} ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (struct clk_hw*) ;
 struct flexgen* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct flexgen *VAR_2 = FUNC_2(VAR_1);
 struct clk_hw *VAR_3 = &VAR_2->fgate.hw;

 FUNC_0(VAR_3, VAR_1);

 if (!VAR_0.is_enabled(VAR_3))
  return 0;

 return 1;
}
