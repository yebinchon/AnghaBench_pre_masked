
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t* tlb_lock; int tid_next; } ;
struct pcpu {TYPE_1__ pc_booke; } ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 uintptr_t* VAR_3 ;

void
FUNC_0(struct pcpu *VAR_4, int VAR_5, size_t VAR_6)
{

 VAR_4->pc_booke.tid_next = VAR_1;
}
