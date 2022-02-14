
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct gmap {TYPE_1__* mm; int guest_to_host; } ;
struct TYPE_2__ {int mmap_sem; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long,unsigned long) ;

void FUNC_7(struct gmap *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 struct vm_area_struct *VAR_9;

 FUNC_0(&VAR_3->mm->mmap_sem);
 for (VAR_6 = VAR_4; VAR_6 < VAR_5;
      VAR_6 = (VAR_6 + VAR_2) & VAR_0) {

  VAR_7 = (unsigned long)
   FUNC_4(&VAR_3->guest_to_host,
       VAR_6 >> VAR_1);
  if (!VAR_7)
   continue;
  VAR_7 |= VAR_6 & ~VAR_0;

  VAR_9 = FUNC_1(VAR_3->mm, VAR_7);
  if (!VAR_9)
   continue;




  if (FUNC_2(VAR_9))
   continue;
  VAR_8 = FUNC_3(VAR_5 - VAR_6, VAR_2 - (VAR_6 & ~VAR_0));
  FUNC_6(VAR_9, VAR_7, VAR_8);
 }
 FUNC_5(&VAR_3->mm->mmap_sem);
}
