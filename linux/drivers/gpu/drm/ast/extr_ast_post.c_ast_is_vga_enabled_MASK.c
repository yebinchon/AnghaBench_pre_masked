
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {scalar_t__ chip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_private*,int ) ;

bool FUNC_1(struct drm_device *VAR_2)
{
 struct ast_private *VAR_3 = VAR_2->dev_private;
 u8 VAR_4;

 if (VAR_3->chip == VAR_0) {

 } else {
  VAR_4 = FUNC_0(VAR_3, VAR_1);
  return !!(VAR_4 & 0x01);
 }
 return 0;
}
