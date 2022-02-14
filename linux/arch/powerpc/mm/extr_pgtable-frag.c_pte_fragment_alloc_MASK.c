
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int * FUNC_0 (struct mm_struct*,int) ;
 int * FUNC_1 (struct mm_struct*) ;

pte_t *FUNC_2(struct mm_struct *VAR_0, int VAR_1)
{
 pte_t *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}
