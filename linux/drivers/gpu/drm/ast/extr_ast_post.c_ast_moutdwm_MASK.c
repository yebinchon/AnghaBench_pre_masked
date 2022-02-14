
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct ast_private {int dummy; } ;


 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;

void FUNC_2(struct ast_private *VAR_0, u32 VAR_1, u32 VAR_2)
{
 uint32_t VAR_3;
 FUNC_1(VAR_0, 0xf004, VAR_1 & 0xffff0000);
 FUNC_1(VAR_0, 0xf000, 0x1);
 do {
  VAR_3 = FUNC_0(VAR_0, 0xf004) & 0xffff0000;
 } while (VAR_3 != (VAR_1 & 0xffff0000));
 FUNC_1(VAR_0, 0x10000 + (VAR_1 & 0x0000ffff), VAR_2);
}
