
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (unsigned long,size_t*) ;
 int FUNC_1 (struct mm_struct*,unsigned long,int *) ;

void FUNC_2(struct mm_struct *VAR_0, unsigned long VAR_1,
      pte_t *VAR_2, unsigned long VAR_3)
{
 int VAR_4, VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_0(VAR_3, &VAR_6);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_1 += VAR_6, VAR_2++)
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
