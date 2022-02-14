
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int pgoff; TYPE_3__* page; TYPE_2__* vma; } ;
struct msc_iter {struct msc* msc; } ;
struct msc {int dummy; } ;
struct TYPE_7__ {int index; int mapping; } ;
struct TYPE_6__ {TYPE_1__* vm_file; } ;
struct TYPE_5__ {int f_mapping; struct msc_iter* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (struct msc*,int ) ;

__attribute__((used)) static vm_fault_t FUNC_2(struct vm_fault *VAR_1)
{
 struct msc_iter *VAR_2 = VAR_1->vma->vm_file->private_data;
 struct msc *VAR_3 = VAR_2->msc;

 VAR_1->page = FUNC_1(VAR_3, VAR_1->pgoff);
 if (!VAR_1->page)
  return VAR_0;

 FUNC_0(VAR_1->page);
 VAR_1->page->mapping = VAR_1->vma->vm_file->f_mapping;
 VAR_1->page->index = VAR_1->pgoff;

 return 0;
}
