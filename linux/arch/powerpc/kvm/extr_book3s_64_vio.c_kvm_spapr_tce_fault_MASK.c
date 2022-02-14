
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {scalar_t__ pgoff; struct page* page; TYPE_2__* vma; } ;
struct page {int dummy; } ;
struct kvmppc_spapr_tce_table {int size; } ;
struct TYPE_4__ {TYPE_1__* vm_file; } ;
struct TYPE_3__ {struct kvmppc_spapr_tce_table* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct kvmppc_spapr_tce_table*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_3(struct vm_fault *VAR_2)
{
 struct kvmppc_spapr_tce_table *VAR_3 = VAR_2->vma->vm_file->private_data;
 struct page *VAR_4;

 if (VAR_2->pgoff >= FUNC_2(VAR_3->size))
  return VAR_1;

 VAR_4 = FUNC_1(VAR_3, VAR_2->pgoff);
 if (!VAR_4)
  return VAR_0;

 FUNC_0(VAR_4);
 VAR_2->page = VAR_4;
 return 0;
}
