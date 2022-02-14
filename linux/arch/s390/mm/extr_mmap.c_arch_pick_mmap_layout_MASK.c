
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
 unsigned long FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (unsigned long,struct rlimit*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct rlimit*) ;

void FUNC_4(struct mm_struct *VAR_4, struct rlimit *VAR_5)
{
 unsigned long VAR_6 = 0UL;

 if (VAR_3->flags & VAR_0)
  VAR_6 = FUNC_0();





 if (FUNC_3(VAR_5)) {
  VAR_4->mmap_base = FUNC_2(VAR_6);
  VAR_4->get_unmapped_area = VAR_1;
 } else {
  VAR_4->mmap_base = FUNC_1(VAR_6, VAR_5);
  VAR_4->get_unmapped_area = VAR_2;
 }
}
