
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etnaviv_gem_object {int flags; scalar_t__ last_cpu_prep_op; TYPE_1__* sgt; } ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {int nents; int sgl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct etnaviv_gem_object* FUNC_3 (struct drm_gem_object*) ;

int FUNC_4(struct drm_gem_object *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct etnaviv_gem_object *VAR_3 = FUNC_3(VAR_1);

 if (VAR_3->flags & VAR_0) {

  FUNC_0(VAR_3->last_cpu_prep_op == 0);
  FUNC_1(VAR_2->dev, VAR_3->sgt->sgl,
   VAR_3->sgt->nents,
   FUNC_2(VAR_3->last_cpu_prep_op));
  VAR_3->last_cpu_prep_op = 0;
 }

 return 0;
}
