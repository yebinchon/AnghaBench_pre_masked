
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct task_struct {int min_flt; int maj_flt; struct mm_struct* mm; } ;
struct pt_regs {int UCreg_pc; } ;
struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct mm_struct*,unsigned long,unsigned int,struct pt_regs*) ;
 int FUNC_1 (struct mm_struct*,unsigned long,unsigned int,unsigned int,struct task_struct*) ;
 int FUNC_2 (unsigned long,unsigned int,int,int,struct pt_regs*) ;
 struct task_struct* VAR_16 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_13(unsigned long VAR_17, unsigned int VAR_18, struct pt_regs *VAR_19)
{
 struct task_struct *VAR_20;
 struct mm_struct *VAR_21;
 int VAR_22, VAR_23;
 vm_fault_t VAR_24;
 unsigned int VAR_25 = VAR_1 | VAR_2;

 VAR_20 = VAR_16;
 VAR_21 = VAR_20->mm;





 if (FUNC_6() || !VAR_21)
  goto no_context;

 if (FUNC_12(VAR_19))
  VAR_25 |= VAR_3;
 if (!(VAR_18 ^ 0x12))
  VAR_25 |= VAR_4;






 if (!FUNC_4(&VAR_21->mmap_sem)) {
  if (!FUNC_12(VAR_19)
      && !FUNC_10(VAR_19->UCreg_pc))
   goto no_context;
retry:
  FUNC_3(&VAR_21->mmap_sem);
 } else {





  FUNC_8();





 }

 VAR_24 = FUNC_1(VAR_21, VAR_17, VAR_18, VAR_25, VAR_20);





 if ((VAR_24 & VAR_14) && FUNC_5(VAR_16))
  return 0;

 if (!(VAR_24 & VAR_11) && (VAR_25 & VAR_1)) {
  if (VAR_24 & VAR_12)
   VAR_20->maj_flt++;
  else
   VAR_20->min_flt++;
  if (VAR_24 & VAR_14) {


   VAR_25 &= ~VAR_1;
   goto retry;
  }
 }

 FUNC_11(&VAR_21->mmap_sem);




 if (FUNC_7(!(VAR_24 &
        (VAR_11 | VAR_10 | VAR_9))))
  return 0;





 if (!FUNC_12(VAR_19))
  goto no_context;

 if (VAR_24 & VAR_13) {





  FUNC_9();
  return 0;
 }

 if (VAR_24 & VAR_15) {




  VAR_22 = VAR_7;
  VAR_23 = VAR_0;
 } else {




  VAR_22 = VAR_8;
  VAR_23 = VAR_24 == VAR_9 ? VAR_5 : VAR_6;
 }

 FUNC_2(VAR_17, VAR_18, VAR_22, VAR_23, VAR_19);
 return 0;

no_context:
 FUNC_0(VAR_21, VAR_17, VAR_18, VAR_19);
 return 0;
}
