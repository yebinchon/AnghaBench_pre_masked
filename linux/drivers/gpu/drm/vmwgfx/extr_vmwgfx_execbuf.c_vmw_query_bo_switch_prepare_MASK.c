
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_sw_context {int needs_post_query_barrier; int ctx; struct vmw_buffer_object* cur_query_bo; int last_query_ctx; struct vmw_res_cache_entry* res_cache; } ;
struct vmw_res_cache_entry {int res; int valid; } ;
struct vmw_private {int has_mob; struct vmw_buffer_object* dummy_query_bo; } ;
struct TYPE_2__ {int num_pages; } ;
struct vmw_buffer_object {TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 size_t VAR_1 ;
 int FUNC_3 (int ,struct vmw_buffer_object*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct vmw_private *VAR_2,
           struct vmw_buffer_object *VAR_3,
           struct vmw_sw_context *VAR_4)
{
 struct vmw_res_cache_entry *VAR_5 =
  &VAR_4->res_cache[VAR_1];
 int VAR_6;

 FUNC_0(!VAR_5->valid);
 VAR_4->last_query_ctx = VAR_5->res;

 if (FUNC_2(VAR_3 != VAR_4->cur_query_bo)) {

  if (FUNC_2(VAR_3->base.num_pages > 4)) {
   FUNC_1("Query buffer too large.\n");
   return -VAR_0;
  }

  if (FUNC_2(VAR_4->cur_query_bo != ((void*)0))) {
   VAR_4->needs_post_query_barrier = 1;
   VAR_6 = FUNC_3(VAR_4->ctx,
          VAR_4->cur_query_bo,
          VAR_2->has_mob, 0);
   if (FUNC_2(VAR_6 != 0))
    return VAR_6;
  }
  VAR_4->cur_query_bo = VAR_3;

  VAR_6 = FUNC_3(VAR_4->ctx,
         VAR_2->dummy_query_bo,
         VAR_2->has_mob, 0);
  if (FUNC_2(VAR_6 != 0))
   return VAR_6;
 }

 return 0;
}
