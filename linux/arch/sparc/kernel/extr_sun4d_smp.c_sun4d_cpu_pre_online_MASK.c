
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * active_mm; } ;
struct TYPE_5__ {int cpu; } ;
struct TYPE_4__ {int (* tlb_all ) () ;int (* cache_all ) () ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int * VAR_1 ;
 int* VAR_2 ;
 int FUNC_3 (int,int *) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__** VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_8 ;
 int FUNC_13 (unsigned long*,int) ;

void FUNC_14(void *VAR_9)
{
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4();






 FUNC_13((unsigned long *)&VAR_1[VAR_11], 1);
 VAR_6->cache_all();
 VAR_6->tlb_all();

 while ((unsigned long)VAR_4[VAR_11] < VAR_0)
  FUNC_0();

 while (VAR_4[VAR_11]->cpu != VAR_11)
  FUNC_0();


 __asm__ __volatile__("ld [%0], %%g6\n\t"
        : : "r" (&VAR_4[VAR_11])
        : "memory" );

 VAR_2[VAR_11] = 0x9;
 FUNC_6(VAR_11);


 FUNC_5(&VAR_5);
 VAR_3->active_mm = &VAR_5;

 VAR_6->cache_all();
 VAR_6->tlb_all();

 while (!FUNC_3(VAR_11, &VAR_7))
  FUNC_0();

 FUNC_7(&VAR_8, VAR_10);
 FUNC_2(FUNC_1() & ~0x4000);
 FUNC_8(&VAR_8, VAR_10);
}
