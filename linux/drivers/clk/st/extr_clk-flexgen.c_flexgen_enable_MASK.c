
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
struct flexgen {TYPE_2__ fgate; TYPE_1__ pgate; } ;
struct TYPE_6__ {int (* enable ) (struct clk_hw*) ;} ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct clk_hw*) ;
 struct flexgen* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1)
{
 struct flexgen *VAR_2 = FUNC_5(VAR_1);
 struct clk_hw *VAR_3 = &VAR_2->pgate.hw;
 struct clk_hw *VAR_4 = &VAR_2->fgate.hw;

 FUNC_0(VAR_3, VAR_1);
 FUNC_0(VAR_4, VAR_1);

 VAR_0.enable(VAR_3);

 VAR_0.enable(VAR_4);

 FUNC_2("%s: flexgen output enabled\n", FUNC_1(VAR_1));
 return 0;
}
