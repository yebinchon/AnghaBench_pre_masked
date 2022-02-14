
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mm_struct*,int ,int *) ;
 int * FUNC_1 (struct mm_struct*,int ) ;

void FUNC_2(struct mm_struct *VAR_2)
{
 pte_t *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_2, VAR_0, VAR_3);

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_2, VAR_1, VAR_3);
}
