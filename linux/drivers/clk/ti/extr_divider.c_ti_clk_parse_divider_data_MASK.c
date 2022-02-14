
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_div_table {int div; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct clk_div_table* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct clk_div_table* FUNC_2 (int,int,int ) ;

int FUNC_3(int *VAR_4, int VAR_5, int VAR_6,
         u8 VAR_7, u8 *VAR_8,
         const struct clk_div_table **VAR_9)
{
 int VAR_10 = 0;
 u32 VAR_11;
 int VAR_12;
 int VAR_13;
 struct clk_div_table *VAR_14;

 if (!VAR_4) {
  if (VAR_7 & VAR_1)
   VAR_11 = 1;
  else
   VAR_11 = 0;

  VAR_12 = 1;

  while (VAR_12 < VAR_6) {
   if (VAR_7 & VAR_0)
    VAR_12 <<= 1;
   else
    VAR_12++;
   VAR_11++;
  }

  *VAR_8 = FUNC_1(VAR_11);
  *VAR_9 = ((void*)0);

  return 0;
 }

 VAR_13 = 0;

 while (!VAR_5 || VAR_13 < VAR_5) {
  if (VAR_4[VAR_13] == -1)
   break;
  if (VAR_4[VAR_13])
   VAR_10++;
  VAR_13++;
 }

 VAR_5 = VAR_13;

 VAR_14 = FUNC_2(VAR_10 + 1, sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  *VAR_9 = FUNC_0(-VAR_2);
  return -VAR_2;
 }

 VAR_10 = 0;
 *VAR_8 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
  if (VAR_4[VAR_13] > 0) {
   VAR_14[VAR_10].div = VAR_4[VAR_13];
   VAR_14[VAR_10].val = VAR_13;
   VAR_10++;
   *VAR_8 = VAR_13;
  }

 *VAR_8 = FUNC_1(*VAR_8);
 *VAR_9 = VAR_14;

 return 0;
}
