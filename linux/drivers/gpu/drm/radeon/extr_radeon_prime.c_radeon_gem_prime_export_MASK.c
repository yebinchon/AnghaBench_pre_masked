
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ttm; } ;
struct radeon_bo {TYPE_1__ tbo; } ;
struct drm_gem_object {int dummy; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 struct dma_buf* FUNC_0 (int ) ;
 struct dma_buf* FUNC_1 (struct drm_gem_object*,int) ;
 struct radeon_bo* FUNC_2 (struct drm_gem_object*) ;
 scalar_t__ FUNC_3 (int ) ;

struct dma_buf *FUNC_4(struct drm_gem_object *VAR_1,
     int VAR_2)
{
 struct radeon_bo *VAR_3 = FUNC_2(VAR_1);
 if (FUNC_3(VAR_3->tbo.ttm))
  return FUNC_0(-VAR_0);
 return FUNC_1(VAR_1, VAR_2);
}
