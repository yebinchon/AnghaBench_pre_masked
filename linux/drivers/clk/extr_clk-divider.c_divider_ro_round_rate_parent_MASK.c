
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct clk_hw {int dummy; } ;
struct clk_div_table {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (int ,int) ;
 long VAR_1 ;
 int FUNC_1 (struct clk_div_table const*,unsigned int,unsigned long,int ) ;
 int FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (struct clk_hw*,unsigned long) ;

long FUNC_4(struct clk_hw *VAR_2, struct clk_hw *VAR_3,
      unsigned long VAR_4, unsigned long *VAR_5,
      const struct clk_div_table *VAR_6, u8 VAR_7,
      unsigned long VAR_8, unsigned int VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_9, VAR_8, VAR_7);


 if (FUNC_2(VAR_2) & VAR_0) {
  if (!VAR_3)
   return -VAR_1;

  *VAR_5 = FUNC_3(VAR_3, VAR_4 * VAR_10);
 }

 return FUNC_0((u64)*VAR_5, VAR_10);
}
