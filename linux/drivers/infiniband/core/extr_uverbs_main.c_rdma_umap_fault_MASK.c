
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int gfp_mask; scalar_t__ page; int address; TYPE_2__* vma; } ;
struct rdma_umap_priv {int dummy; } ;
struct ib_uverbs_file {int umap_lock; scalar_t__ disassociate_page; } ;
struct TYPE_4__ {int vm_flags; struct rdma_umap_priv* vm_private_data; TYPE_1__* vm_file; } ;
struct TYPE_3__ {struct ib_uverbs_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static vm_fault_t FUNC_5(struct vm_fault *VAR_4)
{
 struct ib_uverbs_file *VAR_5 = VAR_4->vma->vm_file->private_data;
 struct rdma_umap_priv *VAR_6 = VAR_4->vma->vm_private_data;
 vm_fault_t VAR_7 = 0;

 if (!VAR_6)
  return VAR_0;


 if (!(VAR_4->vma->vm_flags & (VAR_2 | VAR_1))) {
  VAR_4->page = FUNC_0(VAR_4->address);
  FUNC_2(VAR_4->page);
  return 0;
 }

 FUNC_3(&VAR_5->umap_lock);
 if (!VAR_5->disassociate_page)
  VAR_5->disassociate_page =
   FUNC_1(VAR_4->gfp_mask | VAR_3, 0);

 if (VAR_5->disassociate_page) {




  VAR_4->page = VAR_5->disassociate_page;
  FUNC_2(VAR_4->page);
 } else {
  VAR_7 = VAR_0;
 }
 FUNC_4(&VAR_5->umap_lock);

 return VAR_7;
}
