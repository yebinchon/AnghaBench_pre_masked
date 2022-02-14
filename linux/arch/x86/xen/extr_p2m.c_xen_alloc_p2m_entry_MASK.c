
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long* pte_t ;
struct TYPE_3__ {unsigned long max_pfn; int p2m_generation; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 unsigned int VAR_6 ;
 unsigned long* FUNC_2 (unsigned long*) ;
 int FUNC_3 (unsigned long*) ;
 unsigned long* FUNC_4 () ;
 unsigned long** FUNC_5 (unsigned long,unsigned long**) ;
 unsigned long FUNC_6 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_7 (unsigned long*) ;
 unsigned long** FUNC_8 (unsigned long,unsigned int*) ;
 unsigned long* FUNC_9 (unsigned long) ;
 unsigned long* VAR_7 ;
 unsigned long** VAR_8 ;
 int FUNC_10 (unsigned long*) ;
 int FUNC_11 (unsigned long*,unsigned long) ;
 size_t FUNC_12 (unsigned long) ;
 int FUNC_13 (unsigned long*,unsigned long*) ;
 unsigned long* VAR_9 ;
 unsigned long* VAR_10 ;
 unsigned long** VAR_11 ;
 unsigned int FUNC_14 (unsigned long) ;
 unsigned long* VAR_12 ;
 unsigned long** VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (unsigned long,int ) ;
 unsigned long FUNC_16 (unsigned long*) ;
 int FUNC_17 (unsigned long**,int ) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 unsigned long FUNC_20 (unsigned long*) ;
 int FUNC_21 () ;
 scalar_t__ VAR_15 ;
 unsigned long VAR_16 ;

int FUNC_22(unsigned long VAR_17)
{
 unsigned VAR_18;
 unsigned long *VAR_19, *VAR_20;
 pte_t *VAR_21, *VAR_22;
 unsigned int VAR_23;
 unsigned long VAR_24;
 unsigned long VAR_25 = (unsigned long)(VAR_15 + VAR_17);
 unsigned long VAR_26;

 VAR_21 = FUNC_8(VAR_25, &VAR_23);
 FUNC_0(!VAR_21 || VAR_23 != VAR_6);
 VAR_22 = (pte_t *)((unsigned long)VAR_21 & ~(VAR_5 - 1));

 if (VAR_22 == VAR_11 || VAR_22 == VAR_8) {

  VAR_21 = FUNC_5(VAR_25, VAR_22);
  if (!VAR_21)
   return -VAR_0;
 }

 if (VAR_12 && VAR_17 < VAR_2) {
  VAR_18 = FUNC_14(VAR_17);
  VAR_19 = &VAR_12[VAR_18];
  VAR_20 = FUNC_2(VAR_13[VAR_18]);

  FUNC_0(FUNC_20(VAR_20) != *VAR_19);

  if (VAR_20 == VAR_9) {

   unsigned long VAR_27;
   unsigned long VAR_28;
   unsigned long VAR_29;

   VAR_20 = FUNC_4();
   if (!VAR_20)
    return -VAR_0;

   FUNC_13(VAR_20, VAR_10);

   VAR_27 = FUNC_20(VAR_9);
   VAR_28 = FUNC_20(VAR_20);
   VAR_29 = FUNC_6(VAR_19, VAR_27, VAR_28);
   if (VAR_29 != VAR_27) {
    FUNC_7(VAR_20);
    VAR_20 = FUNC_9(VAR_29);
   } else {
    VAR_13[VAR_18] = VAR_20;
   }
  }
 } else {
  VAR_20 = ((void*)0);
 }

 VAR_26 = FUNC_16(FUNC_2(*VAR_21));
 if (VAR_26 == FUNC_1(FUNC_3(VAR_7)) ||
     VAR_26 == FUNC_1(FUNC_3(VAR_10))) {

  unsigned long *VAR_30;

  VAR_30 = FUNC_4();
  if (!VAR_30)
   return -VAR_0;

  if (VAR_26 == FUNC_1(FUNC_3(VAR_10)))
   FUNC_10(VAR_30);
  else
   FUNC_11(VAR_30, VAR_17 & ~(VAR_3 - 1));

  FUNC_18(&VAR_14, VAR_24);

  if (FUNC_16(*VAR_21) == VAR_26) {
   VAR_1->arch.p2m_generation++;
   FUNC_21();
   FUNC_17(VAR_21,
    FUNC_15(FUNC_1(FUNC_3(VAR_30)), VAR_4));
   FUNC_21();
   VAR_1->arch.p2m_generation++;
   if (VAR_20)
    VAR_20[FUNC_12(VAR_17)] = FUNC_20(VAR_30);
   VAR_30 = ((void*)0);
  }

  FUNC_19(&VAR_14, VAR_24);

  if (VAR_30)
   FUNC_7(VAR_30);
 }


 if (VAR_17 > VAR_16) {
  VAR_16 = VAR_17;
  VAR_1->arch.max_pfn = VAR_16;
 }

 return 0;
}
