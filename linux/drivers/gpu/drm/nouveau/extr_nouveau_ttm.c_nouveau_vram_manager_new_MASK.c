
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_place {int dummy; } ;
struct ttm_mem_type_manager {int dummy; } ;
struct ttm_mem_reg {int * mm_node; } ;
struct ttm_buffer_object {int bdev; } ;
struct nouveau_mem {int dummy; } ;
struct TYPE_4__ {scalar_t__ ram_size; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {int master; TYPE_3__ client; } ;
struct nouveau_bo {int page; int contig; int comp; int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_bo* FUNC_1 (struct ttm_buffer_object*) ;
 struct nouveau_mem* FUNC_2 (struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_mem_reg*) ;
 int FUNC_4 (int *,int ,int ,struct ttm_mem_reg*) ;
 int FUNC_5 (struct ttm_mem_reg*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct ttm_mem_type_manager *VAR_2,
    struct ttm_buffer_object *VAR_3,
    const struct ttm_place *VAR_4,
    struct ttm_mem_reg *VAR_5)
{
 struct nouveau_bo *VAR_6 = FUNC_1(VAR_3);
 struct nouveau_drm *VAR_7 = FUNC_0(VAR_3->bdev);
 struct nouveau_mem *VAR_8;
 int VAR_9;

 if (VAR_7->client.device.info.ram_size == 0)
  return -VAR_0;

 VAR_9 = FUNC_4(&VAR_7->master, VAR_6->kind, VAR_6->comp, VAR_5);
 VAR_8 = FUNC_2(VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_5, VAR_6->contig, VAR_6->page);
 if (VAR_9) {
  FUNC_3(VAR_5);
  if (VAR_9 == -VAR_1) {
   VAR_5->mm_node = ((void*)0);
   return 0;
  }
  return VAR_9;
 }

 return 0;
}
