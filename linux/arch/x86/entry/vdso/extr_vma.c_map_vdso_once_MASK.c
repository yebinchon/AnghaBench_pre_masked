
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct vm_area_struct* vm_next; } ;
struct vdso_image {int dummy; } ;
struct mm_struct {int mmap_sem; struct vm_area_struct* mmap; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vdso_image const*,unsigned long) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,int *) ;
 int VAR_3 ;

int FUNC_4(const struct vdso_image *VAR_4, unsigned long VAR_5)
{
 struct mm_struct *VAR_6 = VAR_1->mm;
 struct vm_area_struct *VAR_7;

 FUNC_0(&VAR_6->mmap_sem);







 for (VAR_7 = VAR_6->mmap; VAR_7; VAR_7 = VAR_7->vm_next) {
  if (FUNC_3(VAR_7, &VAR_2) ||
    FUNC_3(VAR_7, &VAR_3)) {
   FUNC_2(&VAR_6->mmap_sem);
   return -VAR_0;
  }
 }
 FUNC_2(&VAR_6->mmap_sem);

 return FUNC_1(VAR_4, VAR_5);
}
