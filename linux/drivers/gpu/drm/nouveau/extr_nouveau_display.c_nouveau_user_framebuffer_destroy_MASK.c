
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_framebuffer {TYPE_2__* nvbo; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {TYPE_1__ bo; } ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nouveau_framebuffer*) ;
 struct nouveau_framebuffer* FUNC_3 (struct drm_framebuffer*) ;

__attribute__((used)) static void
FUNC_4(struct drm_framebuffer *VAR_0)
{
 struct nouveau_framebuffer *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->nvbo)
  FUNC_1(&VAR_1->nvbo->bo.base);

 FUNC_0(VAR_0);
 FUNC_2(VAR_1);
}
