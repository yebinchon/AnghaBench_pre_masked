
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* disable ) (struct clk_hw*) ;int (* is_enabled ) (struct clk_hw*) ;} ;


 TYPE_1__ VAR_0 ;
 struct clk_hw* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_1)
{
 struct clk_hw *VAR_2;
 int VAR_3;

 if (!VAR_0.is_enabled(VAR_1))
  return;

 VAR_2 = FUNC_0(VAR_1);

 VAR_3 = FUNC_3(VAR_2);

 if (VAR_3)
  FUNC_1(VAR_2);

 VAR_0.disable(VAR_1);

 if (VAR_3)
  FUNC_2(VAR_2);
}
