
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct vm_area_struct {int vm_pgoff; void* vm_page_prot; int vm_start; struct i40iw_ucontext* vm_private_data; } ;
struct ib_ucontext {int dummy; } ;
struct i40iw_ucontext {TYPE_3__* iwdev; } ;
struct TYPE_4__ {scalar_t__ is_pf; } ;
struct TYPE_6__ {TYPE_2__* ldev; TYPE_1__ sc_dev; } ;
struct TYPE_5__ {int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,int ,int,int ,void*) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 struct i40iw_ucontext* FUNC_4 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_5(struct ib_ucontext *VAR_9, struct vm_area_struct *VAR_10)
{
 struct i40iw_ucontext *VAR_11;
 u64 VAR_12;
 u64 VAR_13;

 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11->iwdev->sc_dev.is_pf) {
  VAR_12 = VAR_1;
  VAR_13 = VAR_3;
  if (VAR_10->vm_pgoff)
   VAR_10->vm_pgoff += VAR_2 - 1;
 } else {
  VAR_12 = VAR_4;
  VAR_13 = VAR_6;
  if (VAR_10->vm_pgoff)
   VAR_10->vm_pgoff += VAR_5 - 1;
 }

 VAR_10->vm_pgoff += VAR_12 >> VAR_7;

 if (VAR_10->vm_pgoff == (VAR_12 >> VAR_7)) {
  VAR_10->vm_page_prot = FUNC_2(VAR_10->vm_page_prot);
  VAR_10->vm_private_data = VAR_11;
 } else {
  if ((VAR_10->vm_pgoff - (VAR_13 >> VAR_7)) % 2)
   VAR_10->vm_page_prot = FUNC_2(VAR_10->vm_page_prot);
  else
   VAR_10->vm_page_prot = FUNC_3(VAR_10->vm_page_prot);
 }

 if (FUNC_0(VAR_10, VAR_10->vm_start,
          VAR_10->vm_pgoff + (FUNC_1(VAR_11->iwdev->ldev->pcidev, 0) >> VAR_7),
          VAR_8, VAR_10->vm_page_prot))
  return -VAR_0;

 return 0;
}
