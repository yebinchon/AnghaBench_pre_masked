
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ user_obj; } ;
struct vmw_framebuffer_bo {TYPE_1__ base; int buffer; } ;
struct drm_framebuffer {int dummy; } ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (struct vmw_framebuffer_bo*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int *) ;
 struct vmw_framebuffer_bo* FUNC_4 (struct drm_framebuffer*) ;

__attribute__((used)) static void FUNC_5(struct drm_framebuffer *VAR_0)
{
 struct vmw_framebuffer_bo *VAR_1 =
  FUNC_4(VAR_0);

 FUNC_0(VAR_0);
 FUNC_3(&VAR_1->buffer);
 if (VAR_1->base.user_obj)
  FUNC_2(&VAR_1->base.user_obj);

 FUNC_1(VAR_1);
}
