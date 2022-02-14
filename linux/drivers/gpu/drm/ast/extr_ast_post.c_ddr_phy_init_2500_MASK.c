
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ast_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ast_private *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;

 VAR_3 = 0;
 FUNC_1(VAR_1, 0x1E6E0060, 0x00000005);
 while (!VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   VAR_2 = FUNC_0(VAR_1, 0x1E6E0060) & 0x1;
   if (!VAR_2)
    break;
  }
  if (VAR_4 != VAR_0) {
   VAR_2 = FUNC_0(VAR_1, 0x1E6E0300) & 0x000A0000;
   if (!VAR_2)
    VAR_3 = 1;
  }
  if (!VAR_3) {
   FUNC_1(VAR_1, 0x1E6E0060, 0x00000000);
   FUNC_2(10);
   FUNC_1(VAR_1, 0x1E6E0060, 0x00000005);
  }
 }

 FUNC_1(VAR_1, 0x1E6E0060, 0x00000006);
}
