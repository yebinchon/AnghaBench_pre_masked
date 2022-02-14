
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; int vm_flags; int vm_page_prot; } ;
struct TYPE_6__ {int pfn; } ;
struct pvrdma_ucontext {TYPE_3__ uar; TYPE_2__* dev; } ;
struct ib_ucontext {int dummy; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,int ,unsigned long,int ) ;
 int FUNC_3 (int ) ;
 struct pvrdma_ucontext* FUNC_4 (struct ib_ucontext*) ;

int FUNC_5(struct ib_ucontext *VAR_7, struct vm_area_struct *VAR_8)
{
 struct pvrdma_ucontext *VAR_9 = FUNC_4(VAR_7);
 unsigned long VAR_10 = VAR_8->vm_start;
 unsigned long VAR_11 = VAR_8->vm_end - VAR_8->vm_start;
 unsigned long VAR_12 = VAR_8->vm_pgoff << VAR_3;

 FUNC_0(&VAR_9->dev->pdev->dev, "create mmap region\n");

 if ((VAR_11 != VAR_4) || (VAR_12 & ~VAR_2)) {
  FUNC_1(&VAR_9->dev->pdev->dev,
    "invalid params for mmap region\n");
  return -VAR_1;
 }


 VAR_8->vm_flags |= VAR_5 | VAR_6;
 VAR_8->vm_page_prot = FUNC_3(VAR_8->vm_page_prot);
 if (FUNC_2(VAR_8, VAR_10, VAR_9->uar.pfn, VAR_11,
          VAR_8->vm_page_prot))
  return -VAR_0;

 return 0;
}
