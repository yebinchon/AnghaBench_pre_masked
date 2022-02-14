
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int,unsigned long,unsigned long) ;
 int VAR_6 ;
 int FUNC_1 (unsigned long,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (unsigned long) ;
 int FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *,unsigned long,int *,int ) ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(unsigned long VAR_7, unsigned long VAR_8,
     pgprot_t VAR_9,
     unsigned int VAR_10,
     int VAR_11,
     unsigned long VAR_12, unsigned long VAR_13)
{
 unsigned long VAR_14 = VAR_8 >> VAR_0;
 pgd_t *VAR_15;
 pud_t *VAR_16;
 pmd_t *VAR_17;
 pte_t *VAR_18;

 VAR_15 = FUNC_3(VAR_7);
 if (FUNC_2(*VAR_15)) {
  VAR_16 = FUNC_0(VAR_5, VAR_11,
      VAR_12, VAR_13);
  FUNC_4(&VAR_6, VAR_15, VAR_16);
 }
 VAR_16 = FUNC_11(VAR_15, VAR_7);
 if (VAR_10 == VAR_4) {
  VAR_18 = (pte_t *)VAR_16;
  goto set_the_pte;
 }
 if (FUNC_10(*VAR_16)) {
  VAR_17 = FUNC_0(VAR_3, VAR_11,
      VAR_12, VAR_13);
  FUNC_12(&VAR_6, VAR_16, VAR_17);
 }
 VAR_17 = FUNC_5(VAR_16, VAR_7);
 if (VAR_10 == VAR_2) {
  VAR_18 = FUNC_8(VAR_17);
  goto set_the_pte;
 }
 if (!FUNC_7(*VAR_17)) {
  VAR_18 = FUNC_0(VAR_1, VAR_11,
      VAR_12, VAR_13);
  FUNC_6(&VAR_6, VAR_17, VAR_18);
 }
 VAR_18 = FUNC_9(VAR_17, VAR_7);

set_the_pte:
 FUNC_13(&VAR_6, VAR_7, VAR_18, FUNC_1(VAR_14, VAR_9));
 FUNC_14();
 return 0;
}
