
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_validation_mem {size_t gran; int unreserve_mem; int reserve_mem; } ;
struct vmw_private {struct vmw_validation_mem vvm; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct vmw_private *VAR_2, size_t VAR_3)
{
 struct vmw_validation_mem *VAR_4 = &VAR_2->vvm;

 VAR_4->reserve_mem = VAR_0;
 VAR_4->unreserve_mem = VAR_1;
 VAR_4->gran = VAR_3;
}
