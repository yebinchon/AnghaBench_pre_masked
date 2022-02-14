
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {scalar_t__ has_mob; } ;
struct vmw_ctx_validation_info {int dummy; } ;
typedef enum vmw_res_type { ____Placeholder_vmw_res_type } vmw_res_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct vmw_private *VAR_2,
      enum vmw_res_type VAR_3)
{
 return (VAR_3 == VAR_1 ||
  (VAR_3 == VAR_0 && VAR_2->has_mob)) ?
  sizeof(struct vmw_ctx_validation_info) : 0;
}
