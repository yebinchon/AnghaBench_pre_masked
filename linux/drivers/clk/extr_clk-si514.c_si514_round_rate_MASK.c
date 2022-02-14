
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_si514_muldiv {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_si514_muldiv*,unsigned long) ;
 long FUNC_1 (struct clk_si514_muldiv*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long *VAR_2)
{
 struct clk_si514_muldiv VAR_3;
 int VAR_4;

 if (!VAR_1)
  return 0;

 VAR_4 = FUNC_0(&VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(&VAR_3);
}
