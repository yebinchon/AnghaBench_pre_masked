
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_sw_context {scalar_t__ cur_query_bo; TYPE_1__* last_query_ctx; scalar_t__ needs_post_query_barrier; struct vmw_res_cache_entry* res_cache; } ;
struct vmw_resource {int id; } ;
struct vmw_res_cache_entry {struct vmw_resource* res; int valid; } ;
struct vmw_private {scalar_t__ pinned_bo; int dummy_query_bo_pinned; scalar_t__ dummy_query_bo; int query_cid_valid; int query_cid; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (struct vmw_private*,int ) ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_7(struct vmw_private *VAR_1,
         struct vmw_sw_context *VAR_2)
{




 if (VAR_2->needs_post_query_barrier) {
  struct vmw_res_cache_entry *VAR_3 =
   &VAR_2->res_cache[VAR_0];
  struct vmw_resource *VAR_4;
  int VAR_5;

  FUNC_0(!VAR_3->valid);
  VAR_4 = VAR_3->res;

  VAR_5 = FUNC_6(VAR_1, VAR_4->id);

  if (FUNC_2(VAR_5 != 0))
   FUNC_1("Out of fifo space for dummy query.\n");
 }

 if (VAR_1->pinned_bo != VAR_2->cur_query_bo) {
  if (VAR_1->pinned_bo) {
   FUNC_3(VAR_1->pinned_bo, 0);
   FUNC_5(&VAR_1->pinned_bo);
  }

  if (!VAR_2->needs_post_query_barrier) {
   FUNC_3(VAR_2->cur_query_bo, 1);






   if (!VAR_1->dummy_query_bo_pinned) {
    FUNC_3(VAR_1->dummy_query_bo,
          1);
    VAR_1->dummy_query_bo_pinned = 1;
   }

   FUNC_0(VAR_2->last_query_ctx == ((void*)0));
   VAR_1->query_cid = VAR_2->last_query_ctx->id;
   VAR_1->query_cid_valid = 1;
   VAR_1->pinned_bo =
    FUNC_4(VAR_2->cur_query_bo);
  }
 }
}
