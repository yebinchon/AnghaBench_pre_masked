
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ast_private*) ;
 int FUNC_2 (struct ast_private*,int ,int,int) ;
 int FUNC_3 (struct ast_private*,int) ;
 int FUNC_4 (struct ast_private*,int,int) ;
 int FUNC_5 (struct ast_private*,int) ;
 int FUNC_6 (struct ast_private*,int,int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct drm_device *VAR_1)
{
 struct ast_private *VAR_2 = VAR_1->dev_private;
 u32 VAR_3;
 u8 VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_0, 0xd0, 0xff);
 if ((VAR_4 & 0x80) == 0) {

  FUNC_4(VAR_2, 0x1e600000, 0xAEED1A03);
  FUNC_4(VAR_2, 0x1e600084, 0x00010000);
  FUNC_4(VAR_2, 0x1e600088, 0x00000000);
  FUNC_4(VAR_2, 0x1e6e2000, 0x1688A8A8);
  FUNC_6(VAR_2, 0xf004, 0x1e6e0000);
  FUNC_6(VAR_2, 0xf000, 0x1);
  FUNC_6(VAR_2, 0x12000, 0x1688a8a8);
  while (FUNC_5(VAR_2, 0x12000) != 0x1)
   ;

  FUNC_6(VAR_2, 0x10000, 0xfc600309);
  while (FUNC_5(VAR_2, 0x10000) != 0x1)
   ;


  VAR_3 = FUNC_5(VAR_2, 0x12008);
  VAR_3 |= 0x73;
  FUNC_6(VAR_2, 0x12008, VAR_3);


  FUNC_4(VAR_2, 0x1e6e2090, 0x20000000);
  VAR_3 = FUNC_3(VAR_2, 0x1e6e2094);
  VAR_3 |= 0x00004000;
  FUNC_4(VAR_2, 0x1e6e2094, VAR_3);
  VAR_3 = FUNC_3(VAR_2, 0x1e6e2070);
  if (VAR_3 & 0x00800000) {
   FUNC_4(VAR_2, 0x1e6e207c, 0x00800000);
   FUNC_7(100);
   FUNC_4(VAR_2, 0x1e6e2070, 0x00800000);
  }

  if (!FUNC_1(VAR_2))
   FUNC_0("DRAM init failed !\n");

  VAR_3 = FUNC_3(VAR_2, 0x1e6e2040);
  FUNC_4(VAR_2, 0x1e6e2040, VAR_3 | 0x40);
 }


 do {
  VAR_4 = FUNC_2(VAR_2, VAR_0, 0xd0, 0xff);
 } while ((VAR_4 & 0x40) == 0);
}
