
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ast_private {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ast_private*,int,int ) ;
 scalar_t__ FUNC_1 (struct ast_private*) ;
 int * VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct ast_private *VAR_2)
{
 u32 VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_2, 0x1e6e007c, VAR_1[VAR_3]);
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
   if (FUNC_1(VAR_2))
    break;
  }
  if (VAR_4 == 2)
   return 0;
 }
 return 1;
}
