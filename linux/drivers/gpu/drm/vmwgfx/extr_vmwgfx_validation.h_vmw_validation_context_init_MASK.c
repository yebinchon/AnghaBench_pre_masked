
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_validation_context {int bo_list; int resource_ctx_list; int resource_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmw_validation_context*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct vmw_validation_context *VAR_0)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->resource_list);
 FUNC_0(&VAR_0->resource_ctx_list);
 FUNC_0(&VAR_0->bo_list);
}
