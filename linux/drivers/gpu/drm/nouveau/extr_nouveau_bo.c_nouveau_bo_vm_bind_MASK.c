
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ttm_mem_reg {int start; scalar_t__ mem_type; int size; } ;
struct ttm_buffer_object {int bdev; } ;
struct nouveau_drm_tile {int dummy; } ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; struct drm_device* dev; } ;
struct nouveau_bo {int zeta; int mode; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_bo* FUNC_1 (struct ttm_buffer_object*) ;
 struct nouveau_drm_tile* FUNC_2 (struct drm_device*,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ttm_buffer_object *VAR_3, struct ttm_mem_reg *VAR_4,
     struct nouveau_drm_tile **VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_0(VAR_3->bdev);
 struct drm_device *VAR_7 = VAR_6->dev;
 struct nouveau_bo *VAR_8 = FUNC_1(VAR_3);
 u64 VAR_9 = VAR_4->start << VAR_1;

 *VAR_5 = ((void*)0);
 if (VAR_4->mem_type != VAR_2)
  return 0;

 if (VAR_6->client.device.info.family >= VAR_0) {
  *VAR_5 = FUNC_2(VAR_7, VAR_9, VAR_4->size,
            VAR_8->mode, VAR_8->zeta);
 }

 return 0;
}
