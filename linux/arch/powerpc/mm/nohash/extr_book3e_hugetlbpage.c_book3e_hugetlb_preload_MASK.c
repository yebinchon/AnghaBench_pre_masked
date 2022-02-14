
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct TYPE_2__ {int id; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 unsigned long FUNC_11 (unsigned long) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,unsigned long) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 unsigned long FUNC_16 (int ) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int ) ;
 unsigned long FUNC_19 (unsigned long) ;
 unsigned long FUNC_20 (struct vm_area_struct*) ;

__attribute__((used)) static void
FUNC_21(struct vm_area_struct *VAR_16, unsigned long VAR_17, pte_t VAR_18)
{
 unsigned long VAR_19, VAR_20;
 u64 VAR_21;
 unsigned long VAR_22, VAR_23, VAR_24;
 unsigned long VAR_25;
 struct mm_struct *VAR_26;
 int VAR_27;

 if (FUNC_18(FUNC_8(VAR_17)))
  return;

 VAR_26 = VAR_16->vm_mm;

 VAR_22 = FUNC_20(VAR_16);
 VAR_24 = FUNC_4(VAR_22);
 VAR_23 = VAR_24 - 10;




 FUNC_10(VAR_25);

 FUNC_6();

 if (FUNC_18(FUNC_5(VAR_17, VAR_26->context.id))) {
  FUNC_7();
  FUNC_9(VAR_25);
  return;
 }


 VAR_27 = FUNC_17();
 FUNC_13(VAR_10, FUNC_0(VAR_27) | FUNC_1(1));

 VAR_19 = VAR_0 | FUNC_2(VAR_26->context.id) | FUNC_3(VAR_23);
 VAR_20 = VAR_17 & ~((1UL << VAR_24) - 1);
 VAR_20 |= (FUNC_16(VAR_18) >> VAR_9) & VAR_1;
 VAR_21 = (u64)FUNC_15(VAR_18) << VAR_7;
 VAR_21 |= (FUNC_16(VAR_18) >> VAR_8) & VAR_2;
 if (!FUNC_14(VAR_18))
  VAR_21 &= ~(VAR_3|VAR_4);

 FUNC_13(VAR_11, VAR_19);
 FUNC_13(VAR_12, VAR_20);

 if (FUNC_12(VAR_6)) {
  FUNC_13(VAR_15, VAR_21);
 } else {
  if (FUNC_12(VAR_5))
   FUNC_13(VAR_14, FUNC_19(VAR_21));
  FUNC_13(VAR_13, FUNC_11(VAR_21));
 }

 asm volatile ("tlbwe");

 FUNC_7();
 FUNC_9(VAR_25);
}
