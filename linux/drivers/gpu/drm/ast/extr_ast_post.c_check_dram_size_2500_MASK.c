
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;


 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ast_private *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0, 0x1E6E0004) & 0xfffffffc;
 VAR_3 = FUNC_0(VAR_0, 0x1E6E0014) & 0xffffff00;

 FUNC_1(VAR_0, 0xA0100000, 0x41424344);
 FUNC_1(VAR_0, 0x90100000, 0x35363738);
 FUNC_1(VAR_0, 0x88100000, 0x292A2B2C);
 FUNC_1(VAR_0, 0x80100000, 0x1D1E1F10);


 if (FUNC_0(VAR_0, 0xA0100000) == 0x41424344) {
  VAR_2 |= 0x03;
  VAR_3 |= (VAR_1 >> 24) & 0xFF;

 } else if (FUNC_0(VAR_0, 0x90100000) == 0x35363738) {
  VAR_2 |= 0x02;
  VAR_3 |= (VAR_1 >> 16) & 0xFF;

 } else if (FUNC_0(VAR_0, 0x88100000) == 0x292A2B2C) {
  VAR_2 |= 0x01;
  VAR_3 |= (VAR_1 >> 8) & 0xFF;
 } else {
  VAR_3 |= VAR_1 & 0xFF;
 }
 FUNC_1(VAR_0, 0x1E6E0004, VAR_2);
 FUNC_1(VAR_0, 0x1E6E0014, VAR_3);
}
