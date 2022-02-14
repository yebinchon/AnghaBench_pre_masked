
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int mm; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (struct gmap*,int *) ;
 int * FUNC_2 (struct gmap*,unsigned long) ;
 scalar_t__ FUNC_3 (struct gmap*,int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ,int *,unsigned long,int **) ;
 scalar_t__ FUNC_6 (int ,unsigned long,int *) ;
 int FUNC_7 (int,unsigned long*) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct gmap *VAR_2, unsigned long VAR_3[4],
        unsigned long VAR_4, unsigned long VAR_5)
{
 int VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8;
 spinlock_t *VAR_9;

 VAR_7 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_7)
  return;

 if (FUNC_4(*VAR_7)) {
  if (FUNC_3(VAR_2, VAR_7, VAR_4))
   FUNC_0(VAR_3, VAR_1);
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_5 += VAR_0) {
   VAR_8 = FUNC_5(VAR_2->mm, VAR_7, VAR_5, &VAR_9);
   if (!VAR_8)
    continue;
   if (FUNC_6(VAR_2->mm, VAR_5, VAR_8))
    FUNC_7(VAR_6, VAR_3);
   FUNC_8(VAR_9);
  }
 }
 FUNC_1(VAR_2, VAR_7);
}
