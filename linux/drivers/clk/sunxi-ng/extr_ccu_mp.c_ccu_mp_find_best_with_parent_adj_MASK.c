
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct clk_hw*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_1,
            unsigned long *VAR_2,
            unsigned long VAR_3,
            unsigned int VAR_4,
            unsigned int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9 = 0;
 unsigned int VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;

 VAR_6 = *VAR_2;





 VAR_13 = VAR_4 * VAR_5;
 VAR_13 = FUNC_1(VAR_0 / VAR_3, VAR_13);

 for (VAR_11 = 1; VAR_11 <= VAR_5; VAR_11 <<= 1) {
  for (VAR_10 = 1; VAR_10 <= VAR_4; VAR_10++) {
   VAR_12 = VAR_10 * VAR_11;

   if (VAR_12 > VAR_13)
    break;

   if (VAR_3 * VAR_12 == VAR_6) {






    *VAR_2 = VAR_6;
    return VAR_3;
   }

   VAR_7 = FUNC_0(VAR_1, VAR_3 * VAR_12);
   VAR_8 = VAR_7 / VAR_12;

   if (VAR_8 <= VAR_3 && VAR_8 > VAR_9) {
    VAR_9 = VAR_8;
    *VAR_2 = VAR_7;

    if (VAR_8 == VAR_3)
     return VAR_3;
   }
  }
 }

 return VAR_9;
}
