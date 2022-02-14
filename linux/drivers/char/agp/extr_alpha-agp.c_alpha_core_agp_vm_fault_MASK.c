
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {struct page* page; TYPE_2__* vma; scalar_t__ address; } ;
struct page {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_9__ {scalar_t__ bus_base; } ;
struct TYPE_10__ {TYPE_1__* ops; TYPE_3__ aperture; } ;
typedef TYPE_4__ alpha_agp_info ;
struct TYPE_11__ {TYPE_4__* dev_private_data; } ;
struct TYPE_8__ {scalar_t__ vm_start; } ;
struct TYPE_7__ {unsigned long (* translate ) (TYPE_4__*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 TYPE_6__* VAR_2 ;
 int FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (TYPE_4__*,scalar_t__) ;
 struct page* FUNC_3 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_4(struct vm_fault *VAR_3)
{
 alpha_agp_info *VAR_4 = VAR_2->dev_private_data;
 dma_addr_t VAR_5;
 unsigned long VAR_6;
 struct page *VAR_7;

 VAR_5 = VAR_3->address - VAR_3->vma->vm_start + VAR_4->aperture.bus_base;
 VAR_6 = VAR_4->ops->translate(VAR_4, VAR_5);

 if (VAR_6 == (unsigned long)-VAR_0)
  return VAR_1;




 VAR_7 = FUNC_3(FUNC_0(VAR_6));
 FUNC_1(VAR_7);
 VAR_3->page = VAR_7;
 return 0;
}
