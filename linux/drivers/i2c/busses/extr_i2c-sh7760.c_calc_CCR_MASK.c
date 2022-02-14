
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long rate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 unsigned long FUNC_2 (unsigned long) ;
 struct clk* FUNC_3 (int *,char*) ;
 int FUNC_4 (struct clk*) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_1)
{
 struct clk *VAR_2;
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 signed char VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_2 = FUNC_3(((void*)0), "peripheral_clk");
 if (FUNC_0(VAR_2)) {
  return FUNC_1(VAR_2);
 } else {
  VAR_3 = VAR_2->rate;
  FUNC_4(VAR_2);
 }

 VAR_6 = VAR_1;
 VAR_11 = VAR_9 = VAR_4 = 0;
 for (VAR_8 = 3; VAR_8 >= 0; VAR_8--) {
  VAR_7 = VAR_3 / (1 + VAR_8);
  if (VAR_7 >= 20000000)
   continue;
  VAR_12 = ((VAR_7 / VAR_1) - 20) >> 3;
  for (VAR_10 = VAR_12; (VAR_10 < 63) && VAR_10 <= VAR_12 + 1; VAR_10++) {
   VAR_4 = VAR_7 / (20 + (VAR_10 << 3));
   VAR_5 = FUNC_2(VAR_1 - VAR_4);
   if (VAR_5 < VAR_6) {
    VAR_6 = VAR_5;
    VAR_9 = VAR_8;
    VAR_11 = VAR_10;
   }
  }
 }

 if (VAR_6 > (VAR_1 >> 2))
  return -VAR_0;


 return ((VAR_11 << 2) | VAR_9);
}
