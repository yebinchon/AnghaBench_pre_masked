
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int u8 ;
struct ast_private {int dummy; } ;


 int FUNC_0 (struct ast_private*,scalar_t__) ;
 int FUNC_1 (struct ast_private*,scalar_t__,int) ;
 int FUNC_2 (struct ast_private*,scalar_t__,int,int) ;

void FUNC_3(struct ast_private *VAR_0,
       uint32_t VAR_1, uint8_t VAR_2,
       uint8_t VAR_3, uint8_t VAR_4)
{
 u8 VAR_5;
 FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_5 = (FUNC_0(VAR_0, VAR_1 + 1) & VAR_3) | VAR_4;
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5);
}
