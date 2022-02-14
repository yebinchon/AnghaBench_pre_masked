
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rlimit {int dummy; } ;
struct mm_struct {int get_unmapped_area; int mmap_base; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned long,struct rlimit*) ;
 scalar_t__ FUNC_2 (struct rlimit*) ;
 void FUNC_3 (struct mm_struct*,unsigned long,struct rlimit*) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(struct mm_struct *VAR_5, struct rlimit *VAR_6)
{
 unsigned long VAR_7 = 0UL;

 if (VAR_4->flags & VAR_0)
  VAR_7 = FUNC_0();

 if (FUNC_4())
  return FUNC_3(VAR_5, VAR_7,
          VAR_6);




 if (FUNC_2(VAR_6)) {
  VAR_5->mmap_base = VAR_1;
  VAR_5->get_unmapped_area = VAR_2;
 } else {
  VAR_5->mmap_base = FUNC_1(VAR_7, VAR_6);
  VAR_5->get_unmapped_area = VAR_3;
 }
}
