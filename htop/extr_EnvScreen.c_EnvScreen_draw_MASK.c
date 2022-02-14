
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* process; } ;
struct TYPE_5__ {int comm; int pid; } ;
typedef TYPE_2__ InfoScreen ;


 int FUNC_0 (TYPE_2__*,char*,int ,int ) ;

void FUNC_1(InfoScreen* VAR_0) {
   FUNC_0(VAR_0, "Environment of process %d - %s", VAR_0->process->pid, VAR_0->process->comm);
}
