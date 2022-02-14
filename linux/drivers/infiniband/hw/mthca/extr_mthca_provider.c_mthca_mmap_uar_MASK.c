
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_page_prot; } ;
struct ib_ucontext {int dummy; } ;
struct TYPE_3__ {int pfn; } ;
struct TYPE_4__ {TYPE_1__ uar; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_3(struct ib_ucontext *VAR_3,
     struct vm_area_struct *VAR_4)
{
 if (VAR_4->vm_end - VAR_4->vm_start != VAR_2)
  return -VAR_1;

 VAR_4->vm_page_prot = FUNC_1(VAR_4->vm_page_prot);

 if (FUNC_0(VAR_4, VAR_4->vm_start,
          FUNC_2(VAR_3)->uar.pfn,
          VAR_2, VAR_4->vm_page_prot))
  return -VAR_0;

 return 0;
}
