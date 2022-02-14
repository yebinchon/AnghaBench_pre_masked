
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pteval_t ;
typedef int pte_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(pte_t *VAR_1, bool VAR_2, pteval_t *VAR_3)
{
 pteval_t VAR_4 = FUNC_2(*VAR_1);
 if (VAR_2) {
  *VAR_3 = VAR_4;

  FUNC_1(&VAR_0, 0, VAR_1);
 } else {

  FUNC_3(VAR_1, FUNC_0(*VAR_3));
 }
}
