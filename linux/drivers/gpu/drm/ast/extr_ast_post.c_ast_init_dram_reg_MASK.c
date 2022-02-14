
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int chip; scalar_t__ dram_type; } ;
struct ast_dramstruct {int index; int data; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ast_dramstruct* VAR_3 ;
 struct ast_dramstruct* VAR_4 ;
 struct ast_dramstruct* VAR_5 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (struct ast_private*,int) ;
 int FUNC_2 (struct ast_private*,int,int) ;
 int FUNC_3 (struct ast_private*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_6)
{
 struct ast_private *VAR_7 = VAR_6->dev_private;
 u8 VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 const struct ast_dramstruct *VAR_12;

 VAR_8 = FUNC_0(VAR_7, VAR_2, 0xd0, 0xff);

 if ((VAR_8 & 0x80) == 0) {
  if (VAR_7->chip == 131) {
   VAR_12 = VAR_4;
   FUNC_2(VAR_7, 0xf004, 0x1e6e0000);
   FUNC_2(VAR_7, 0xf000, 0x1);
   FUNC_2(VAR_7, 0x10100, 0xa8);

   do {
    ;
   } while (FUNC_1(VAR_7, 0x10100) != 0xa8);
  } else {
   if (VAR_7->chip == 130 || VAR_7->chip == 2200)
    VAR_12 = VAR_5;
   else
    VAR_12 = VAR_3;

   FUNC_2(VAR_7, 0xf004, 0x1e6e0000);
   FUNC_2(VAR_7, 0xf000, 0x1);
   FUNC_2(VAR_7, 0x12000, 0x1688A8A8);
   do {
    ;
   } while (FUNC_1(VAR_7, 0x12000) != 0x01);

   FUNC_2(VAR_7, 0x10000, 0xfc600309);
   do {
    ;
   } while (FUNC_1(VAR_7, 0x10000) != 0x01);
  }

  while (VAR_12->index != 0xffff) {
   if (VAR_12->index == 0xff00) {
    for (VAR_11 = 0; VAR_11 < 15; VAR_11++)
     FUNC_4(VAR_12->data);
   } else if (VAR_12->index == 0x4 && VAR_7->chip != 131) {
    VAR_9 = VAR_12->data;
    if (VAR_7->dram_type == VAR_0)
     VAR_9 = 0x00000d89;
    else if (VAR_7->dram_type == VAR_1)
     VAR_9 = 0x00000c8d;

    VAR_10 = FUNC_1(VAR_7, 0x12070);
    VAR_10 &= 0xc;
    VAR_10 <<= 2;
    FUNC_2(VAR_7, 0x10000 + VAR_12->index, VAR_9 | VAR_10);
   } else
    FUNC_2(VAR_7, 0x10000 + VAR_12->index, VAR_12->data);
   VAR_12++;
  }


  VAR_9 = FUNC_1(VAR_7, 0x10120);
  if (VAR_9 == 0x5061) {
   VAR_9 = FUNC_1(VAR_7, 0x10004);
   if (VAR_9 & 0x40)
    FUNC_3(VAR_7, 16);
   else
    FUNC_3(VAR_7, 32);
  }

  switch (VAR_7->chip) {
  case 131:
   VAR_10 = FUNC_1(VAR_7, 0x10140);
   FUNC_2(VAR_7, 0x10140, VAR_10 | 0x40);
   break;
  case 132:
  case 130:
  case 128:
  case 129:
   VAR_10 = FUNC_1(VAR_7, 0x1200c);
   FUNC_2(VAR_7, 0x1200c, VAR_10 & 0xfffffffd);
   VAR_10 = FUNC_1(VAR_7, 0x12040);
   FUNC_2(VAR_7, 0x12040, VAR_10 | 0x40);
   break;
  default:
   break;
  }
 }


 do {
  VAR_8 = FUNC_0(VAR_7, VAR_2, 0xd0, 0xff);
 } while ((VAR_8 & 0x40) == 0);
}
