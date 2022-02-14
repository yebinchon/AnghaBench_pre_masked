
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etnaviv_gem_submit {int nr_bos; int out_fence; TYPE_2__* bos; } ;
struct drm_gem_object {int resv; } ;
struct TYPE_4__ {int flags; TYPE_1__* obj; } ;
struct TYPE_3__ {struct drm_gem_object base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct etnaviv_gem_submit*,int) ;

__attribute__((used)) static void FUNC_3(struct etnaviv_gem_submit *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_bos; VAR_2++) {
  struct drm_gem_object *VAR_3 = &VAR_1->bos[VAR_2].obj->base;

  if (VAR_1->bos[VAR_2].flags & VAR_0)
   FUNC_0(VAR_3->resv,
         VAR_1->out_fence);
  else
   FUNC_1(VAR_3->resv,
           VAR_1->out_fence);

  FUNC_2(VAR_1, VAR_2);
 }
}
