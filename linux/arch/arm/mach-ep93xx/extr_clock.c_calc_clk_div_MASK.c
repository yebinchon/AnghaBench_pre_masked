
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int rate; struct clk* parent; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 struct clk VAR_1 ;
 struct clk VAR_2 ;
 struct clk VAR_3 ;
 unsigned long FUNC_1 (int,int,int) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_4, unsigned long VAR_5,
   int *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9)
{
 struct clk *VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13, VAR_14 = -1;
 int VAR_15, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;


 VAR_11 = FUNC_1(VAR_1 / 4, VAR_2 / 4, VAR_3.rate / 4);
 VAR_5 = FUNC_2(VAR_5, VAR_11);
 for (VAR_15 = 0; VAR_15 < 3; VAR_15++) {
  if (VAR_15 == 0)
   VAR_10 = &VAR_3;
  else if (VAR_15 == 1)
   VAR_10 = &VAR_1;
  else
   VAR_10 = &VAR_2;
  VAR_13 = VAR_10->rate * 2;


  for (VAR_18 = 4; VAR_18 <= 6; VAR_18++) {
   VAR_17 = VAR_13 / (VAR_5 * VAR_18);
   if (VAR_17 < 2 || VAR_17 > 127)
    continue;

   VAR_12 = VAR_13 / (VAR_18 * VAR_17);

   if (!VAR_16 || FUNC_0(VAR_12 - VAR_5) < VAR_14) {
    *VAR_8 = VAR_18 - 3;
    *VAR_9 = VAR_17;
    *VAR_6 = (VAR_15 == 2);
    *VAR_7 = (VAR_15 != 0);
    VAR_4->parent = VAR_10;
    VAR_4->rate = VAR_12;
    VAR_14 = FUNC_0(VAR_12 - VAR_5);
    VAR_16 = 1;
   }
  }
 }

 if (!VAR_16)
  return -VAR_0;

 return 0;
}
