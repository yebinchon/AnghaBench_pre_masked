
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ttm_operation_ctx {int no_wait_gpu; int interruptible; } ;
struct ttm_mem_reg {scalar_t__ mem_type; int * mm_node; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; int ttm; int bdev; } ;
struct nouveau_drm_tile {int dummy; } ;
struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_7__ {TYPE_2__ info; } ;
struct TYPE_8__ {TYPE_3__ device; } ;
struct TYPE_5__ {scalar_t__ move; } ;
struct nouveau_drm {TYPE_4__ client; TYPE_1__ ttm; } ;
struct nouveau_bo {struct nouveau_drm_tile* tile; scalar_t__ pin_refcnt; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct nouveau_drm*,char*,struct nouveau_bo*) ;
 scalar_t__ VAR_1 ;
 struct nouveau_drm* FUNC_2 (int ) ;
 struct nouveau_bo* FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int ,int ,struct ttm_mem_reg*) ;
 int FUNC_5 (struct ttm_buffer_object*,int,int ,int ,struct ttm_mem_reg*) ;
 int FUNC_6 (struct ttm_buffer_object*,int,int ,int ,struct ttm_mem_reg*) ;
 int FUNC_7 (struct ttm_buffer_object*,struct ttm_mem_reg*,struct nouveau_drm_tile**) ;
 int FUNC_8 (struct ttm_buffer_object*,struct nouveau_drm_tile*,struct nouveau_drm_tile**) ;
 int FUNC_9 (struct ttm_buffer_object*,struct ttm_operation_ctx*,struct ttm_mem_reg*) ;
 int FUNC_10 (struct ttm_buffer_object*,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct ttm_buffer_object *VAR_2, bool VAR_3,
  struct ttm_operation_ctx *VAR_4,
  struct ttm_mem_reg *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_2(VAR_2->bdev);
 struct nouveau_bo *VAR_7 = FUNC_3(VAR_2);
 struct ttm_mem_reg *VAR_8 = &VAR_2->mem;
 struct nouveau_drm_tile *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 VAR_10 = FUNC_10(VAR_2, VAR_4->interruptible, VAR_4->no_wait_gpu);
 if (VAR_10)
  return VAR_10;

 if (VAR_7->pin_refcnt)
  FUNC_1(VAR_6, "Moving pinned object %p!\n", VAR_7);

 if (VAR_6->client.device.info.family < VAR_0) {
  VAR_10 = FUNC_7(VAR_2, VAR_5, &VAR_9);
  if (VAR_10)
   return VAR_10;
 }


 if (VAR_8->mem_type == VAR_1 && !VAR_2->ttm) {
  FUNC_0(VAR_2->mem.mm_node != ((void*)0));
  VAR_2->mem = *VAR_5;
  VAR_5->mm_node = ((void*)0);
  goto out;
 }


 if (VAR_6->ttm.move) {
  if (VAR_5->mem_type == VAR_1)
   VAR_10 = FUNC_4(VAR_2, VAR_3,
          VAR_4->interruptible,
          VAR_4->no_wait_gpu, VAR_5);
  else if (VAR_8->mem_type == VAR_1)
   VAR_10 = FUNC_5(VAR_2, VAR_3,
          VAR_4->interruptible,
          VAR_4->no_wait_gpu, VAR_5);
  else
   VAR_10 = FUNC_6(VAR_2, VAR_3,
         VAR_4->interruptible,
         VAR_4->no_wait_gpu, VAR_5);
  if (!VAR_10)
   goto out;
 }


 VAR_10 = FUNC_10(VAR_2, VAR_4->interruptible, VAR_4->no_wait_gpu);
 if (VAR_10 == 0)
  VAR_10 = FUNC_9(VAR_2, VAR_4, VAR_5);

out:
 if (VAR_6->client.device.info.family < VAR_0) {
  if (VAR_10)
   FUNC_8(VAR_2, ((void*)0), &VAR_9);
  else
   FUNC_8(VAR_2, VAR_9, &VAR_7->tile);
 }

 return VAR_10;
}
