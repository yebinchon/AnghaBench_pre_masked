
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vmw_resource {int dummy; } ;
struct vmw_cmdbuf_res_manager {int resources; } ;
struct TYPE_2__ {int key; } ;
struct vmw_cmdbuf_res {int head; struct vmw_cmdbuf_res_manager* man; int res; int state; TYPE_1__ hash; } ;
struct list_head {int dummy; } ;
typedef enum vmw_cmdbuf_res_type { ____Placeholder_vmw_cmdbuf_res_type } vmw_cmdbuf_res_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 struct vmw_cmdbuf_res* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vmw_resource*) ;

int FUNC_5(struct vmw_cmdbuf_res_manager *VAR_3,
         enum vmw_cmdbuf_res_type VAR_4,
         u32 VAR_5,
         struct vmw_resource *VAR_6,
         struct list_head *VAR_7)
{
 struct vmw_cmdbuf_res *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (FUNC_3(!VAR_8))
  return -VAR_0;

 VAR_8->hash.key = VAR_5 | (VAR_4 << 24);
 VAR_9 = FUNC_0(&VAR_3->resources, &VAR_8->hash);
 if (FUNC_3(VAR_9 != 0))
  goto out_invalid_key;

 VAR_8->state = VAR_2;
 VAR_8->res = FUNC_4(VAR_6);
 VAR_8->man = VAR_3;
 FUNC_2(&VAR_8->head, VAR_7);

out_invalid_key:
 return VAR_9;
}
