
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int VAR_4 ;
 int * FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_5, VAR_8 = VAR_5 + (VAR_6 & ~(VAR_3 - 1));
 pgd_t *VAR_9;

 FUNC_0(VAR_7, VAR_8);
 VAR_9 = FUNC_2(VAR_7);
 do {
  pmd_t VAR_10, *VAR_11 = FUNC_5((pud_t *)VAR_9, VAR_7);

  VAR_10 = *VAR_11;
  if (!FUNC_4(VAR_10)) {







   FUNC_3(VAR_11);




   if ((FUNC_7(VAR_10) & VAR_1) == VAR_2)
    FUNC_8(&VAR_4, FUNC_6(VAR_10));
  }

  VAR_7 += VAR_0;
  VAR_9++;
 } while (VAR_7 < VAR_8);

 FUNC_1(VAR_5, VAR_8);
}
