
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct ast_private *VAR_1)
{
 u8 VAR_2;
 u32 VAR_3 = 0;
 do {
  VAR_2 = FUNC_0(VAR_1, VAR_0, 0xd2, 0xff);
  VAR_2 &= 0x80;
  FUNC_1(100);
 } while ((VAR_2) && (VAR_3++ < 1000));

 if (VAR_3 < 1000)
  return 1;
 else
  return 0;
}
