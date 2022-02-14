
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;

__attribute__((used)) static u32 FUNC_2(struct ast_private *VAR_1, u32 VAR_2, u8 VAR_3)
{
 u32 VAR_4, VAR_5;

 FUNC_1(VAR_1, 0x1e6e0070, 0x00000000);
 FUNC_1(VAR_1, 0x1e6e0070, (VAR_2 << 3) | VAR_3);
 VAR_5 = 0;
 do {
  VAR_4 = FUNC_0(VAR_1, 0x1e6e0070) & 0x1000;
  if (++VAR_5 > VAR_0) {
   FUNC_1(VAR_1, 0x1e6e0070, 0x0);
   return 0xffffffff;
  }
 } while (!VAR_4);
 VAR_4 = FUNC_0(VAR_1, 0x1e6e0078);
 VAR_4 = (VAR_4 | (VAR_4 >> 16)) & 0xffff;
 FUNC_1(VAR_1, 0x1e6e0070, 0x00000000);
 return VAR_4;
}
