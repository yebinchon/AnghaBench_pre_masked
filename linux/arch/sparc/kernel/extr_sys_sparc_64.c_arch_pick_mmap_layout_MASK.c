
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rlimit {unsigned long rlim_cur; } ;
struct mm_struct {int get_unmapped_area; scalar_t__ mmap_base; } ;
struct TYPE_2__ {int personality; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 unsigned long FUNC_1 () ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mm_struct *VAR_9, struct rlimit *VAR_10)
{
 unsigned long VAR_11 = FUNC_1();
 unsigned long VAR_12;





 VAR_12 = VAR_10->rlim_cur;
 if (!FUNC_2(VAR_4) ||
     (VAR_7->personality & VAR_0) ||
     VAR_12 == VAR_1 ||
     VAR_8) {
  VAR_9->mmap_base = VAR_3 + VAR_11;
  VAR_9->get_unmapped_area = VAR_5;
 } else {

  unsigned long VAR_13 = VAR_2;

  if (VAR_12 < 128 * 1024 * 1024)
   VAR_12 = 128 * 1024 * 1024;
  if (VAR_12 > (VAR_13 / 6 * 5))
   VAR_12 = (VAR_13 / 6 * 5);

  VAR_9->mmap_base = FUNC_0(VAR_13 - VAR_12 - VAR_11);
  VAR_9->get_unmapped_area = VAR_6;
 }
}
