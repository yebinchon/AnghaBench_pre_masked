
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* dev; } ;
struct ast_private {int dummy; } ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_1)
{
 struct ast_private *VAR_2 = VAR_1->dev->dev_private;
 FUNC_0(VAR_2, VAR_0, 0xcb, 0xfc, 0x00);
}
