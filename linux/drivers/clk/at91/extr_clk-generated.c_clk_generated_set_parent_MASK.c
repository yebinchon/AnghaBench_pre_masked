
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct clk_hw {int dummy; } ;
struct clk_generated {scalar_t__ parent_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk_hw*) ;
 struct clk_generated* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct clk_generated *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_3->parent_id = VAR_2;
 return 0;
}
