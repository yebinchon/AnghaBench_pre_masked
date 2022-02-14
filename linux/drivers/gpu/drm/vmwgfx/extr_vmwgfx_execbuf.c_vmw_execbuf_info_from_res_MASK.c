
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_sw_context {struct vmw_res_cache_entry* res_cache; } ;
struct vmw_resource {int dummy; } ;
struct vmw_res_cache_entry {struct vmw_ctx_validation_info* private; struct vmw_resource* res; scalar_t__ valid; } ;
struct vmw_ctx_validation_info {int dummy; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (struct vmw_resource*) ;

__attribute__((used)) static struct vmw_ctx_validation_info *
FUNC_2(struct vmw_sw_context *VAR_0,
     struct vmw_resource *VAR_1)
{
 struct vmw_res_cache_entry *VAR_2 =
  &VAR_0->res_cache[FUNC_1(VAR_1)];

 if (VAR_2->valid && VAR_2->res == VAR_1)
  return VAR_2->private;

 FUNC_0(1);
 return ((void*)0);
}
