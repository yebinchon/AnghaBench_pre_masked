
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long pgoff; int address; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_page_prot; TYPE_1__* vm_file; } ;
struct TYPE_7__ {TYPE_2__* lscsa; } ;
struct spu_context {scalar_t__ state; TYPE_4__* spu; TYPE_3__ csa; } ;
struct TYPE_8__ {unsigned long local_store_phys; } ;
struct TYPE_6__ {scalar_t__ ls; } ;
struct TYPE_5__ {struct spu_context* private_data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,unsigned long) ;
 scalar_t__ FUNC_3 (struct spu_context*) ;
 int FUNC_4 (struct spu_context*) ;
 unsigned long FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct vm_area_struct*,int ,unsigned long) ;

__attribute__((used)) static vm_fault_t
FUNC_7(struct vm_fault *VAR_5)
{
 struct vm_area_struct *VAR_6 = VAR_5->vma;
 struct spu_context *VAR_7 = VAR_6->vm_file->private_data;
 unsigned long VAR_8, VAR_9;
 vm_fault_t VAR_10;

 VAR_9 = VAR_5->pgoff << VAR_1;
 if (VAR_9 >= VAR_0)
  return VAR_4;

 FUNC_2("spufs_mem_mmap_fault address=0x%lx, offset=0x%lx\n",
   VAR_5->address, VAR_9);

 if (FUNC_3(VAR_7))
  return VAR_3;

 if (VAR_7->state == VAR_2) {
  VAR_6->vm_page_prot = FUNC_0(VAR_6->vm_page_prot);
  VAR_8 = FUNC_5(VAR_7->csa.lscsa->ls + VAR_9);
 } else {
  VAR_6->vm_page_prot = FUNC_1(VAR_6->vm_page_prot);
  VAR_8 = (VAR_7->spu->local_store_phys + VAR_9) >> VAR_1;
 }
 VAR_10 = FUNC_6(VAR_6, VAR_5->address, VAR_8);

 FUNC_4(VAR_7);

 return VAR_10;
}
