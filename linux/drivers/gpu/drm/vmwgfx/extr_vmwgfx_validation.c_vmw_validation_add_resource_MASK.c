
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned long key; } ;
struct vmw_validation_res_node {int first_usage; int dirty_set; int dirty; int private; int head; int res; TYPE_2__ hash; } ;
struct vmw_validation_context {int resource_list; int resource_ctx_list; scalar_t__ ht; } ;
struct vmw_resource {TYPE_1__* dev_priv; } ;
struct TYPE_3__ {int has_mob; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;



 int FUNC_5 (struct vmw_resource*) ;
 int FUNC_6 (struct vmw_resource*) ;
 struct vmw_validation_res_node* FUNC_7 (struct vmw_validation_context*,struct vmw_resource*) ;
 struct vmw_validation_res_node* FUNC_8 (struct vmw_validation_context*,int) ;

int FUNC_9(struct vmw_validation_context *VAR_3,
    struct vmw_resource *VAR_4,
    size_t VAR_5,
    u32 VAR_6,
    void **VAR_7,
    bool *VAR_8)
{
 struct vmw_validation_res_node *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(VAR_3, VAR_4);
 if (VAR_9) {
  VAR_9->first_usage = 0;
  goto out_fill;
 }

 VAR_9 = FUNC_8(VAR_3, sizeof(*VAR_9) + VAR_5);
 if (!VAR_9) {
  FUNC_1("Failed to allocate a resource validation entry.\n");
  return -VAR_0;
 }

 if (VAR_3->ht) {
  VAR_9->hash.key = (unsigned long) VAR_4;
  VAR_10 = FUNC_2(VAR_3->ht, &VAR_9->hash);
  if (VAR_10) {
   FUNC_0("Failed to initialize a resource validation "
      "entry.\n");
   return VAR_10;
  }
 }
 VAR_9->res = FUNC_6(VAR_4);
 if (!VAR_9->res)
  return -VAR_1;

 VAR_9->first_usage = 1;
 if (!VAR_4->dev_priv->has_mob) {
  FUNC_4(&VAR_9->head, &VAR_3->resource_list);
 } else {
  switch (FUNC_5(VAR_4)) {
  case 130:
  case 128:
   FUNC_3(&VAR_9->head, &VAR_3->resource_ctx_list);
   break;
  case 129:
   FUNC_4(&VAR_9->head, &VAR_3->resource_ctx_list);
   break;
  default:
   FUNC_4(&VAR_9->head, &VAR_3->resource_list);
   break;
  }
 }

out_fill:
 if (VAR_6) {
  VAR_9->dirty_set = 1;

  VAR_9->dirty = (VAR_6 & VAR_2) ? 1 : 0;
 }
 if (VAR_8)
  *VAR_8 = VAR_9->first_usage;
 if (VAR_7)
  *VAR_7 = &VAR_9->private;

 return 0;
}
