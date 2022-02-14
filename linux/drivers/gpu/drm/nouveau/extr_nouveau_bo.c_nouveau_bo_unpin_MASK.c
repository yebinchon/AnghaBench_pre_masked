
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mem_type; int size; int placement; } ;
struct ttm_buffer_object {TYPE_2__ mem; int bdev; } ;
struct TYPE_3__ {int gart_available; int vram_available; } ;
struct nouveau_drm {TYPE_1__ gem; } ;
struct nouveau_bo {int pin_refcnt; struct ttm_buffer_object bo; } ;




 int FUNC_0 (int) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_bo*,int ,int ) ;
 int FUNC_3 (struct nouveau_bo*,int,int) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_5 (struct ttm_buffer_object*) ;

int
FUNC_6(struct nouveau_bo *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_1(VAR_0->bo.bdev);
 struct ttm_buffer_object *VAR_2 = &VAR_0->bo;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_4(VAR_2, 0, 0, ((void*)0));
 if (VAR_3)
  return VAR_3;

 VAR_4 = --VAR_0->pin_refcnt;
 FUNC_0(VAR_4 < 0);
 if (VAR_4)
  goto out;

 FUNC_2(VAR_0, VAR_2->mem.placement, 0);

 VAR_3 = FUNC_3(VAR_0, 0, 0);
 if (VAR_3 == 0) {
  switch (VAR_2->mem.mem_type) {
  case 128:
   VAR_1->gem.vram_available += VAR_2->mem.size;
   break;
  case 129:
   VAR_1->gem.gart_available += VAR_2->mem.size;
   break;
  default:
   break;
  }
 }

out:
 FUNC_5(VAR_2);
 return VAR_3;
}
