
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;
 struct clk_hw* FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (struct clk_hw*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2, unsigned long VAR_3,
        unsigned long *VAR_4, bool VAR_5)
{
 int VAR_6 = 1, VAR_7;
 struct clk_hw *VAR_8 = FUNC_2(VAR_2);
 unsigned long VAR_9 = 0;
 unsigned long VAR_10 = ~0ul;
 int VAR_11 = (1 << (VAR_1 + VAR_0)) - 1;

 for (VAR_7 = 1; VAR_7 < VAR_11; VAR_7++) {
  unsigned long VAR_12, VAR_13, VAR_14;

  if (VAR_5)
   VAR_12 = FUNC_3(VAR_8, VAR_3 * VAR_7);
  else
   VAR_12 = *VAR_4;
  VAR_13 = FUNC_0(VAR_12, VAR_7);
  VAR_14 = FUNC_1(VAR_3 - VAR_13);

  if (VAR_14 < VAR_10) {
   VAR_6 = VAR_7;
   VAR_10 = VAR_14;
   VAR_9 = VAR_12;
  }
 }

 *VAR_4 = VAR_9;
 return VAR_6;
}
