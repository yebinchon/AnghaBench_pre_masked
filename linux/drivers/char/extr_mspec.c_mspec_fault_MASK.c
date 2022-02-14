
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vma_data {unsigned long* maddr; int lock; int count; } ;
struct vm_fault {size_t pgoff; int address; TYPE_1__* vma; } ;
typedef size_t pgoff_t ;
struct TYPE_2__ {struct vma_data* vm_private_data; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int ,int) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (TYPE_1__*,int ,unsigned long) ;

__attribute__((used)) static vm_fault_t
FUNC_6(struct vm_fault *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6;
 pgoff_t VAR_7 = VAR_3->pgoff;
 struct vma_data *VAR_8 = VAR_3->vma->vm_private_data;

 VAR_5 = (volatile unsigned long) VAR_8->maddr[VAR_7];
 if (VAR_5 == 0) {
  VAR_5 = FUNC_3(FUNC_0(), 1);
  if (VAR_5 == 0)
   return VAR_1;

  FUNC_1(&VAR_8->lock);
  if (VAR_8->maddr[VAR_7] == 0) {
   VAR_8->count++;
   VAR_8->maddr[VAR_7] = VAR_5;
  } else {
   FUNC_4(VAR_5, 1);
   VAR_5 = VAR_8->maddr[VAR_7];
  }
  FUNC_2(&VAR_8->lock);
 }

 VAR_4 = VAR_5 & ~VAR_2;
 VAR_6 = VAR_4 >> VAR_0;

 return FUNC_5(VAR_3->vma, VAR_3->address, VAR_6);
}
