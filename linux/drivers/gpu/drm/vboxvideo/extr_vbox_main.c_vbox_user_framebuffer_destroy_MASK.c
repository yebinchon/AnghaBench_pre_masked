
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbox_framebuffer {scalar_t__ obj; } ;
struct drm_framebuffer {int dummy; } ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 struct vbox_framebuffer* FUNC_3 (struct drm_framebuffer*) ;

__attribute__((used)) static void FUNC_4(struct drm_framebuffer *VAR_0)
{
 struct vbox_framebuffer *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->obj)
  FUNC_1(VAR_1->obj);

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
