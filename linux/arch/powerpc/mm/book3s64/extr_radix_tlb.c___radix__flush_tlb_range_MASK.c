
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long id; } ;
struct mm_struct {TYPE_1__ context; } ;
struct TYPE_4__ {unsigned int shift; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long,size_t) ;
 int FUNC_2 (unsigned long,unsigned long,unsigned long,unsigned long,size_t) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (struct mm_struct*,unsigned long,int ) ;
 int FUNC_6 (struct mm_struct*,unsigned long,unsigned long,unsigned long,unsigned long,size_t,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (struct mm_struct*) ;
 int FUNC_10 (struct mm_struct*) ;
 scalar_t__ FUNC_11 (struct mm_struct*) ;
 TYPE_2__* VAR_11 ;
 size_t VAR_12 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static inline void FUNC_16(struct mm_struct *VAR_15,
     unsigned long VAR_16, unsigned long VAR_17,
     bool VAR_18)

{
 unsigned long VAR_19;
 unsigned int VAR_20 = VAR_11[VAR_12].shift;
 unsigned long VAR_21 = 1UL << VAR_20;
 unsigned long VAR_22 = (VAR_17 - VAR_16) >> VAR_20;
 bool VAR_23, VAR_24;

 VAR_19 = VAR_15->context.id;
 if (FUNC_15(VAR_19 == VAR_1))
  return;

 FUNC_12();
 FUNC_14();
 if (!FUNC_10(VAR_15)) {
  if (FUNC_15(FUNC_9(VAR_15))) {
   if (VAR_17 != VAR_10) {
    FUNC_8(VAR_15);
    goto is_local;
   }
  }
  VAR_23 = 0;
  VAR_24 = (VAR_17 == VAR_10 ||
    VAR_22 > VAR_14);
 } else {
is_local:
  VAR_23 = 1;
  VAR_24 = (VAR_17 == VAR_10 ||
    VAR_22 > VAR_13);
 }

 if (VAR_24) {
  if (VAR_23) {
   FUNC_4(VAR_19, VAR_9);
  } else {
   if (FUNC_7()) {
    if (FUNC_11(VAR_15))
     FUNC_3(VAR_19, VAR_8);
    else
     FUNC_3(VAR_19, VAR_9);
   } else {
    FUNC_5(VAR_15, VAR_19, VAR_9);
   }
  }
 } else {
  bool VAR_25 = VAR_18;
  bool VAR_26 = VAR_18;
  unsigned long VAR_27, VAR_28;
  unsigned long VAR_29, VAR_30;

  if (FUNC_0(VAR_0))
   VAR_25 = 1;

  if (VAR_25) {
   VAR_27 = (VAR_16 + VAR_5 - 1) & VAR_4;
   VAR_28 = VAR_17 & VAR_4;
   if (VAR_27 == VAR_28)
    VAR_25 = 0;
  }

  if (VAR_26) {
   VAR_29 = (VAR_16 + VAR_7 - 1) & VAR_6;
   VAR_30 = VAR_17 & VAR_6;
   if (VAR_29 == VAR_30)
    VAR_26 = 0;
  }

  if (VAR_23) {
   asm volatile("ptesync": : :"memory");
   FUNC_2(VAR_16, VAR_17, VAR_19, VAR_21, VAR_12);
   if (VAR_25)
    FUNC_2(VAR_27, VAR_28, VAR_19,
      VAR_5, VAR_3);
   if (VAR_26)
    FUNC_2(VAR_29, VAR_30, VAR_19,
      VAR_7, VAR_2);
   asm volatile("ptesync": : :"memory");
  } else if (FUNC_7()) {
   asm volatile("ptesync": : :"memory");
   FUNC_1(VAR_16, VAR_17, VAR_19, VAR_21, VAR_12);
   if (VAR_25)
    FUNC_1(VAR_27, VAR_28, VAR_19,
      VAR_5, VAR_3);
   if (VAR_26)
    FUNC_1(VAR_29, VAR_30, VAR_19,
      VAR_7, VAR_2);

   asm volatile("eieio; tlbsync; ptesync": : :"memory");
  } else {
   FUNC_6(VAR_15,
     VAR_16, VAR_17, VAR_19, VAR_21, VAR_12, 0);
   if (VAR_25)
    FUNC_6(VAR_15,
     VAR_27, VAR_28, VAR_19, VAR_5, VAR_3, 0);
   if (VAR_26)
    FUNC_6(VAR_15,
     VAR_29, VAR_30, VAR_19, VAR_7, VAR_2, 0);
  }
 }
 FUNC_13();
}
