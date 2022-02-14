
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;


 int FUNC_0 (struct ast_private*,int ) ;
 int FUNC_1 (struct ast_private*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct ast_private *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0);
 if (VAR_1 == 0xffff)
  return 0;
 VAR_1 |= FUNC_1(VAR_0, 0);
 if (VAR_1 == 0xffff)
  return 0;

 return ~VAR_1 & 0xffff;
}
