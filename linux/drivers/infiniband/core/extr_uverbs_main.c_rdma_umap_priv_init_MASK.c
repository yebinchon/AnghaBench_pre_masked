
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int * vm_ops; struct rdma_umap_priv* vm_private_data; TYPE_1__* vm_file; } ;
struct rdma_umap_priv {int list; struct vm_area_struct* vma; } ;
struct ib_uverbs_file {int umap_lock; int umaps; } ;
struct TYPE_2__ {struct ib_uverbs_file* private_data; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct rdma_umap_priv *VAR_1,
    struct vm_area_struct *VAR_2)
{
 struct ib_uverbs_file *VAR_3 = VAR_2->vm_file->private_data;

 VAR_1->vma = VAR_2;
 VAR_2->vm_private_data = VAR_1;
 VAR_2->vm_ops = &VAR_0;

 FUNC_1(&VAR_3->umap_lock);
 FUNC_0(&VAR_1->list, &VAR_3->umaps);
 FUNC_2(&VAR_3->umap_lock);
}
