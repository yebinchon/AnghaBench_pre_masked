
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_tlbflush_unmap_batch {int cpumask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_2 ;
 int FUNC_9 () ;

void FUNC_10(struct arch_tlbflush_unmap_batch *VAR_3)
{
 int VAR_4 = FUNC_5();

 if (FUNC_2(VAR_4, &VAR_3->cpumask)) {
  FUNC_8();
  FUNC_6();
  FUNC_3(&VAR_1, VAR_0);
  FUNC_7();
 }

 if (FUNC_0(&VAR_3->cpumask, VAR_4) < VAR_2)
  FUNC_4(&VAR_3->cpumask, &VAR_1);

 FUNC_1(&VAR_3->cpumask);

 FUNC_9();
}
