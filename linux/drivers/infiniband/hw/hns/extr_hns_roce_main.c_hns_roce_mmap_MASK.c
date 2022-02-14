
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; int vm_page_prot; } ;
struct ib_ucontext {int device; } ;
struct hns_roce_dev {int tptr_dma_addr; int tptr_size; } ;
struct TYPE_3__ {int pfn; } ;
struct TYPE_4__ {TYPE_1__ uar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_ucontext*,struct vm_area_struct*,int,int ,int ) ;
 struct hns_roce_dev* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_4(struct ib_ucontext *VAR_3,
    struct vm_area_struct *VAR_4)
{
 struct hns_roce_dev *VAR_5 = FUNC_2(VAR_3->device);

 switch (VAR_4->vm_pgoff) {
 case 0:
  return FUNC_1(VAR_3, VAR_4,
      FUNC_3(VAR_3)->uar.pfn,
      VAR_2,
      FUNC_0(VAR_4->vm_page_prot));


 case 1:
  if (!VAR_5->tptr_dma_addr || !VAR_5->tptr_size)
   return -VAR_0;




  return FUNC_1(VAR_3, VAR_4,
      VAR_5->tptr_dma_addr >> VAR_1,
      VAR_5->tptr_size,
      VAR_4->vm_page_prot);

 default:
  return -VAR_0;
 }
}
