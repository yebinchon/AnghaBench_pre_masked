
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_apmu {unsigned long enable_mask; scalar_t__ lock; int base; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct clk_apmu* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_0)
{
 struct clk_apmu *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;
 unsigned long VAR_3 = 0;

 if (VAR_1->lock)
  FUNC_1(VAR_1->lock, VAR_3);

 VAR_2 = FUNC_0(VAR_1->base) & ~VAR_1->enable_mask;
 FUNC_4(VAR_2, VAR_1->base);

 if (VAR_1->lock)
  FUNC_2(VAR_1->lock, VAR_3);
}
