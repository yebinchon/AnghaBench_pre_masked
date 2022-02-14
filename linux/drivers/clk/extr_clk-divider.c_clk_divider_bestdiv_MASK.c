
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct clk_hw {int dummy; } ;
struct clk_div_table {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int) ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct clk_div_table const*,unsigned long,unsigned long,unsigned long) ;
 void* FUNC_2 (struct clk_div_table const*,int ,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 (struct clk_div_table const*,int,unsigned long) ;
 int FUNC_5 (struct clk_hw*) ;
 unsigned long FUNC_6 (struct clk_hw*,int) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_2, struct clk_hw *VAR_3,
          unsigned long VAR_4,
          unsigned long *VAR_5,
          const struct clk_div_table *VAR_6, u8 VAR_7,
          unsigned long VAR_8)
{
 int VAR_9, VAR_10 = 0;
 unsigned long VAR_11, VAR_12 = 0, VAR_13, VAR_14;
 unsigned long VAR_15 = *VAR_5;

 if (!VAR_4)
  VAR_4 = 1;

 VAR_14 = FUNC_2(VAR_6, VAR_7, VAR_8);

 if (!(FUNC_5(VAR_2) & VAR_0)) {
  VAR_11 = *VAR_5;
  VAR_10 = FUNC_1(VAR_6, VAR_11, VAR_4, VAR_8);
  VAR_10 = VAR_10 == 0 ? 1 : VAR_10;
  VAR_10 = VAR_10 > VAR_14 ? VAR_14 : VAR_10;
  return VAR_10;
 }





 VAR_14 = FUNC_7(VAR_1 / VAR_4, VAR_14);

 for (VAR_9 = FUNC_4(VAR_6, 0, VAR_8); VAR_9 <= VAR_14;
          VAR_9 = FUNC_4(VAR_6, VAR_9, VAR_8)) {
  if (VAR_4 * VAR_9 == VAR_15) {





   *VAR_5 = VAR_15;
   return VAR_9;
  }
  VAR_11 = FUNC_6(VAR_3, VAR_4 * VAR_9);
  VAR_13 = FUNC_0((u64)VAR_11, VAR_9);
  if (FUNC_3(VAR_4, VAR_13, VAR_12, VAR_8)) {
   VAR_10 = VAR_9;
   VAR_12 = VAR_13;
   *VAR_5 = VAR_11;
  }
 }

 if (!VAR_10) {
  VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8);
  *VAR_5 = FUNC_6(VAR_3, 1);
 }

 return VAR_10;
}
