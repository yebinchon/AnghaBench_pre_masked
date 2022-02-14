
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct vmw_resource {int res_dirty; int backup_dirty; struct vmw_res_func* func; } ;
struct vmw_res_func {int (* unbind ) (struct vmw_resource*,int,struct ttm_validate_buffer*) ;int (* destroy ) (struct vmw_resource*) ;int needs_backup; int may_evict; } ;
struct ttm_validate_buffer {scalar_t__ num_shared; int * bo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vmw_resource*,int,struct ttm_validate_buffer*) ;
 int FUNC_2 (struct vmw_resource*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ww_acquire_ctx*,struct ttm_validate_buffer*) ;
 int FUNC_5 (struct ww_acquire_ctx*,struct vmw_resource*,int,struct ttm_validate_buffer*) ;
 scalar_t__ FUNC_6 (struct vmw_resource*) ;
 int FUNC_7 (struct vmw_resource*) ;

__attribute__((used)) static int FUNC_8(struct ww_acquire_ctx *VAR_0,
     struct vmw_resource *VAR_1, bool VAR_2)
{
 struct ttm_validate_buffer VAR_3;
 const struct vmw_res_func *VAR_4 = VAR_1->func;
 int VAR_5;

 FUNC_0(!VAR_4->may_evict);

 VAR_3.bo = ((void*)0);
 VAR_3.num_shared = 0;
 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_3);
 if (FUNC_3(VAR_5 != 0))
  return VAR_5;

 if (FUNC_3(VAR_4->unbind != ((void*)0) &&
       (!VAR_4->needs_backup || FUNC_6(VAR_1)))) {
  VAR_5 = VAR_4->unbind(VAR_1, VAR_1->res_dirty, &VAR_3);
  if (FUNC_3(VAR_5 != 0))
   goto out_no_unbind;
  FUNC_7(VAR_1);
 }
 VAR_5 = VAR_4->destroy(VAR_1);
 VAR_1->backup_dirty = 1;
 VAR_1->res_dirty = 0;
out_no_unbind:
 FUNC_4(VAR_0, &VAR_3);

 return VAR_5;
}
