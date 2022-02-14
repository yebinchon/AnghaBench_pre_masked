
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ast_private {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ast_private*,int,int ) ;
 size_t FUNC_1 (struct ast_private*) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_2(struct ast_private *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_5 = 3;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_0(VAR_3, 0x1e6e007c, VAR_2[VAR_6]);
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   if ((VAR_4 = FUNC_1(VAR_3)) != 0) {
    VAR_5 &= VAR_4;
    if (!VAR_5)
     return 0;
    break;
   }
  }
  if (VAR_7 == VAR_0)
   return 0;
 }
 return VAR_5;
}
