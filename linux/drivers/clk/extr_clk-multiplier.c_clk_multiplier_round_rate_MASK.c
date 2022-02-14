
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_multiplier {int flags; int width; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (struct clk_hw*,unsigned long,unsigned long*,int ,int ) ;
 struct clk_multiplier* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
      unsigned long *VAR_2)
{
 struct clk_multiplier *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2,
       VAR_3->width, VAR_3->flags);

 return *VAR_2 * VAR_4;
}
