
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_validation_context {int bo_list; scalar_t__ ht; } ;
struct ttm_validate_buffer {int head; scalar_t__ num_shared; int bo; } ;
struct TYPE_2__ {unsigned long key; } ;
struct vmw_validation_bo_node {int as_mob; int cpu_blit; struct ttm_validate_buffer base; TYPE_1__ hash; } ;
struct vmw_buffer_object {int base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct vmw_validation_bo_node* FUNC_4 (struct vmw_validation_context*,struct vmw_buffer_object*) ;
 struct vmw_validation_bo_node* FUNC_5 (struct vmw_validation_context*,int) ;

int FUNC_6(struct vmw_validation_context *VAR_3,
     struct vmw_buffer_object *VAR_4,
     bool VAR_5,
     bool VAR_6)
{
 struct vmw_validation_bo_node *VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (VAR_7) {
  if (VAR_7->as_mob != VAR_5 ||
      VAR_7->cpu_blit != VAR_6) {
   FUNC_0("Inconsistent buffer usage.\n");
   return -VAR_0;
  }
 } else {
  struct ttm_validate_buffer *VAR_8;
  int VAR_9;

  VAR_7 = FUNC_5(VAR_3, sizeof(*VAR_7));
  if (!VAR_7)
   return -VAR_1;

  if (VAR_3->ht) {
   VAR_7->hash.key = (unsigned long) VAR_4;
   VAR_9 = FUNC_1(VAR_3->ht, &VAR_7->hash);
   if (VAR_9) {
    FUNC_0("Failed to initialize a buffer "
       "validation entry.\n");
    return VAR_9;
   }
  }
  VAR_8 = &VAR_7->base;
  VAR_8->bo = FUNC_3(&VAR_4->base);
  if (!VAR_8->bo)
   return -VAR_2;
  VAR_8->num_shared = 0;
  FUNC_2(&VAR_8->head, &VAR_3->bo_list);
  VAR_7->as_mob = VAR_5;
  VAR_7->cpu_blit = VAR_6;
 }

 return 0;
}
