
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_resource {scalar_t__ pin_count; TYPE_1__* func; struct vmw_buffer_object* backup; struct vmw_private* dev_priv; } ;
struct vmw_private {int reservation_sem; int cmdbuf_mutex; } ;
struct vmw_buffer_object {int base; int pin_count; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_2__ {int backup_placement; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,struct ttm_operation_ctx*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vmw_buffer_object*,int) ;
 int FUNC_8 (struct vmw_resource*,int,int) ;
 int FUNC_9 (struct vmw_resource*,int,int,int,int *,unsigned long) ;
 int FUNC_10 (struct vmw_resource*,int) ;

int FUNC_11(struct vmw_resource *VAR_0, bool VAR_1)
{
 struct ttm_operation_ctx VAR_2 = { VAR_1, 0 };
 struct vmw_private *VAR_3 = VAR_0->dev_priv;
 int VAR_4;

 FUNC_5(&VAR_3->reservation_sem, VAR_1);
 FUNC_0(&VAR_3->cmdbuf_mutex);
 VAR_4 = FUNC_8(VAR_0, VAR_1, 0);
 if (VAR_4)
  goto out_no_reserve;

 if (VAR_0->pin_count == 0) {
  struct vmw_buffer_object *VAR_5 = ((void*)0);

  if (VAR_0->backup) {
   VAR_5 = VAR_0->backup;

   FUNC_2(&VAR_5->base, VAR_1, 0, ((void*)0));
   if (!VAR_5->pin_count) {
    VAR_4 = FUNC_4
     (&VAR_5->base,
      VAR_0->func->backup_placement,
      &VAR_2);
    if (VAR_4) {
     FUNC_3(&VAR_5->base);
     goto out_no_validate;
    }
   }


   FUNC_7(VAR_5, 1);
  }
  VAR_4 = FUNC_10(VAR_0, VAR_1);
  if (VAR_5)
   FUNC_3(&VAR_5->base);
  if (VAR_4)
   goto out_no_validate;
 }
 VAR_0->pin_count++;

out_no_validate:
 FUNC_9(VAR_0, 0, 0, 0, ((void*)0), 0UL);
out_no_reserve:
 FUNC_1(&VAR_3->cmdbuf_mutex);
 FUNC_6(&VAR_3->reservation_sem);

 return VAR_4;
}
