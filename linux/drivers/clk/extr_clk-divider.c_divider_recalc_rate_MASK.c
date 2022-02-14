
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clk_hw {int dummy; } ;
struct clk_div_table {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int,char*,int ) ;
 unsigned int FUNC_2 (struct clk_div_table const*,unsigned int,unsigned long,unsigned long) ;
 int FUNC_3 (struct clk_hw*) ;

unsigned long FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned int VAR_3,
      const struct clk_div_table *VAR_4,
      unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_3, VAR_5, VAR_6);
 if (!VAR_7) {
  FUNC_1(!(VAR_5 & VAR_0),
   "%s: Zero divisor and CLK_DIVIDER_ALLOW_ZERO not set\n",
   FUNC_3(VAR_1));
  return VAR_2;
 }

 return FUNC_0((u64)VAR_2, VAR_7);
}
