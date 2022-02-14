
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sg_table {struct scatterlist* sgl; } ;
struct scatterlist {scalar_t__ length; } ;
struct TYPE_4__ {int fb; } ;
struct malidp_plane_state {int n_planes; TYPE_1__ base; } ;
struct drm_gem_object {TYPE_3__* dev; } ;
struct drm_gem_cma_object {struct sg_table* sgt; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {struct sg_table* (* gem_prime_get_sg_table ) (struct drm_gem_object*) ;} ;


 struct drm_gem_object* FUNC_0 (int ,int) ;
 int FUNC_1 (struct sg_table*) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 struct sg_table* FUNC_3 (struct drm_gem_object*) ;
 struct drm_gem_cma_object* FUNC_4 (struct drm_gem_object*) ;

__attribute__((used)) static bool FUNC_5(struct malidp_plane_state *VAR_0,
      u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_planes; VAR_2++) {
  struct drm_gem_object *VAR_3;
  struct drm_gem_cma_object *VAR_4;
  struct sg_table *VAR_5;
  struct scatterlist *VAR_6;

  VAR_3 = FUNC_0(VAR_0->base.fb, VAR_2);
  VAR_4 = FUNC_4(VAR_3);

  if (VAR_4->sgt)
   VAR_5 = VAR_4->sgt;
  else
   VAR_5 = VAR_3->dev->driver->gem_prime_get_sg_table(VAR_3);

  if (!VAR_5)
   return 0;

  VAR_6 = VAR_5->sgl;

  while (VAR_6) {
   if (VAR_6->length < VAR_1) {
    if (!VAR_4->sgt)
     FUNC_1(VAR_5);
    return 0;
   }

   VAR_6 = FUNC_2(VAR_6);
  }
  if (!VAR_4->sgt)
   FUNC_1(VAR_5);
 }

 return 1;
}
