
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_fb_helper {TYPE_2__* fb; } ;
struct drm_device {struct armada_private* dev_private; } ;
struct armada_private {struct drm_fb_helper* fbdev; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* destroy ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct drm_fb_helper*) ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(struct drm_device *VAR_0)
{
 struct armada_private *VAR_1 = VAR_0->dev_private;
 struct drm_fb_helper *VAR_2 = VAR_1->fbdev;

 if (VAR_2) {
  FUNC_1(VAR_2);

  FUNC_0(VAR_2);

  if (VAR_2->fb)
   VAR_2->fb->funcs->destroy(VAR_2->fb);

  VAR_1->fbdev = ((void*)0);
 }
}
