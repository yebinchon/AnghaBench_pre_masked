
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct udl_framebuffer {TYPE_1__ base; } ;
struct udl_device {TYPE_3__* crtc; } ;
struct drm_device {struct udl_device* dev_private; } ;
struct TYPE_6__ {TYPE_2__* primary; } ;
struct TYPE_5__ {int fb; } ;


 struct udl_framebuffer* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct udl_framebuffer*,int ,int ,int ,int ) ;

void FUNC_3(struct drm_device *VAR_0)
{
 struct udl_device *VAR_1 = VAR_0->dev_private;
 struct udl_framebuffer *VAR_2;

 if (!VAR_1->crtc || !VAR_1->crtc->primary->fb)
  return;
 FUNC_1(VAR_1->crtc);
 VAR_2 = FUNC_0(VAR_1->crtc->primary->fb);
 FUNC_2(VAR_2, 0, 0, VAR_2->base.width, VAR_2->base.height);
}
