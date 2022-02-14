
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct meson_sclk_div_data {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (struct clk_hw*) ;
 struct clk_hw* FUNC_3 (struct clk_hw*) ;
 unsigned long FUNC_4 (struct clk_hw*,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct clk_hw*,unsigned long,unsigned long,unsigned long) ;
 void* FUNC_7 (struct meson_sclk_div_data*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_2, unsigned long VAR_3,
       unsigned long *VAR_4,
       struct meson_sclk_div_data *VAR_5)
{
 struct clk_hw *VAR_6 = FUNC_3(VAR_2);
 int VAR_7 = 0, VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12 = 0, VAR_13 = 0;

 if (!VAR_3)
  VAR_3 = 1;

 VAR_9 = FUNC_7(VAR_5);

 if (!(FUNC_2(VAR_2) & VAR_0))
  return FUNC_6(VAR_2, VAR_3, *VAR_4, VAR_9);





 VAR_9 = FUNC_5(VAR_1 / VAR_3, VAR_9);

 for (VAR_8 = 2; VAR_8 <= VAR_9; VAR_8++) {





  if (VAR_3 * VAR_8 == *VAR_4)
   return VAR_8;

  VAR_11 = FUNC_4(VAR_6, VAR_3 * VAR_8);
  VAR_10 = FUNC_0((u64)VAR_11, VAR_8);

  if (FUNC_1(VAR_3 - VAR_10) < FUNC_1(VAR_3 - VAR_12)) {
   VAR_7 = VAR_8;
   VAR_12 = VAR_10;
   VAR_13 = VAR_11;
  }
 }

 if (!VAR_7)
  VAR_7 = FUNC_7(VAR_5);
 else
  *VAR_4 = VAR_13;

 return VAR_7;
}
