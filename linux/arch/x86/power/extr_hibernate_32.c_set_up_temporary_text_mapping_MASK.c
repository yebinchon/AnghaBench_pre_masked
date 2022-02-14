
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(pgd_t *VAR_8)
{
 pgd_t *VAR_9;
 pmd_t *VAR_10;
 pte_t *VAR_11;

 VAR_9 = VAR_8 + FUNC_3(VAR_7);

 VAR_10 = FUNC_7(VAR_9);
 if (!VAR_10)
  return -VAR_0;

 if (FUNC_2(VAR_5)) {
  FUNC_9(VAR_10 + FUNC_5(VAR_7),
  FUNC_0((VAR_6 & VAR_4) | FUNC_4(VAR_2)));
 } else {
  VAR_11 = FUNC_8(VAR_10);
  if (!VAR_11)
   return -VAR_0;
  FUNC_10(VAR_11 + FUNC_6(VAR_7),
  FUNC_1((VAR_6 & VAR_3) | FUNC_4(VAR_1)));
 }

 return 0;
}
