
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct vmw_resource {int backup_dirty; TYPE_2__* backup; TYPE_1__* func; } ;
struct ttm_validate_buffer {int * bo; int head; scalar_t__ num_shared; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct list_head {int dummy; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_3__ {int backup_placement; scalar_t__ needs_backup; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,struct ttm_operation_ctx*) ;
 int FUNC_5 (struct ww_acquire_ctx*,struct list_head*) ;
 int FUNC_6 (struct ww_acquire_ctx*,struct list_head*,int,int *,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__**) ;
 int FUNC_9 (struct vmw_resource*,int) ;
 int FUNC_10 (struct vmw_resource*) ;

__attribute__((used)) static int
FUNC_11(struct ww_acquire_ctx *VAR_0,
     struct vmw_resource *VAR_1,
     bool VAR_2,
     struct ttm_validate_buffer *VAR_3)
{
 struct ttm_operation_ctx VAR_4 = { 1, 0 };
 struct list_head VAR_5;
 bool VAR_6 = 0;
 int VAR_7;

 if (FUNC_7(VAR_1->backup == ((void*)0))) {
  VAR_7 = FUNC_9(VAR_1, VAR_2);
  if (FUNC_7(VAR_7 != 0))
   return VAR_7;
 }

 FUNC_0(&VAR_5);
 FUNC_2(&VAR_1->backup->base);
 VAR_3->bo = &VAR_1->backup->base;
 VAR_3->num_shared = 0;
 FUNC_1(&VAR_3->head, &VAR_5);
 VAR_7 = FUNC_6(VAR_0, &VAR_5, VAR_2, ((void*)0),
         1);
 if (FUNC_7(VAR_7 != 0))
  goto out_no_reserve;

 if (VAR_1->func->needs_backup && !FUNC_10(VAR_1))
  return 0;

 VAR_6 = VAR_1->backup_dirty;
 VAR_7 = FUNC_4(&VAR_1->backup->base,
         VAR_1->func->backup_placement,
         &VAR_4);

 if (FUNC_7(VAR_7 != 0))
  goto out_no_validate;

 return 0;

out_no_validate:
 FUNC_5(VAR_0, &VAR_5);
out_no_reserve:
 FUNC_3(VAR_3->bo);
 VAR_3->bo = ((void*)0);
 if (VAR_6)
  FUNC_8(&VAR_1->backup);

 return VAR_7;
}
