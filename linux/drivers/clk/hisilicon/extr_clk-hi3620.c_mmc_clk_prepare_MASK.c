
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_mmc {scalar_t__ id; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct clk_hw*,unsigned long) ;
 struct clk_mmc* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_mmc *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;

 if (VAR_2->id == VAR_0)
  VAR_3 = 13000000;
 else
  VAR_3 = 25000000;

 return FUNC_0(VAR_1, VAR_3);
}
