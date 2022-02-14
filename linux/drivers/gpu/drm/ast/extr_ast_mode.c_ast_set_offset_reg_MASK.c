
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct drm_framebuffer {int* pitches; } ;
struct drm_crtc {TYPE_2__* primary; TYPE_1__* dev; } ;
struct ast_private {int dummy; } ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;
struct TYPE_3__ {struct ast_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_1)
{
 struct ast_private *VAR_2 = VAR_1->dev->dev_private;
 const struct drm_framebuffer *VAR_3 = VAR_1->primary->fb;

 u16 VAR_4;

 VAR_4 = VAR_3->pitches[0] >> 3;
 FUNC_0(VAR_2, VAR_0, 0x13, (VAR_4 & 0xff));
 FUNC_0(VAR_2, VAR_0, 0xb0, (VAR_4 >> 8) & 0x3f);
}
