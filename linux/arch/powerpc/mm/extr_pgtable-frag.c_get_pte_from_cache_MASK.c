
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int page_table_lock; int context; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static pte_t *FUNC_4(struct mm_struct *VAR_3)
{
 void *VAR_4, *VAR_5;

 if (VAR_1 == 1)
  return ((void*)0);

 FUNC_2(&VAR_3->page_table_lock);
 VAR_5 = FUNC_0(&VAR_3->context);
 if (VAR_5) {
  VAR_4 = VAR_5 + VAR_2;



  if (((unsigned long)VAR_4 & ~VAR_0) == 0)
   VAR_4 = ((void*)0);
  FUNC_1(&VAR_3->context, VAR_4);
 }
 FUNC_3(&VAR_3->page_table_lock);
 return (pte_t *)VAR_5;
}
