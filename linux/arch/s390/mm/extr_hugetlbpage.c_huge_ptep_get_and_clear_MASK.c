
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mm_struct*,unsigned long,int *,int ) ;

pte_t FUNC_6(struct mm_struct *VAR_4,
         unsigned long VAR_5, pte_t *VAR_6)
{
 pte_t VAR_7 = FUNC_2(VAR_6);
 pmd_t *VAR_8 = (pmd_t *) VAR_6;
 pud_t *VAR_9 = (pud_t *) VAR_6;

 if ((FUNC_4(*VAR_6) & VAR_1) == VAR_2)
  FUNC_5(VAR_4, VAR_5, VAR_9, FUNC_1(VAR_0));
 else
  FUNC_3(VAR_4, VAR_5, VAR_8, FUNC_0(VAR_3));
 return VAR_7;
}
