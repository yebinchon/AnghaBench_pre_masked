
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (unsigned long,size_t*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct mm_struct *VAR_0, unsigned long VAR_1,
     pte_t *VAR_2, pte_t VAR_3, unsigned long VAR_4)
{
 int VAR_5, VAR_6;
 size_t VAR_7;

 VAR_6 = FUNC_0(VAR_4, &VAR_7);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++, VAR_2++)
  FUNC_1(VAR_2, VAR_3);
}
