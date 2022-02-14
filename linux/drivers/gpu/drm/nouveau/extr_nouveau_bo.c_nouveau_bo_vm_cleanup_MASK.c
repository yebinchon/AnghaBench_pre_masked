
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resv; } ;
struct ttm_buffer_object {TYPE_1__ base; int bdev; } ;
struct nouveau_drm_tile {int dummy; } ;
struct nouveau_drm {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct dma_fence {int dummy; } ;


 struct dma_fence* FUNC_0 (int ) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*,struct nouveau_drm_tile*,struct dma_fence*) ;

__attribute__((used)) static void
FUNC_3(struct ttm_buffer_object *VAR_0,
        struct nouveau_drm_tile *VAR_1,
        struct nouveau_drm_tile **VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_1(VAR_0->bdev);
 struct drm_device *VAR_4 = VAR_3->dev;
 struct dma_fence *VAR_5 = FUNC_0(VAR_0->base.resv);

 FUNC_2(VAR_4, *VAR_2, VAR_5);
 *VAR_2 = VAR_1;
}
