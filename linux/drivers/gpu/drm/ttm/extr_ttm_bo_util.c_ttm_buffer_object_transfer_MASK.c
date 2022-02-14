
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * resv; int _resv; int vma_node; } ;
struct TYPE_5__ {int placement; } ;
struct ttm_buffer_object {TYPE_4__ base; scalar_t__ acc_size; int * destroy; int kref; int list_kref; int cpu_writers; int * moving; int wu_mutex; int io_reserve_lru; int swap; int lru; int ddestroy; TYPE_3__* bdev; TYPE_1__ mem; } ;
struct ttm_transfer_obj {struct ttm_buffer_object base; struct ttm_buffer_object* bo; } ;
struct TYPE_7__ {TYPE_2__* glob; } ;
struct TYPE_6__ {int bo_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ttm_transfer_obj* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ttm_buffer_object*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(struct ttm_buffer_object *VAR_4,
          struct ttm_buffer_object **VAR_5)
{
 struct ttm_transfer_obj *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->base = *VAR_4;
 VAR_6->base.mem.placement |= VAR_2;

 FUNC_10(VAR_4);
 VAR_6->bo = VAR_4;






 FUNC_2(&VAR_4->bdev->glob->bo_count);
 FUNC_0(&VAR_6->base.ddestroy);
 FUNC_0(&VAR_6->base.lru);
 FUNC_0(&VAR_6->base.swap);
 FUNC_0(&VAR_6->base.io_reserve_lru);
 FUNC_9(&VAR_6->base.wu_mutex);
 VAR_6->base.moving = ((void*)0);
 FUNC_6(&VAR_6->base.base.vma_node);
 FUNC_3(&VAR_6->base.cpu_writers, 0);

 FUNC_8(&VAR_6->base.list_kref);
 FUNC_8(&VAR_6->base.kref);
 VAR_6->base.destroy = &VAR_3;
 VAR_6->base.acc_size = 0;
 VAR_6->base.base.resv = &VAR_6->base.base._resv;
 FUNC_4(VAR_6->base.base.resv);
 VAR_7 = FUNC_5(VAR_6->base.base.resv);
 FUNC_1(!VAR_7);

 *VAR_5 = &VAR_6->base;
 return 0;
}
