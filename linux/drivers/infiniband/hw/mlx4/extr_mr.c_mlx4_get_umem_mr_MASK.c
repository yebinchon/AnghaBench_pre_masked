
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vm_area_struct {scalar_t__ vm_end; unsigned long vm_start; int vm_flags; } ;
struct ib_umem {int dummy; } ;
struct ib_udata {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (TYPE_1__*,unsigned long) ;
 int FUNC_2 (int) ;
 struct ib_umem* FUNC_3 (struct ib_udata*,scalar_t__,scalar_t__,int,int ) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct ib_umem *FUNC_6(struct ib_udata *VAR_3, u64 VAR_4,
     u64 VAR_5, int VAR_6)
{






 if (!FUNC_2(VAR_6)) {
  unsigned long VAR_7 = FUNC_4(VAR_4);
  struct vm_area_struct *VAR_8;

  FUNC_0(&VAR_2->mm->mmap_sem);





  VAR_8 = FUNC_1(VAR_2->mm, VAR_7);
  if (VAR_8 && VAR_8->vm_end >= VAR_7 + VAR_5 &&
      VAR_8->vm_start <= VAR_7) {
   if (VAR_8->vm_flags & VAR_1)
    VAR_6 |= VAR_0;
  } else {
   VAR_6 |= VAR_0;
  }

  FUNC_5(&VAR_2->mm->mmap_sem);
 }

 return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, 0);
}
