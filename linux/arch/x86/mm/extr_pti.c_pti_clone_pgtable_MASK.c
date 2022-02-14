
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;
typedef enum pti_clone_level { ____Placeholder_pti_clone_level } pti_clone_level ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (unsigned long) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int * FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int ,int ) ;
 int * FUNC_17 (unsigned long) ;
 int * FUNC_18 (unsigned long) ;
 scalar_t__ FUNC_19 (int ) ;
 int * FUNC_20 (int *,unsigned long) ;
 unsigned long FUNC_21 (unsigned long,scalar_t__) ;

__attribute__((used)) static void
FUNC_22(unsigned long VAR_10, unsigned long VAR_11,
    enum pti_clone_level VAR_12)
{
 unsigned long VAR_13;





 for (VAR_13 = VAR_10; VAR_13 < VAR_11;) {
  pte_t *VAR_14, *VAR_15;
  pmd_t *VAR_16, *VAR_17;
  pgd_t *VAR_18;
  p4d_t *VAR_19;
  pud_t *VAR_20;


  if (VAR_13 < VAR_10)
   break;

  VAR_18 = FUNC_7(VAR_13);
  if (FUNC_1(FUNC_6(*VAR_18)))
   return;
  VAR_19 = FUNC_5(VAR_18, VAR_13);
  if (FUNC_1(FUNC_4(*VAR_19)))
   return;

  VAR_20 = FUNC_20(VAR_19, VAR_13);
  if (FUNC_19(*VAR_20)) {
   FUNC_2(VAR_13 & ~VAR_5);
   VAR_13 = FUNC_21(VAR_13 + 1, VAR_6);
   continue;
  }

  VAR_16 = FUNC_11(VAR_20, VAR_13);
  if (FUNC_10(*VAR_16)) {
   FUNC_2(VAR_13 & ~VAR_1);
   VAR_13 = FUNC_21(VAR_13 + 1, VAR_2);
   continue;
  }

  if (FUNC_9(*VAR_16) || VAR_12 == VAR_3) {
   VAR_17 = FUNC_17(VAR_13);
   if (FUNC_1(!VAR_17))
    return;







   if (FUNC_1(!(FUNC_8(*VAR_16) & VAR_9)))
    return;
   if (FUNC_3(VAR_7))
    *VAR_16 = FUNC_12(*VAR_16, VAR_8);






   *VAR_17 = *VAR_16;

   VAR_13 += VAR_2;

  } else if (VAR_12 == VAR_4) {


   VAR_14 = FUNC_15(VAR_16, VAR_13);
   if (FUNC_14(*VAR_14)) {
    VAR_13 += VAR_0;
    continue;
   }


   if (FUNC_1(!(FUNC_13(*VAR_14) & VAR_9)))
    return;


   VAR_15 = FUNC_18(VAR_13);
   if (FUNC_1(!VAR_15))
    return;


   if (FUNC_3(VAR_7))
    *VAR_14 = FUNC_16(*VAR_14, VAR_8);


   *VAR_15 = *VAR_14;

   VAR_13 += VAR_0;

  } else {
   FUNC_0();
  }
 }
}
