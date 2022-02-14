
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {scalar_t__ fence; } ;
struct TYPE_2__ {int (* dtor ) (struct nouveau_drm*) ;} ;


 int FUNC_0 (struct nouveau_drm*) ;
 int FUNC_1 (struct nouveau_drm*) ;
 TYPE_1__* FUNC_2 (struct nouveau_drm*) ;
 int FUNC_3 (struct nouveau_drm*) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_drm *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 if (VAR_0->fence)
  FUNC_2(VAR_0)->dtor(VAR_0);
}
