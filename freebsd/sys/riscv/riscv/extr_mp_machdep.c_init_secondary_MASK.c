
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t u_int ;
struct pcpu {TYPE_1__* pc_idlethread; int pc_curpcb; TYPE_1__* pc_curthread; } ;
struct TYPE_4__ {int p_vmspace; } ;
struct TYPE_3__ {int td_pcb; } ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pcpu* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (int *,int) ;
 size_t VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 TYPE_2__ VAR_9 ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (int ) ;

void
FUNC_14(uint64_t VAR_14)
{
 struct pcpu *VAR_15;
 u_int VAR_16;


 VAR_16 = VAR_14;
 if (VAR_16 < VAR_5)
  VAR_16 += VAR_7 + 1;
 VAR_16 -= VAR_5;


 VAR_15 = &VAR_2[VAR_16];
 __asm __volatile("mv tp, %0" :: "r"(VAR_15));


 FUNC_5(VAR_10, VAR_1);
 FUNC_5(VAR_11, VAR_1);


 while (!VAR_4)
  __asm __volatile("wfi");


 FUNC_0(FUNC_1(VAR_6) != ((void*)0), ("no idle thread"));
 VAR_15->pc_curthread = VAR_15->pc_idlethread;
 VAR_15->pc_curpcb = VAR_15->pc_idlethread->td_pcb;






 FUNC_6();


 FUNC_11();



 FUNC_4();



 FUNC_5(VAR_10, VAR_0);


 FUNC_10(FUNC_13(VAR_9));

 FUNC_7(&VAR_3);

 FUNC_2(&VAR_12, 1);

 if (VAR_12 == VAR_8) {

  FUNC_3(&VAR_13, 1);
 }

 FUNC_8(&VAR_3);


 FUNC_12(((void*)0));

 FUNC_9("scheduler returned us to init_secondary");

}
