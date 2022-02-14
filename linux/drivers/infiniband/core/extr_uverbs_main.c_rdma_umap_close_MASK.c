
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct rdma_umap_priv* vm_private_data; TYPE_1__* vm_file; } ;
struct rdma_umap_priv {int list; } ;
struct ib_uverbs_file {int umap_lock; } ;
struct TYPE_2__ {struct ib_uverbs_file* private_data; } ;


 int FUNC_0 (struct rdma_umap_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct vm_area_struct *VAR_0)
{
 struct ib_uverbs_file *VAR_1 = VAR_0->vm_file->private_data;
 struct rdma_umap_priv *VAR_2 = VAR_0->vm_private_data;

 if (!VAR_2)
  return;






 FUNC_2(&VAR_1->umap_lock);
 FUNC_1(&VAR_2->list);
 FUNC_3(&VAR_1->umap_lock);
 FUNC_0(VAR_2);
}
