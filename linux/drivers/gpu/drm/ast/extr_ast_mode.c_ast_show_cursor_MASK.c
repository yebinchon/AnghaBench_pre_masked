
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_crtc {TYPE_1__* dev; } ;
struct ast_private {int dummy; } ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_1)
{
 struct ast_private *VAR_2 = VAR_1->dev->dev_private;
 u8 VAR_3;

 VAR_3 = 0x2;

 VAR_3 |= 1;
 FUNC_0(VAR_2, VAR_0, 0xcb, 0xfc, VAR_3);
}
