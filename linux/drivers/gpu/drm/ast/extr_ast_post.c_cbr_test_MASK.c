
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;


 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int ) ;

__attribute__((used)) static int FUNC_2(struct ast_private *VAR_0)
{
 u32 VAR_1;
 int VAR_2;
 VAR_1 = FUNC_1(VAR_0, 0);
 if ((VAR_1 & 0xff) && (VAR_1 & 0xff00))
  return 0;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, VAR_2);
  if ((VAR_1 & 0xff) && (VAR_1 & 0xff00))
   return 0;
 }
 if (!VAR_1)
  return 3;
 else if (VAR_1 & 0xff)
  return 2;
 return 1;
}
