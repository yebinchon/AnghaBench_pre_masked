
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {int dummy; } ;
struct vmw_res_cache_entry {int valid; scalar_t__ valid_handle; void* private; struct vmw_resource* res; } ;



__attribute__((used)) static void FUNC_0(struct vmw_res_cache_entry *VAR_0,
          struct vmw_resource *VAR_1,
          void *VAR_2)
{
 VAR_0->res = VAR_1;
 VAR_0->private = VAR_2;
 VAR_0->valid = 1;
 VAR_0->valid_handle = 0;
}
