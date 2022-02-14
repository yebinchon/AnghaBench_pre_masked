
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_resource {unsigned long backup_offset; int res_dirty; int id; TYPE_1__* func; struct vmw_private* dev_priv; int lru_head; scalar_t__ pin_count; struct vmw_buffer_object* backup; } ;
struct vmw_private {int resource_lock; int * res_lru; } ;
struct vmw_buffer_object {int dummy; } ;
struct TYPE_2__ {size_t res_type; int may_evict; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vmw_buffer_object* FUNC_4 (struct vmw_buffer_object*) ;
 int FUNC_5 (struct vmw_buffer_object**) ;
 int FUNC_6 (struct vmw_resource*) ;
 int FUNC_7 (struct vmw_resource*) ;

void FUNC_8(struct vmw_resource *VAR_0,
       bool VAR_1,
       bool VAR_2,
       bool VAR_3,
       struct vmw_buffer_object *VAR_4,
       unsigned long VAR_5)
{
 struct vmw_private *VAR_6 = VAR_0->dev_priv;

 if (!FUNC_1(&VAR_0->lru_head))
  return;

 if (VAR_3 && VAR_4 != VAR_0->backup) {
  if (VAR_0->backup) {
   FUNC_7(VAR_0);
   FUNC_5(&VAR_0->backup);
  }

  if (VAR_4) {
   VAR_0->backup = FUNC_4(VAR_4);
   FUNC_6(VAR_0);
  } else {
   VAR_0->backup = ((void*)0);
  }
 }
 if (VAR_3)
  VAR_0->backup_offset = VAR_5;

 if (VAR_1)
  VAR_0->res_dirty = VAR_2;

 if (!VAR_0->func->may_evict || VAR_0->id == -1 || VAR_0->pin_count)
  return;

 FUNC_2(&VAR_6->resource_lock);
 FUNC_0(&VAR_0->lru_head,
        &VAR_0->dev_priv->res_lru[VAR_0->func->res_type]);
 FUNC_3(&VAR_6->resource_lock);
}
