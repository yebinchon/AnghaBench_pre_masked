
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct r9a06g032_clk_dualgate {TYPE_1__* gate; int clocks; int selector; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int gate; } ;


 int FUNC_0 (int ,int ) ;
 struct r9a06g032_clk_dualgate* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct r9a06g032_clk_dualgate *VAR_1 = FUNC_1(VAR_0);
 u8 VAR_2 = FUNC_0(VAR_1->clocks, VAR_1->selector);

 return FUNC_0(VAR_1->clocks, VAR_1->gate[VAR_2].gate);
}
