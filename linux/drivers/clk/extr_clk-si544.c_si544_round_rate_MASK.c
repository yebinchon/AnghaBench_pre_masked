
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_si544 {int dummy; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (struct clk_si544*,unsigned long) ;
 struct clk_si544* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long *VAR_3)
{
 struct clk_si544 *VAR_4 = FUNC_1(VAR_1);

 if (!FUNC_0(VAR_4, VAR_2))
  return -VAR_0;


 return VAR_2;
}
