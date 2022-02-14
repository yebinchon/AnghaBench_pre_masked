
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int pgd; } ;
typedef int pte_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

pte_t FUNC_5(struct mm_struct *VAR_0, unsigned long VAR_1,
         pte_t *VAR_2)
{
 unsigned long VAR_3;
 pte_t VAR_4;

 FUNC_3(FUNC_2((VAR_0)->pgd), VAR_3);
 VAR_4 = *VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_2, FUNC_0(0));
 FUNC_4(FUNC_2((VAR_0)->pgd), VAR_3);

 return VAR_4;
}
