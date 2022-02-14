
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_validation_context {unsigned int mem_size_left; } ;
struct vmw_validation_bo_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmw_validation_context*,unsigned int) ;

int FUNC_1(struct vmw_validation_context *VAR_1)
{
 unsigned int VAR_2 = sizeof(struct vmw_validation_bo_node);

 if (!FUNC_0(VAR_1, VAR_2))
  return -VAR_0;

 VAR_1->mem_size_left += VAR_2;
 return 0;
}
