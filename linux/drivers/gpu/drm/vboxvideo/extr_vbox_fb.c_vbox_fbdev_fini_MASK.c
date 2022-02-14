
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fbdev; } ;
struct vbox_framebuffer {int base; int * obj; } ;
struct vbox_private {TYPE_2__ fb_helper; struct vbox_framebuffer afb; } ;
struct drm_gem_vram_object {int dummy; } ;
struct TYPE_4__ {scalar_t__ fbdefio; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_gem_vram_object*) ;
 struct drm_gem_vram_object* FUNC_6 (int *) ;
 int FUNC_7 (struct drm_gem_vram_object*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(struct vbox_private *VAR_0)
{
 struct vbox_framebuffer *VAR_1 = &VAR_0->afb;






 FUNC_1(&VAR_0->fb_helper);

 if (VAR_1->obj) {
  struct drm_gem_vram_object *VAR_2 = FUNC_6(VAR_1->obj);

  FUNC_5(VAR_2);
  FUNC_7(VAR_2);

  FUNC_4(VAR_1->obj);
  VAR_1->obj = ((void*)0);
 }
 FUNC_0(&VAR_0->fb_helper);

 FUNC_3(&VAR_1->base);
 FUNC_2(&VAR_1->base);
}
