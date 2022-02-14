
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (unsigned long,unsigned long,int ,unsigned int,int,unsigned long,unsigned long) ;
 int VAR_8 ;
 int FUNC_2 (unsigned long,int ) ;
 int * FUNC_3 (unsigned long) ;
 int * FUNC_4 (int *,int *,unsigned long) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *,unsigned long) ;
 int * FUNC_7 (int *,int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(unsigned long VAR_9, unsigned long VAR_10,
     pgprot_t VAR_11,
     unsigned int VAR_12,
     int VAR_13,
     unsigned long VAR_14, unsigned long VAR_15)
{
 unsigned long VAR_16 = VAR_10 >> VAR_2;
 pgd_t *VAR_17;
 pud_t *VAR_18;
 pmd_t *VAR_19;
 pte_t *VAR_20;



 FUNC_0(VAR_7 > VAR_6);





 if (FUNC_11(!FUNC_9()))
  return FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12,
      VAR_13, VAR_14, VAR_15);






 VAR_17 = FUNC_3(VAR_9);
 VAR_18 = FUNC_7(&VAR_8, VAR_17, VAR_9);
 if (!VAR_18)
  return -VAR_0;
 if (VAR_12 == VAR_4) {
  VAR_20 = (pte_t *)VAR_18;
  goto set_the_pte;
 }
 VAR_19 = FUNC_4(&VAR_8, VAR_18, VAR_9);
 if (!VAR_19)
  return -VAR_0;
 if (VAR_12 == VAR_3) {
  VAR_20 = FUNC_5(VAR_19);
  goto set_the_pte;
 }
 VAR_20 = FUNC_6(VAR_19, VAR_9);
 if (!VAR_20)
  return -VAR_0;

set_the_pte:
 FUNC_8(&VAR_8, VAR_9, VAR_20, FUNC_2(VAR_16, VAR_11));
 FUNC_10();
 return 0;
}
