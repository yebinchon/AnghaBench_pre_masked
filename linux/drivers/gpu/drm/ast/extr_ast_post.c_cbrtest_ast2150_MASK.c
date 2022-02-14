
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ast_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct ast_private*,int) ;

__attribute__((used)) static int FUNC_1(struct ast_private *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
  if (FUNC_0(VAR_0, VAR_1))
   return 0;
 return 1;
}
