
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;


 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ast_private *VAR_0)
{
 u32 VAR_1, VAR_2, VAR_3;


 FUNC_1(VAR_0, 0x1E6E0000, 0xFC600309);
 FUNC_1(VAR_0, 0x1E6E0034, 0x00020080);
 for (VAR_1 = 0x1e6e0004; VAR_1 < 0x1e6e0090;) {
  FUNC_1(VAR_0, VAR_1, 0x0);
  VAR_1 += 4;
 }
 FUNC_1(VAR_0, 0x1E6E0034, 0x00020000);

 FUNC_1(VAR_0, 0x1E6E2000, 0x1688A8A8);
 VAR_2 = FUNC_0(VAR_0, 0x1E6E2070) & 0x00800000;
 if (VAR_2) {

  VAR_3 = 0x930023E0;
  FUNC_1(VAR_0, 0x1E6E2160, 0x00011320);
 } else {

  VAR_3 = 0x93002400;
 }
 FUNC_1(VAR_0, 0x1E6E2020, VAR_3);
 FUNC_2(100);
}
