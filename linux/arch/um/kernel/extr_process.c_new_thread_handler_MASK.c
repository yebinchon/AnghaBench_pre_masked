
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int regs; } ;
struct TYPE_8__ {int (* proc ) (void*) ;void* arg; } ;
struct TYPE_9__ {TYPE_1__ thread; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_4__ regs; TYPE_3__ request; int * prev_sched; } ;
struct TYPE_14__ {TYPE_5__ thread; } ;
struct TYPE_13__ {int aux_fp_regs; } ;


 TYPE_7__* VAR_0 ;
 TYPE_6__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(void)
{
 int (*VAR_1)(void *), VAR_2;
 void *VAR_3;

 if (VAR_0->thread.prev_sched != ((void*)0))
  FUNC_1(VAR_0->thread.prev_sched);
 VAR_0->thread.prev_sched = ((void*)0);

 VAR_1 = VAR_0->thread.request.u.thread.proc;
 VAR_3 = VAR_0->thread.request.u.thread.arg;




 VAR_2 = VAR_1(VAR_3);
 FUNC_2(&VAR_0->thread.regs.regs, FUNC_0()->aux_fp_regs);
}
