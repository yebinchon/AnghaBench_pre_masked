
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct clk_hw {int dummy; } ;
struct clk_fractional_divider {int (* approximation ) (struct clk_hw*,unsigned long,unsigned long*,unsigned long*,unsigned long*) ;} ;


 int FUNC_0 (struct clk_hw*,unsigned long,unsigned long*,unsigned long*,unsigned long*) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct clk_hw*,unsigned long,unsigned long*,unsigned long*,unsigned long*) ;
 struct clk_fractional_divider* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_5(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long *VAR_2)
{
 struct clk_fractional_divider *VAR_3 = FUNC_4(VAR_0);
 unsigned long VAR_4, VAR_5;
 u64 VAR_6;

 if (!VAR_1 || (!FUNC_1(VAR_0) && VAR_1 >= *VAR_2))
  return *VAR_2;

 if (VAR_3->approximation)
  VAR_3->approximation(VAR_0, VAR_1, VAR_2, &VAR_4, &VAR_5);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4, &VAR_5);

 VAR_6 = (u64)*VAR_2 * VAR_4;
 FUNC_2(VAR_6, VAR_5);

 return VAR_6;
}
