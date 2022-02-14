
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
typedef unsigned long (* clk_calc_rate ) (struct clk_hw*,unsigned long,int) ;



long FUNC_0(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2, clk_calc_rate VAR_3, u8 VAR_4,
  int *VAR_5)
{
 unsigned long VAR_6, VAR_7 = 0;

 for (*VAR_5 = 0; *VAR_5 < VAR_4; (*VAR_5)++) {
  VAR_6 = VAR_7;
  VAR_7 = VAR_3(VAR_0, VAR_2, *VAR_5);
  if (VAR_1 < VAR_7) {

   if (*VAR_5) {
    VAR_7 = VAR_6;
    (*VAR_5)--;
   }
   break;
  }
 }

 if ((*VAR_5) == VAR_4)
  (*VAR_5)--;

 return VAR_7;
}
