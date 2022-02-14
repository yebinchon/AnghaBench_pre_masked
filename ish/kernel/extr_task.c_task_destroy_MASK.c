
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {int pid; int siblings; } ;
struct TYPE_2__ {int * task; } ;


 int FUNC_0 (struct task*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;

void FUNC_3(struct task *VAR_0) {
    FUNC_1(&VAR_0->siblings);
    FUNC_2(VAR_0->pid)->task = ((void*)0);
    FUNC_0(VAR_0);
}
