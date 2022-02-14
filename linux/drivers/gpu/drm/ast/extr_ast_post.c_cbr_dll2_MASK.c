
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;
struct ast2300_dram_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;
 int FUNC_2 (struct ast_private*) ;
 int FUNC_3 (struct ast_private*,struct ast2300_dram_param*) ;
 int FUNC_4 (struct ast_private*) ;

__attribute__((used)) static bool FUNC_5(struct ast_private *VAR_2, struct ast2300_dram_param *VAR_3)
{
 u32 VAR_4[2], VAR_5[2], VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 bool VAR_10 = 0;

 FUNC_4(VAR_2);
 if (FUNC_3(VAR_2, VAR_3) == 0)
  return VAR_10;

CBR_START2:
 VAR_4[0] = VAR_4[1] = 0xff;
 VAR_5[0] = VAR_5[1] = 0x0;
 VAR_8 = 0;
 for (VAR_6 = 0; VAR_6 < 76; VAR_6++) {
  FUNC_1(VAR_2, 0x1E6E0068, 0x00001300 | (VAR_6 << 16) | (VAR_6 << 24));
  FUNC_1(VAR_2, 0x1E6E0074, VAR_0);
  VAR_7 = FUNC_2(VAR_2);
  if (VAR_7 != 0) {
   if (VAR_7 & 0x1) {
    if (VAR_4[0] > VAR_6) {
     VAR_4[0] = VAR_6;
    }
    if (VAR_5[0] < VAR_6) {
     VAR_5[0] = VAR_6;
    }
   }
   if (VAR_7 & 0x2) {
    if (VAR_4[1] > VAR_6) {
     VAR_4[1] = VAR_6;
    }
    if (VAR_5[1] < VAR_6) {
     VAR_5[1] = VAR_6;
    }
   }
   VAR_8++;
  } else if (VAR_8 >= VAR_1) {
   break;
  }
 }
 if (VAR_9++ > 10)
  goto CBR_DONE2;
 if (VAR_5[0] == 0 || (VAR_5[0]-VAR_4[0]) < VAR_1) {
  goto CBR_START2;
 }
 if (VAR_5[1] == 0 || (VAR_5[1]-VAR_4[1]) < VAR_1) {
  goto CBR_START2;
 }
 VAR_10 = 1;
CBR_DONE2:
 VAR_6 = (VAR_4[1] + VAR_5[1]) >> 1;
 VAR_6 <<= 8;
 VAR_6 += (VAR_4[0] + VAR_5[0]) >> 1;
 FUNC_1(VAR_2, 0x1E6E0068, FUNC_0(VAR_2, 0x1E720058) | (VAR_6 << 16));
 return VAR_10;
}
