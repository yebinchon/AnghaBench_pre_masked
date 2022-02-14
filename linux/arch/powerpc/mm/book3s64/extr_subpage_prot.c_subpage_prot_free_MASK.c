
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct subpage_prot_table {unsigned long maxaddr; int *** protptrs; int ** low_prot; } ;
struct mm_struct {int context; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct subpage_prot_table*) ;
 struct subpage_prot_table* FUNC_2 (int *) ;

void FUNC_3(struct mm_struct *VAR_3)
{
 struct subpage_prot_table *VAR_4 = FUNC_2(&VAR_3->context);
 unsigned long VAR_5, VAR_6, VAR_7;
 u32 **VAR_8;

 if (!VAR_4)
  return;

 for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
  if (VAR_4->low_prot[VAR_5]) {
   FUNC_0((unsigned long)VAR_4->low_prot[VAR_5]);
   VAR_4->low_prot[VAR_5] = ((void*)0);
  }
 }
 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < (VAR_2 >> 43); ++VAR_5) {
  VAR_8 = VAR_4->protptrs[VAR_5];
  if (!VAR_8)
   continue;
  VAR_4->protptrs[VAR_5] = ((void*)0);
  for (VAR_6 = 0; VAR_6 < VAR_1 && VAR_7 < VAR_4->maxaddr;
       ++VAR_6, VAR_7 += VAR_0)
   if (VAR_8[VAR_6])
    FUNC_0((unsigned long)VAR_8[VAR_6]);
  FUNC_0((unsigned long)VAR_8);
 }
 VAR_4->maxaddr = 0;
 FUNC_1(VAR_4);
}
