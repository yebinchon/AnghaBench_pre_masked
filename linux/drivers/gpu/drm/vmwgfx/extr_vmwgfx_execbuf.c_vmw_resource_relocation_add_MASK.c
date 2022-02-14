
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_sw_context {int res_relocations; int ctx; } ;
struct vmw_resource_relocation {unsigned long offset; int rel_type; int head; struct vmw_resource const* res; } ;
struct vmw_resource {int dummy; } ;
typedef enum vmw_resource_relocation_type { ____Placeholder_vmw_resource_relocation_type } vmw_resource_relocation_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int) ;
 struct vmw_resource_relocation* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct vmw_sw_context *VAR_1,
           const struct vmw_resource *VAR_2,
           unsigned long VAR_3,
           enum vmw_resource_relocation_type
           VAR_4)
{
 struct vmw_resource_relocation *VAR_5;

 VAR_5 = FUNC_3(VAR_1->ctx, sizeof(*VAR_5));
 if (FUNC_2(!VAR_5)) {
  FUNC_0("Failed to allocate a resource relocation.\n");
  return -VAR_0;
 }

 VAR_5->res = VAR_2;
 VAR_5->offset = VAR_3;
 VAR_5->rel_type = VAR_4;
 FUNC_1(&VAR_5->head, &VAR_1->res_relocations);

 return 0;
}
