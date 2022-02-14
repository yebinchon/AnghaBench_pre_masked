
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (struct ast_private*) ;

__attribute__((used)) static u32 FUNC_2(struct drm_device *VAR_6)
{
 struct ast_private *VAR_7 = VAR_6->dev_private;
 u8 VAR_8;
 u32 VAR_9;
 FUNC_1(VAR_7);

 VAR_9 = VAR_1;
 VAR_8 = FUNC_0(VAR_7, VAR_0, 0xaa, 0xff);
 switch (VAR_8 & 3) {
 case 0: VAR_9 = VAR_5; break;
 case 1: VAR_9 = VAR_2; break;
 case 2: VAR_9 = VAR_3; break;
 case 3: VAR_9 = VAR_4; break;
 }

 VAR_8 = FUNC_0(VAR_7, VAR_0, 0x99, 0xff);
 switch (VAR_8 & 0x03) {
 case 1:
  VAR_9 -= 0x100000;
  break;
 case 2:
  VAR_9 -= 0x200000;
  break;
 case 3:
  VAR_9 -= 0x400000;
  break;
 }

 return VAR_9;
}
