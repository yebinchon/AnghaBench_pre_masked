
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int mm; int guest_to_host; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int * FUNC_0 (int ,unsigned long,int **) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,unsigned long,int *,int ) ;
 scalar_t__ FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct gmap *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 spinlock_t *VAR_5;
 pte_t *VAR_6;


 VAR_4 = (unsigned long) FUNC_4(&VAR_2->guest_to_host,
         VAR_3 >> VAR_1);
 if (VAR_4) {
  VAR_4 |= VAR_3 & ~VAR_0;

  VAR_6 = FUNC_0(VAR_2->mm, VAR_4, &VAR_5);
  if (FUNC_1(VAR_6))
   FUNC_3(VAR_2->mm, VAR_4, VAR_6, 0);
  FUNC_2(VAR_6, VAR_5);
 }
}
