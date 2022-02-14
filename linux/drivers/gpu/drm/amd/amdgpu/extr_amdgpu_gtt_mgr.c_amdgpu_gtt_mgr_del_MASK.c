
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {struct amdgpu_gtt_mgr* priv; } ;
struct ttm_mem_reg {struct amdgpu_gtt_node* mm_node; int num_pages; } ;
struct TYPE_2__ {scalar_t__ start; } ;
struct amdgpu_gtt_node {TYPE_1__ node; } ;
struct amdgpu_gtt_mgr {int available; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct amdgpu_gtt_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ttm_mem_type_manager *VAR_1,
          struct ttm_mem_reg *VAR_2)
{
 struct amdgpu_gtt_mgr *VAR_3 = VAR_1->priv;
 struct amdgpu_gtt_node *VAR_4 = VAR_2->mm_node;

 if (!VAR_4)
  return;

 FUNC_3(&VAR_3->lock);
 if (VAR_4->node.start != VAR_0)
  FUNC_1(&VAR_4->node);
 FUNC_4(&VAR_3->lock);
 FUNC_0(VAR_2->num_pages, &VAR_3->available);

 FUNC_2(VAR_4);
 VAR_2->mm_node = ((void*)0);
}
