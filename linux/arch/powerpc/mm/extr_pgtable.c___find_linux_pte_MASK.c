
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int hugepd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int * FUNC_3 (int ,unsigned long,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int * FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int ) ;

pte_t *FUNC_21(pgd_t *VAR_3, unsigned long VAR_4,
   bool *VAR_5, unsigned *VAR_6)
{
 pgd_t VAR_7, *VAR_8;
 pud_t VAR_9, *VAR_10;
 pmd_t VAR_11, *VAR_12;
 pte_t *VAR_13;
 hugepd_t *VAR_14 = ((void*)0);
 unsigned VAR_15 = VAR_0;

 if (VAR_6)
  *VAR_6 = 0;

 if (VAR_5)
  *VAR_5 = 0;

 VAR_8 = VAR_3 + FUNC_5(VAR_4);
 VAR_7 = FUNC_0(*VAR_8);






 if (FUNC_7(VAR_7))
  return ((void*)0);

 if (FUNC_6(VAR_7)) {
  VAR_13 = (pte_t *)VAR_8;
  goto out;
 }

 if (FUNC_4(FUNC_1(FUNC_8(VAR_7)))) {
  VAR_14 = (hugepd_t *)&VAR_7;
  goto out_huge;
 }






 VAR_15 = VAR_2;
 VAR_10 = FUNC_19(&VAR_7, VAR_4);
 VAR_9 = FUNC_0(*VAR_10);

 if (FUNC_18(VAR_9))
  return ((void*)0);

 if (FUNC_17(VAR_9)) {
  VAR_13 = (pte_t *)VAR_10;
  goto out;
 }

 if (FUNC_4(FUNC_1(FUNC_20(VAR_9)))) {
  VAR_14 = (hugepd_t *)&VAR_9;
  goto out_huge;
 }

 VAR_15 = VAR_1;
 VAR_12 = FUNC_13(&VAR_9, VAR_4);
 VAR_11 = FUNC_0(*VAR_12);





 if (FUNC_12(VAR_11))
  return ((void*)0);
 if (FUNC_14(VAR_11) || FUNC_9(VAR_11)) {
  if (VAR_5)
   *VAR_5 = 1;
  VAR_13 = (pte_t *)VAR_12;
  goto out;
 }

 if (FUNC_10(VAR_11)) {
  VAR_13 = (pte_t *)VAR_12;
  goto out;
 }

 if (FUNC_4(FUNC_1(FUNC_15(VAR_11)))) {
  VAR_14 = (hugepd_t *)&VAR_11;
  goto out_huge;
 }

 return FUNC_16(&VAR_11, VAR_4);

out_huge:
 if (!VAR_14)
  return ((void*)0);

 VAR_13 = FUNC_3(*VAR_14, VAR_4, VAR_15);
 VAR_15 = FUNC_2(*VAR_14);
out:
 if (VAR_6)
  *VAR_6 = VAR_15;
 return VAR_13;
}
