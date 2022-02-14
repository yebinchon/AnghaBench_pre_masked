
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {void (* res_free ) (struct vmw_resource*) ;int id; int backup_dirty; int res_dirty; int used_prio; scalar_t__ backup_offset; int * backup; int binding_head; int mob_head; int lru_head; struct vmw_res_func const* func; struct vmw_private* dev_priv; int * hw_destroy; int kref; } ;
struct vmw_res_func {int dummy; } ;
struct vmw_private {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_resource*) ;

int FUNC_3(struct vmw_private *VAR_0, struct vmw_resource *VAR_1,
        bool VAR_2,
        void (*VAR_3) (struct vmw_resource *VAR_4),
        const struct vmw_res_func *VAR_5)
{
 FUNC_1(&VAR_1->kref);
 VAR_1->hw_destroy = ((void*)0);
 VAR_1->res_free = VAR_3;
 VAR_1->dev_priv = VAR_0;
 VAR_1->func = VAR_5;
 FUNC_0(&VAR_1->lru_head);
 FUNC_0(&VAR_1->mob_head);
 FUNC_0(&VAR_1->binding_head);
 VAR_1->id = -1;
 VAR_1->backup = ((void*)0);
 VAR_1->backup_offset = 0;
 VAR_1->backup_dirty = 0;
 VAR_1->res_dirty = 0;
 VAR_1->used_prio = 3;
 if (VAR_2)
  return 0;
 else
  return FUNC_2(VAR_1);
}
