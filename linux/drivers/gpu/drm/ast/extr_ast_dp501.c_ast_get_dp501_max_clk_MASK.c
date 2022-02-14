
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int dummy; } ;


 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*) ;

u8 FUNC_2(struct drm_device *VAR_0)
{
 struct ast_private *VAR_1 = VAR_0->dev_private;
 u32 VAR_2, VAR_3, VAR_4;
 u8 VAR_5[4], VAR_6, VAR_7, VAR_8 = 0xff;

 VAR_2 = FUNC_1(VAR_1);


 VAR_3 = 0xf000;
 VAR_4 = FUNC_0(VAR_1, VAR_2 + VAR_3);
 if ((VAR_4 & 0xf0) != 0x10)
  return VAR_8;


 VAR_3 = 0xf014;
 *(u32 *)VAR_5 = FUNC_0(VAR_1, VAR_2 + VAR_3);
 if (VAR_5[2] == 0) {
  VAR_6 = VAR_5[0];
  VAR_7 = VAR_5[1];
  VAR_4 = (VAR_6 == 0x0a) ? (90 * VAR_7) : (54 * VAR_7);
  if (VAR_4 > 0xff)
   VAR_4 = 0xff;
  VAR_8 = (u8)VAR_4;
 }
 return VAR_8;
}
