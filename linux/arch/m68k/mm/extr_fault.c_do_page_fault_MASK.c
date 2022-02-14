
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_area_struct {int vm_flags; unsigned long vm_start; } ;
struct pt_regs {int pc; int sr; } ;
struct mm_struct {int mmap_sem; int * pgd; } ;
struct TYPE_4__ {unsigned long faddr; int code; void* signo; } ;
struct TYPE_5__ {TYPE_1__ thread; int min_flt; int maj_flt; struct mm_struct* mm; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_2__* VAR_21 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 () ;
 struct vm_area_struct* FUNC_5 (struct mm_struct*,unsigned long) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long,unsigned int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 unsigned long FUNC_9 () ;
 int FUNC_10 (struct pt_regs*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct pt_regs*) ;

int FUNC_14(struct pt_regs *VAR_22, unsigned long VAR_23,
         unsigned long VAR_24)
{
 struct mm_struct *VAR_25 = VAR_21->mm;
 struct vm_area_struct * VAR_26;
 vm_fault_t VAR_27;
 unsigned int VAR_28 = VAR_1 | VAR_2;

 FUNC_8("do page fault:\nregs->sr=%#x, regs->pc=%#lx, address=%#lx, %ld, %p\n",
  VAR_22->sr, VAR_22->pc, VAR_23, VAR_24, VAR_25 ? VAR_25->pgd : ((void*)0));





 if (FUNC_4() || !VAR_25)
  goto no_context;

 if (FUNC_13(VAR_22))
  VAR_28 |= VAR_4;
retry:
 FUNC_1(&VAR_25->mmap_sem);

 VAR_26 = FUNC_5(VAR_25, VAR_23);
 if (!VAR_26)
  goto map_err;
 if (VAR_26->vm_flags & VAR_18)
  goto acc_err;
 if (VAR_26->vm_start <= VAR_23)
  goto good_area;
 if (!(VAR_26->vm_flags & VAR_17))
  goto map_err;
 if (FUNC_13(VAR_22)) {




  if (VAR_23 + 256 < FUNC_9())
   goto map_err;
 }
 if (FUNC_2(VAR_26, VAR_23))
  goto map_err;





good_area:
 FUNC_8("do_page_fault: good_area\n");
 switch (VAR_24 & 3) {
  default:

  case 2:
   if (!(VAR_26->vm_flags & VAR_20))
    goto acc_err;
   VAR_28 |= VAR_5;
   break;
  case 1:
   goto acc_err;
  case 0:
   if (!(VAR_26->vm_flags & (VAR_19 | VAR_10 | VAR_20)))
    goto acc_err;
 }







 VAR_27 = FUNC_6(VAR_26, VAR_23, VAR_28);
 FUNC_8("handle_mm_fault returns %x\n", VAR_27);

 if ((VAR_27 & VAR_14) && FUNC_3(VAR_21))
  return 0;

 if (FUNC_11(VAR_27 & VAR_11)) {
  if (VAR_27 & VAR_13)
   goto out_of_memory;
  else if (VAR_27 & VAR_16)
   goto map_err;
  else if (VAR_27 & VAR_15)
   goto bus_err;
  FUNC_0();
 }






 if (VAR_28 & VAR_1) {
  if (VAR_27 & VAR_12)
   VAR_21->maj_flt++;
  else
   VAR_21->min_flt++;
  if (VAR_27 & VAR_14) {


   VAR_28 &= ~VAR_1;
   VAR_28 |= VAR_3;







   goto retry;
  }
 }

 FUNC_12(&VAR_25->mmap_sem);
 return 0;





out_of_memory:
 FUNC_12(&VAR_25->mmap_sem);
 if (!FUNC_13(VAR_22))
  goto no_context;
 FUNC_7();
 return 0;

no_context:
 VAR_21->thread.signo = VAR_8;
 VAR_21->thread.faddr = VAR_23;
 return FUNC_10(VAR_22);

bus_err:
 VAR_21->thread.signo = VAR_8;
 VAR_21->thread.code = VAR_0;
 VAR_21->thread.faddr = VAR_23;
 goto send_sig;

map_err:
 VAR_21->thread.signo = VAR_9;
 VAR_21->thread.code = VAR_7;
 VAR_21->thread.faddr = VAR_23;
 goto send_sig;

acc_err:
 VAR_21->thread.signo = VAR_9;
 VAR_21->thread.code = VAR_6;
 VAR_21->thread.faddr = VAR_23;

send_sig:
 FUNC_12(&VAR_25->mmap_sem);
 return FUNC_10(VAR_22);
}
