
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {scalar_t__ chip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (struct ast_private*,int) ;
 int FUNC_2 (struct ast_private*,int ,int,int,int) ;
 int FUNC_3 (struct ast_private*,int,int) ;

__attribute__((used)) static bool FUNC_4(struct drm_device *VAR_2)
{
 struct ast_private *VAR_3 = VAR_2->dev_private;
 u8 VAR_4;
 u32 VAR_5;
 FUNC_3(VAR_3, 0xf004, 0x1e6e0000);
 FUNC_3(VAR_3, 0xf000, 0x1);
 FUNC_3(VAR_3, 0x12000, 0x1688a8a8);

 VAR_4 = FUNC_0(VAR_3, VAR_1, 0xd0, 0xff);
 if (!(VAR_4 & 0x80)) {

  VAR_5 = FUNC_1(VAR_3, 0x12008);

  VAR_5 &= 0xfffff8ff;
  VAR_5 |= 0x00000500;
  FUNC_3(VAR_3, 0x12008, VAR_5);

  if (VAR_3->chip == VAR_0) {
   VAR_5 = FUNC_1(VAR_3, 0x12084);

   VAR_5 |= 0xfffe0000;
   FUNC_3(VAR_3, 0x12084, VAR_5);

   VAR_5 = FUNC_1(VAR_3, 0x12088);

   VAR_5 |= 0x000fffff;
   FUNC_3(VAR_3, 0x12088, VAR_5);

   VAR_5 = FUNC_1(VAR_3, 0x12090);

   VAR_5 &= 0xffffffcf;
   VAR_5 |= 0x00000020;
   FUNC_3(VAR_3, 0x12090, VAR_5);
  } else {
   VAR_5 = FUNC_1(VAR_3, 0x12088);

   VAR_5 |= 0x30000000;
   FUNC_3(VAR_3, 0x12088, VAR_5);

   VAR_5 = FUNC_1(VAR_3, 0x1208c);

   VAR_5 |= 0x000000cf;
   FUNC_3(VAR_3, 0x1208c, VAR_5);

   VAR_5 = FUNC_1(VAR_3, 0x120a4);

   VAR_5 |= 0xffff0000;
   FUNC_3(VAR_3, 0x120a4, VAR_5);

   VAR_5 = FUNC_1(VAR_3, 0x120a8);

   VAR_5 |= 0x0000000f;
   FUNC_3(VAR_3, 0x120a8, VAR_5);

   VAR_5 = FUNC_1(VAR_3, 0x12094);

   VAR_5 |= 0x00000002;
   FUNC_3(VAR_3, 0x12094, VAR_5);
  }
 }


 VAR_5 = FUNC_1(VAR_3, 0x1202c);
 VAR_5 &= 0xfffbffff;
 FUNC_3(VAR_3, 0x1202c, VAR_5);


 FUNC_2(VAR_3, VAR_1, 0xa3, 0xcf, 0x80);
 return 1;
}
