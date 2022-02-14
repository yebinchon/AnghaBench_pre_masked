
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (void*,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int * FUNC_18 (int *,scalar_t__) ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 scalar_t__ VAR_5 ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int ) ;
 int FUNC_24 (int *,int ) ;

int FUNC_25(void)
{
 pgd_t *VAR_6;
 p4d_t *VAR_7;
 pud_t *VAR_8;
 pmd_t *VAR_9;
 pte_t *VAR_10;

 VAR_5 = FUNC_6(VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_7((void *)VAR_5, VAR_4, VAR_2);


 VAR_6 = (pgd_t *)FUNC_5(FUNC_20()) +
  FUNC_11(VAR_5);
 VAR_7 = FUNC_9(VAR_6, VAR_5);
 if (FUNC_8(*VAR_7)) {
  FUNC_21(VAR_7, FUNC_1(FUNC_10(*VAR_7) & ~VAR_3));
  goto out;
 }
 VAR_8 = FUNC_18(VAR_7, VAR_5);
 if (FUNC_17(*VAR_8)) {
  FUNC_24(VAR_8, FUNC_4(FUNC_19(*VAR_8) & ~VAR_3));
  goto out;
 }
 VAR_9 = FUNC_13(VAR_8, VAR_5);
 if (FUNC_12(*VAR_9)) {
  FUNC_22(VAR_9, FUNC_2(FUNC_14(*VAR_9) & ~VAR_3));
  goto out;
 }
 VAR_10 = FUNC_15(VAR_9, VAR_5);
 FUNC_23(VAR_10, FUNC_3(FUNC_16(*VAR_10) & ~VAR_3));
out:
 FUNC_0();
 return 0;
}
