
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_flags; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 long VAR_0 ;
 long VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (TYPE_1__*,unsigned long) ;
 long FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static long FUNC_4(unsigned long VAR_3, unsigned long VAR_4,
      unsigned long *VAR_5)
{
 struct vm_area_struct *VAR_6;
 long VAR_7;

 FUNC_0(&VAR_2->mm->mmap_sem);
 VAR_7 = -VAR_1;
 VAR_6 = FUNC_1(VAR_2->mm, VAR_3);
 if (!VAR_6)
  goto out;
 VAR_7 = -VAR_0;
 if (!(VAR_6->vm_flags & VAR_4))
  goto out;
 VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_5);
out:
 FUNC_3(&VAR_2->mm->mmap_sem);
 return VAR_7;
}
