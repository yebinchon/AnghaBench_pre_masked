
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(pmd_t *VAR_2)
{
 pte_t *VAR_3 = (pte_t *)FUNC_2(VAR_0);
 if (!VAR_3)
  return -1;

 FUNC_3(VAR_2, FUNC_1(FUNC_0(VAR_3) | VAR_1));
 return 0;
}
