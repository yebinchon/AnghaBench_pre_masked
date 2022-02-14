
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;
 scalar_t__ FUNC_2 (struct ast_private*) ;

__attribute__((used)) static void FUNC_3(struct ast_private *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;
 u32 VAR_5, VAR_6, VAR_7[2], VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 u16 VAR_13[32][2][2];
 char VAR_14[2][76];


 VAR_6 = FUNC_0(VAR_1, 0x1E6E000C);
 VAR_5 = FUNC_0(VAR_1, 0x1E6E0018);
 VAR_5 &= 0x0000ffff;
 FUNC_1(VAR_1, 0x1E6E0018, VAR_5);

 for (VAR_2 = 0; VAR_2 < 76; VAR_2++) {
  VAR_14[0][VAR_2] = 0x0;
  VAR_14[1][VAR_2] = 0x0;
 }
 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  VAR_13[VAR_4][0][0] = 0xff;
  VAR_13[VAR_4][0][1] = 0x0;
  VAR_13[VAR_4][1][0] = 0xff;
  VAR_13[VAR_4][1][1] = 0x0;
 }
 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  VAR_7[0] = VAR_7[1] = 0;
  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
   FUNC_1(VAR_1, 0x1E6E000C, 0);
   FUNC_1(VAR_1, 0x1E6E0018, VAR_5 | (VAR_4 << 16) | (VAR_3 << 23));
   FUNC_1(VAR_1, 0x1E6E000C, VAR_6);
   for (VAR_2 = 0; VAR_2 < 76; VAR_2++) {
    FUNC_1(VAR_1, 0x1E6E0068, 0x00001300 | (VAR_2 << 16) | (VAR_2 << 24));
    FUNC_1(VAR_1, 0x1E6E0070, 0);
    FUNC_1(VAR_1, 0x1E6E0074, VAR_0);
    if (FUNC_2(VAR_1)) {
     if (VAR_2 == 0)
      break;
     VAR_7[VAR_3]++;
     VAR_14[VAR_3][VAR_2] = 'P';
     if (VAR_2 < VAR_13[VAR_4][VAR_3][0])
      VAR_13[VAR_4][VAR_3][0] = (u16) VAR_2;
     if (VAR_2 > VAR_13[VAR_4][VAR_3][1])
      VAR_13[VAR_4][VAR_3][1] = (u16) VAR_2;
    } else if (VAR_7[VAR_3] >= 5)
     break;
    else {
     VAR_13[VAR_4][VAR_3][0] = 0xff;
     VAR_13[VAR_4][VAR_3][1] = 0x0;
    }
   }
  }
  if (VAR_7[0] == 0 && VAR_7[1] == 0)
   VAR_4++;
 }

 VAR_9 = VAR_10 = VAR_11 = VAR_12 = 0;

 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
   if (VAR_13[VAR_4][VAR_3][0] > VAR_13[VAR_4][VAR_3][1])
    continue;
   VAR_8 = VAR_13[VAR_4][VAR_3][1] - VAR_13[VAR_4][VAR_3][0];
   if ((VAR_8+2) < VAR_11)
    continue;
   VAR_7[0] = VAR_7[1] = 0;
   for (VAR_2 = VAR_13[VAR_4][VAR_3][0]; VAR_2 > 0 && VAR_14[VAR_3][VAR_2] != 0; VAR_2--, VAR_7[0]++);
   for (VAR_2 = VAR_13[VAR_4][VAR_3][1]; VAR_2 < 76 && VAR_14[VAR_3][VAR_2] != 0; VAR_2++, VAR_7[1]++);
   if (VAR_7[0] > VAR_7[1])
    VAR_7[0] = VAR_7[1];
   VAR_7[1] = 0;
   if (VAR_7[0] > VAR_12)
    VAR_7[1] = VAR_7[0] - VAR_12;
   if (VAR_8 > (VAR_11+1) && (VAR_7[1] > 0 || VAR_7[0] > 8)) {
    VAR_11 = VAR_8;
    VAR_9 = VAR_4;
    VAR_10 = VAR_3;
    VAR_12 = VAR_7[0];
   } else if (VAR_7[1] > 1 && VAR_12 < 8) {
    if (VAR_8 > VAR_11)
     VAR_11 = VAR_8;
    VAR_9 = VAR_4;
    VAR_10 = VAR_3;
    VAR_12 = VAR_7[0];
   }
  }
 }
 VAR_5 = VAR_5 | (VAR_9 << 16) | (VAR_10 << 23);
 FUNC_1(VAR_1, 0x1E6E0018, VAR_5);

}
