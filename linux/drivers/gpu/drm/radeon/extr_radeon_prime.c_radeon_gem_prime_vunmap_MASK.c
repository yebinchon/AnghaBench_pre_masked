
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_bo {int dma_buf_vmap; } ;
struct drm_gem_object {int dummy; } ;


 struct radeon_bo* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_gem_object *VAR_0, void *VAR_1)
{
 struct radeon_bo *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->dma_buf_vmap);
}
