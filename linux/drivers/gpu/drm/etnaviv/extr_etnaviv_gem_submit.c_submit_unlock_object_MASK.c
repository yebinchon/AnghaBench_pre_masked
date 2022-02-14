
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct etnaviv_gem_submit {TYPE_3__* bos; } ;
struct drm_gem_object {TYPE_2__* resv; } ;
struct TYPE_6__ {int flags; TYPE_1__* obj; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {struct drm_gem_object base; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct etnaviv_gem_submit *VAR_1, int VAR_2)
{
 if (VAR_1->bos[VAR_2].flags & VAR_0) {
  struct drm_gem_object *VAR_3 = &VAR_1->bos[VAR_2].obj->base;

  FUNC_0(&VAR_3->resv->lock);
  VAR_1->bos[VAR_2].flags &= ~VAR_0;
 }
}
