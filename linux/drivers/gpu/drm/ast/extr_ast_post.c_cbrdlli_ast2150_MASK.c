
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int,int) ;
 int FUNC_1 (struct ast_private*,int) ;

__attribute__((used)) static void FUNC_2(struct ast_private *VAR_1, int VAR_2)
{
 u32 VAR_3[4], VAR_4[4], VAR_5, VAR_6, VAR_7;

cbr_start:
 VAR_3[0] = VAR_3[1] = VAR_3[2] = VAR_3[3] = 0xff;
 VAR_4[0] = VAR_4[1] = VAR_4[2] = VAR_4[3] = 0x0;
 VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  FUNC_0(VAR_1, 0x1e6e0068, VAR_5 | (VAR_5 << 8) | (VAR_5 << 16) | (VAR_5 << 24));
  VAR_6 = FUNC_1(VAR_1, VAR_2);
  if (VAR_6 != 0) {
   if (VAR_6 & 0x1) {
    if (VAR_3[0] > VAR_5)
     VAR_3[0] = VAR_5;
    if (VAR_4[0] < VAR_5)
     VAR_4[0] = VAR_5;
   }
   VAR_7++;
  } else if (VAR_7 >= VAR_0)
   goto cbr_start;
 }
 if (VAR_4[0] == 0 || (VAR_4[0]-VAR_3[0]) < VAR_0)
  goto cbr_start;

 VAR_5 = VAR_3[0] + (((VAR_4[0] - VAR_3[0]) * 7) >> 4);
 FUNC_0(VAR_1, 0x1e6e0068, VAR_5 | (VAR_5 << 8) | (VAR_5 << 16) | (VAR_5 << 24));
}
