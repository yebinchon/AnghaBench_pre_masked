
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ user_obj; } ;
struct vmw_framebuffer_surface {TYPE_1__ base; int surface; } ;
struct drm_framebuffer {int dummy; } ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (struct vmw_framebuffer_surface*) ;
 int FUNC_2 (scalar_t__*) ;
 struct vmw_framebuffer_surface* FUNC_3 (struct drm_framebuffer*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_framebuffer *VAR_0)
{
 struct vmw_framebuffer_surface *VAR_1 =
  FUNC_3(VAR_0);

 FUNC_0(VAR_0);
 FUNC_4(&VAR_1->surface);
 if (VAR_1->base.user_obj)
  FUNC_2(&VAR_1->base.user_obj);

 FUNC_1(VAR_1);
}
