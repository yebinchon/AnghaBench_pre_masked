
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_private*,int ,int) ;

void FUNC_1(struct drm_device *VAR_2)
{
 struct ast_private *VAR_3 = VAR_2->dev_private;

 FUNC_0(VAR_3, VAR_1, 0x01);
 FUNC_0(VAR_3, VAR_0, 0x01);
}
