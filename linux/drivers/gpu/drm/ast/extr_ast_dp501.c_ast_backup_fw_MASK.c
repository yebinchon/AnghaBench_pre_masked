
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int dummy; } ;


 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*) ;

bool FUNC_2(struct drm_device *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 struct ast_private *VAR_3 = VAR_0->dev_private;
 u32 VAR_4, VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_3, 0x1e6e2100) & 0x01;
 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 4)
   *(u32 *)(VAR_1 + VAR_4) = FUNC_0(VAR_3, VAR_6 + VAR_4);
  return 1;
 }
 return 0;
}
