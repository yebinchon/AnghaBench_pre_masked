
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int msr; } ;
struct mm_struct {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;
struct TYPE_3__ {int in_kernel_slb_handler; } ;


 int FUNC_0 (int) ;
 long VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (unsigned long) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,unsigned long) ;
 long FUNC_6 (unsigned long,unsigned long) ;
 long FUNC_7 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;

long FUNC_9(struct pt_regs *VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9 = FUNC_3(VAR_8);


 FUNC_1(FUNC_4() & VAR_3);

 if (FUNC_8(!(VAR_7->msr & VAR_4)))
  return -VAR_1;
 if (VAR_9 >= VAR_2) {
  long VAR_10;





  VAR_10 = FUNC_6(VAR_8, VAR_9);



  return VAR_10;
 } else {
  struct mm_struct *VAR_11 = VAR_5->mm;
  long VAR_12;

  if (FUNC_8(!VAR_11))
   return -VAR_0;

  VAR_12 = FUNC_7(VAR_11, VAR_8);
  if (!VAR_12)
   FUNC_5(FUNC_2(), VAR_8);

  return VAR_12;
 }
}
