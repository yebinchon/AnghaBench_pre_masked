
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_omap_reg {int offset; } ;
typedef unsigned long s16 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct clk_omap_reg *VAR_2,
     s16 *VAR_3,
     u8 *VAR_4)
{
 unsigned long VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->offset & 0xff;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  if (VAR_6 == VAR_1[VAR_7]) {
   *VAR_4 = VAR_7 + 1;
   break;
  }
 }

 if (VAR_7 == FUNC_0(VAR_1))
  return -VAR_0;

 VAR_5 = VAR_2->offset;
 VAR_5 &= 0xff00;
 *VAR_3 = VAR_5;

 return 0;
}
