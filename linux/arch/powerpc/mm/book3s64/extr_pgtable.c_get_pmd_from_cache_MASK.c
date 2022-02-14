
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* pmd_frag; } ;
struct mm_struct {int page_table_lock; TYPE_1__ context; } ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static pmd_t *FUNC_2(struct mm_struct *VAR_3)
{
 void *VAR_4, *VAR_5;

 if (VAR_1 == 1)
  return ((void*)0);

 FUNC_0(&VAR_3->page_table_lock);
 VAR_5 = VAR_3->context.pmd_frag;
 if (VAR_5) {
  VAR_4 = VAR_5 + VAR_2;



  if (((unsigned long)VAR_4 & ~VAR_0) == 0)
   VAR_4 = ((void*)0);
  VAR_3->context.pmd_frag = VAR_4;
 }
 FUNC_1(&VAR_3->page_table_lock);
 return (pmd_t *)VAR_5;
}
