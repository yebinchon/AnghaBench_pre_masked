
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkdiv {int lock; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct clkdiv*,int) ;
 struct clkdiv* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_0)
{
 struct clkdiv *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 FUNC_2(VAR_1, 0);
 FUNC_1(&VAR_1->lock, VAR_2);
}
