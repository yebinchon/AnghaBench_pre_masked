
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_private {int reservation_sem; } ;
struct TYPE_4__ {scalar_t__ mem_type; scalar_t__ start; } ;
struct ttm_buffer_object {scalar_t__ num_pages; scalar_t__ offset; TYPE_2__ mem; } ;
struct vmw_buffer_object {scalar_t__ pin_count; struct ttm_buffer_object base; } ;
struct ttm_placement {int num_placement; int num_busy_placement; struct ttm_place* busy_placement; struct ttm_place* placement; } ;
struct ttm_place {scalar_t__ lpfn; } ;
struct ttm_operation_ctx {int member_0; int member_1; int interruptible; } ;
struct TYPE_3__ {struct ttm_place* placement; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ttm_placement*,TYPE_2__*,int *) ;
 int FUNC_2 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_operation_ctx*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct vmw_buffer_object*,int) ;
 int FUNC_9 (struct vmw_private*) ;
 struct ttm_placement VAR_2 ;
 TYPE_1__ VAR_3 ;

int FUNC_10(struct vmw_private *VAR_4,
    struct vmw_buffer_object *VAR_5,
    bool VAR_6)
{
 struct ttm_operation_ctx VAR_7 = {VAR_6, 0 };
 struct ttm_buffer_object *VAR_8 = &VAR_5->base;
 struct ttm_placement VAR_9;
 struct ttm_place VAR_10;
 int VAR_11 = 0;
 uint32_t VAR_12;

 VAR_10 = VAR_3.placement[0];
 VAR_10.lpfn = VAR_8->num_pages;
 VAR_9.num_placement = 1;
 VAR_9.placement = &VAR_10;
 VAR_9.num_busy_placement = 1;
 VAR_9.busy_placement = &VAR_10;

 VAR_11 = FUNC_5(&VAR_4->reservation_sem, VAR_6);
 if (FUNC_7(VAR_11 != 0))
  return VAR_11;

 FUNC_9(VAR_4);
 VAR_11 = FUNC_2(VAR_8, VAR_6, 0, ((void*)0));
 if (FUNC_7(VAR_11 != 0))
  goto err_unlock;






 if (VAR_8->mem.mem_type == VAR_1 &&
     VAR_8->mem.start < VAR_8->num_pages &&
     VAR_8->mem.start > 0 &&
     VAR_5->pin_count == 0) {
  VAR_7.interruptible = 0;
  (void) FUNC_4(VAR_8, &VAR_2, &VAR_7);
 }

 if (VAR_5->pin_count > 0)
  VAR_11 = FUNC_1(&VAR_9, &VAR_8->mem,
     &VAR_12) == 1 ? 0 : -VAR_0;
 else
  VAR_11 = FUNC_4(VAR_8, &VAR_9, &VAR_7);


 FUNC_0(VAR_11 == 0 && VAR_8->offset != 0);
 if (!VAR_11)
  FUNC_8(VAR_5, 1);

 FUNC_3(VAR_8);
err_unlock:
 FUNC_6(&VAR_4->reservation_sem);

 return VAR_11;
}
