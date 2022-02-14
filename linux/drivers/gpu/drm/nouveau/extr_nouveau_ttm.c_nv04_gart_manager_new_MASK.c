
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_place {int dummy; } ;
struct ttm_mem_type_manager {int dummy; } ;
struct ttm_mem_reg {int num_pages; int start; int * mm_node; } ;
struct ttm_buffer_object {int bdev; } ;
struct nouveau_mem {TYPE_3__* vma; TYPE_2__* cli; } ;
struct nouveau_drm {int master; } ;
struct nouveau_bo {int comp; int kind; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_4__ {int vmm; } ;
struct TYPE_5__ {TYPE_1__ vmm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_bo* FUNC_1 (struct ttm_buffer_object*) ;
 struct nouveau_mem* FUNC_2 (struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_mem_reg*) ;
 int FUNC_4 (int *,int ,int ,struct ttm_mem_reg*) ;
 int FUNC_5 (int *,int ,int,int,int ,int,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(struct ttm_mem_type_manager *VAR_3,
        struct ttm_buffer_object *VAR_4,
        const struct ttm_place *VAR_5,
        struct ttm_mem_reg *VAR_6)
{
 struct nouveau_bo *VAR_7 = FUNC_1(VAR_4);
 struct nouveau_drm *VAR_8 = FUNC_0(VAR_4->bdev);
 struct nouveau_mem *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(&VAR_8->master, VAR_7->kind, VAR_7->comp, VAR_6);
 VAR_9 = FUNC_2(VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(&VAR_9->cli->vmm.vmm, VAR_2, 0, 12, 0,
      VAR_6->num_pages << VAR_1, &VAR_9->vma[0]);
 if (VAR_10) {
  FUNC_3(VAR_6);
  if (VAR_10 == -VAR_0) {
   VAR_6->mm_node = ((void*)0);
   return 0;
  }
  return VAR_10;
 }

 VAR_6->start = VAR_9->vma[0].addr >> VAR_1;
 return 0;
}
