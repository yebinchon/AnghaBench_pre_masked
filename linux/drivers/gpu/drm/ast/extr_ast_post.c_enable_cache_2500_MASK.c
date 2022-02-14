
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;


 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ast_private *VAR_0)
{
 u32 VAR_1, VAR_2;

 VAR_1 = FUNC_0(VAR_0, 0x1E6E0004);
 FUNC_1(VAR_0, 0x1E6E0004, VAR_1 | 0x1000);

 do
  VAR_2 = FUNC_0(VAR_0, 0x1E6E0004);
 while (!(VAR_2 & 0x80000));
 FUNC_1(VAR_0, 0x1E6E0004, VAR_1 | 0x400);
}
