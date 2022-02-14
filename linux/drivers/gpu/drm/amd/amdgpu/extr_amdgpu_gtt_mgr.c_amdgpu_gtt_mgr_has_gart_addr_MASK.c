
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_reg {struct amdgpu_gtt_node* mm_node; } ;
struct TYPE_2__ {scalar_t__ start; } ;
struct amdgpu_gtt_node {TYPE_1__ node; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct ttm_mem_reg *VAR_1)
{
 struct amdgpu_gtt_node *VAR_2 = VAR_1->mm_node;

 return (VAR_2->node.start != VAR_0);
}
