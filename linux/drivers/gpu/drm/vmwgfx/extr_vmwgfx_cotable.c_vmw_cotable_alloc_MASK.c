
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vmw_resource {size_t id; int backup_size; int hw_destroy; } ;
struct vmw_private {int dummy; } ;
struct vmw_cotable {int scrubbed; int seen_entries; size_t type; struct vmw_resource res; struct vmw_resource* ctx; int resource_list; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct TYPE_2__ {int size; size_t min_initial_entries; } ;


 int VAR_0 ;
 struct vmw_resource* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct vmw_cotable*) ;
 struct vmw_cotable* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,scalar_t__,struct ttm_operation_ctx*) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct vmw_private*) ;
 int FUNC_9 (struct vmw_private*,struct vmw_resource*,int,int ,int *) ;

struct vmw_resource *FUNC_10(struct vmw_private *VAR_9,
           struct vmw_resource *VAR_10,
           u32 VAR_11)
{
 struct vmw_cotable *VAR_12;
 struct ttm_operation_ctx VAR_13 = {
  .interruptible = 1,
  .no_wait_gpu = 0
 };
 int VAR_14;
 u32 VAR_15;

 if (FUNC_7(VAR_5 == 0))
  VAR_5 = FUNC_6(sizeof(struct vmw_cotable));

 VAR_14 = FUNC_4(FUNC_8(VAR_9),
       VAR_5, &VAR_13);
 if (FUNC_7(VAR_14))
  return FUNC_0(VAR_14);

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_1);
 if (FUNC_7(!VAR_12)) {
  VAR_14 = -VAR_0;
  goto out_no_alloc;
 }

 VAR_14 = FUNC_9(VAR_9, &VAR_12->res, 1,
    VAR_6, &VAR_7);
 if (FUNC_7(VAR_14 != 0))
  goto out_no_init;

 FUNC_1(&VAR_12->resource_list);
 VAR_12->res.id = VAR_11;
 VAR_12->res.backup_size = VAR_3;
 VAR_15 = VAR_3 / VAR_4[VAR_11].size;
 if (VAR_15 < VAR_4[VAR_11].min_initial_entries) {
  VAR_12->res.backup_size = VAR_4[VAR_11].min_initial_entries *
   VAR_4[VAR_11].size;
  VAR_12->res.backup_size =
   (VAR_12->res.backup_size + VAR_3 - 1) & VAR_2;
 }

 VAR_12->scrubbed = 1;
 VAR_12->seen_entries = -1;
 VAR_12->type = VAR_11;
 VAR_12->ctx = VAR_10;

 VAR_12->res.hw_destroy = VAR_8;

 return &VAR_12->res;

out_no_init:
 FUNC_2(VAR_12);
out_no_alloc:
 FUNC_5(FUNC_8(VAR_9), VAR_5);
 return FUNC_0(VAR_14);
}
