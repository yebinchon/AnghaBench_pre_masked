
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; struct rdma_umap_priv* vm_private_data; TYPE_1__* vm_file; } ;
struct rdma_umap_priv {int dummy; } ;
struct ib_uverbs_file {int hw_destroy_rwsem; int ucontext; } ;
struct TYPE_2__ {struct ib_uverbs_file* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct rdma_umap_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (struct rdma_umap_priv*,struct vm_area_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vm_area_struct*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct vm_area_struct *VAR_1)
{
 struct ib_uverbs_file *VAR_2 = VAR_1->vm_file->private_data;
 struct rdma_umap_priv *VAR_3 = VAR_1->vm_private_data;
 struct rdma_umap_priv *VAR_4;

 if (!VAR_3)
  return;


 if (!FUNC_0(&VAR_2->hw_destroy_rwsem))
  goto out_zap;



 if (!VAR_2->ucontext)
  goto out_unlock;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  goto out_unlock;
 FUNC_2(VAR_4, VAR_1);

 FUNC_3(&VAR_2->hw_destroy_rwsem);
 return;

out_unlock:
 FUNC_3(&VAR_2->hw_destroy_rwsem);
out_zap:





 VAR_1->vm_private_data = ((void*)0);
 FUNC_4(VAR_1, VAR_1->vm_start, VAR_1->vm_end - VAR_1->vm_start);
}
