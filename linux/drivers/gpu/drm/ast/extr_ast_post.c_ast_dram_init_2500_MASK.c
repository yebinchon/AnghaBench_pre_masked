
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;
 int FUNC_2 (struct ast_private*,int ) ;
 int FUNC_3 (struct ast_private*,int ) ;
 int FUNC_4 (struct ast_private*) ;
 int FUNC_5 (struct ast_private*) ;
 int FUNC_6 (struct ast_private*) ;
 int FUNC_7 (struct ast_private*) ;

__attribute__((used)) static bool FUNC_8(struct ast_private *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = 5;

 do {
  if (VAR_4-- == 0)
   return 0;
  FUNC_7(VAR_2);
  FUNC_6(VAR_2);
  FUNC_4(VAR_2);

  VAR_3 = FUNC_0(VAR_2, 0x1E6E2070);
  if (VAR_3 & 0x01000000)
   FUNC_3(VAR_2, VAR_1);
  else
   FUNC_2(VAR_2, VAR_0);
 } while (!FUNC_5(VAR_2));

 FUNC_1(VAR_2, 0x1E6E2040, FUNC_0(VAR_2, 0x1E6E2040) | 0x41);


 VAR_3 = FUNC_0(VAR_2, 0x1E6E200C) & 0xF9FFFFFF;
 FUNC_1(VAR_2, 0x1E6E200C, VAR_3 | 0x10000000);

 return 1;
}
