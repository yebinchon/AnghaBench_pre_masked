
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmdval_t ;
typedef int pmd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(pmd_t *VAR_0, bool VAR_1, pmdval_t *VAR_2)
{
 pmd_t VAR_3;
 pmdval_t VAR_4 = FUNC_2(*VAR_0);
 if (VAR_1) {
  *VAR_2 = VAR_4;
  VAR_3 = FUNC_1(*VAR_0);
 } else {

  VAR_3 = FUNC_0(*VAR_2);
 }
 FUNC_3(VAR_0, VAR_3);
}
