
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_end; unsigned long vm_start; int vm_page_prot; TYPE_1__* vm_file; } ;
struct rdma_umap_priv {int dummy; } ;
struct ib_uverbs_file {TYPE_2__* device; } ;
struct ib_ucontext {struct ib_uverbs_file* ufile; } ;
typedef int pgprot_t ;
struct TYPE_4__ {int disassociate_srcu; } ;
struct TYPE_3__ {struct ib_uverbs_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_2 (struct rdma_umap_priv*) ;
 struct rdma_umap_priv* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rdma_umap_priv*,struct vm_area_struct*) ;

int FUNC_6(struct ib_ucontext *VAR_5, struct vm_area_struct *VAR_6,
        unsigned long VAR_7, unsigned long VAR_8, pgprot_t VAR_9)
{
 struct ib_uverbs_file *VAR_10 = VAR_5->ufile;
 struct rdma_umap_priv *VAR_11;

 if (!(VAR_6->vm_flags & VAR_4))
  return -VAR_1;

 if (VAR_6->vm_end - VAR_6->vm_start != VAR_8)
  return -VAR_1;


 if (FUNC_0(!VAR_6->vm_file ||
      VAR_6->vm_file->private_data != VAR_10))
  return -VAR_1;
 FUNC_4(&VAR_10->device->disassociate_srcu);

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_6->vm_page_prot = VAR_9;
 if (FUNC_1(VAR_6, VAR_6->vm_start, VAR_7, VAR_8, VAR_9)) {
  FUNC_2(VAR_11);
  return -VAR_0;
 }

 FUNC_5(VAR_11, VAR_6);
 return 0;
}
