
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct task_struct {int min_flt; int maj_flt; struct mm_struct* mm; } ;
struct pt_regs {int flags; int ip; } ;
struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (unsigned long,struct vm_area_struct*) ;
 int FUNC_1 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_2 (struct pt_regs*,unsigned long,unsigned long,struct vm_area_struct*) ;
 int FUNC_3 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_4 (struct pt_regs*,unsigned long,struct task_struct*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct task_struct* VAR_23 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (unsigned long,struct pt_regs*,unsigned long) ;
 int FUNC_9 (struct vm_area_struct*,unsigned long) ;
 int FUNC_10 (struct task_struct*) ;
 scalar_t__ FUNC_11 () ;
 struct vm_area_struct* FUNC_12 (struct mm_struct*,unsigned long) ;
 int FUNC_13 (struct vm_area_struct*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_14 (unsigned long) ;
 int FUNC_15 (struct pt_regs*,int ) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (struct pt_regs*,unsigned long,unsigned long,int) ;
 int FUNC_20 (struct pt_regs*,unsigned long,unsigned long,int ,int ) ;
 int FUNC_21 (int ,int,struct pt_regs*,unsigned long) ;
 int FUNC_22 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (struct pt_regs*) ;

__attribute__((used)) static inline
void FUNC_27(struct pt_regs *VAR_24,
   unsigned long VAR_25,
   unsigned long VAR_26)
{
 struct vm_area_struct *VAR_27;
 struct task_struct *VAR_28;
 struct mm_struct *VAR_29;
 vm_fault_t VAR_30, VAR_31 = 0;
 unsigned int VAR_32 = VAR_1 | VAR_3;

 VAR_28 = VAR_23;
 VAR_29 = VAR_28->mm;


 if (FUNC_24(FUNC_15(VAR_24, VAR_22)))
  return;





 if (FUNC_24(VAR_25 & VAR_19))
  FUNC_22(VAR_24, VAR_25, VAR_26);
 if (FUNC_24(FUNC_5(VAR_17) &&
       !(VAR_25 & VAR_20) &&
       !(VAR_24->flags & VAR_15)))
 {
  FUNC_3(VAR_24, VAR_25, VAR_26);
  return;
 }





 if (FUNC_24(FUNC_11() || !VAR_29)) {
  FUNC_3(VAR_24, VAR_25, VAR_26);
  return;
 }
 if (FUNC_26(VAR_24)) {
  FUNC_17();
  VAR_32 |= VAR_5;
 } else {
  if (VAR_24->flags & VAR_16)
   FUNC_17();
 }

 FUNC_21(VAR_7, 1, VAR_24, VAR_26);

 if (VAR_25 & VAR_21)
  VAR_32 |= VAR_6;
 if (VAR_25 & VAR_18)
  VAR_32 |= VAR_2;
 if (FUNC_24(!FUNC_7(&VAR_29->mmap_sem))) {
  if (!FUNC_26(VAR_24) && !FUNC_23(VAR_24->ip)) {




   FUNC_3(VAR_24, VAR_25, VAR_26);
   return;
  }
retry:
  FUNC_6(&VAR_29->mmap_sem);
 } else {





  FUNC_18();
 }

 VAR_27 = FUNC_12(VAR_29, VAR_26);
 if (FUNC_24(!VAR_27)) {
  FUNC_1(VAR_24, VAR_25, VAR_26);
  return;
 }
 if (FUNC_16(VAR_27->vm_start <= VAR_26))
  goto good_area;
 if (FUNC_24(!(VAR_27->vm_flags & VAR_14))) {
  FUNC_1(VAR_24, VAR_25, VAR_26);
  return;
 }
 if (FUNC_24(FUNC_9(VAR_27, VAR_26))) {
  FUNC_1(VAR_24, VAR_25, VAR_26);
  return;
 }





good_area:
 if (FUNC_24(FUNC_0(VAR_25, VAR_27))) {
  FUNC_2(VAR_24, VAR_25, VAR_26, VAR_27);
  return;
 }
 VAR_30 = FUNC_13(VAR_27, VAR_26, VAR_32);
 VAR_31 |= VAR_30 & VAR_12;






 if (FUNC_24(VAR_30 & VAR_13)) {

  if (VAR_32 & VAR_1) {
   VAR_32 &= ~VAR_1;
   VAR_32 |= VAR_4;
   if (!FUNC_10(VAR_28))
    goto retry;
  }


  if (VAR_32 & VAR_5)
   return;


  FUNC_20(VAR_24, VAR_25, VAR_26, VAR_10, VAR_0);
  return;
 }

 FUNC_25(&VAR_29->mmap_sem);
 if (FUNC_24(VAR_30 & VAR_11)) {
  FUNC_19(VAR_24, VAR_25, VAR_26, VAR_30);
  return;
 }





 if (VAR_31) {
  VAR_28->maj_flt++;
  FUNC_21(VAR_8, 1, VAR_24, VAR_26);
 } else {
  VAR_28->min_flt++;
  FUNC_21(VAR_9, 1, VAR_24, VAR_26);
 }

 FUNC_4(VAR_24, VAR_26, VAR_28);
}
