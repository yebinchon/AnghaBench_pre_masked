
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int inc; TYPE_1__* process; } ;
struct TYPE_4__ {int comm; int pid; } ;
typedef TYPE_2__ InfoScreen ;


 int VAR_0 ;
 int * VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char,int ) ;
 int FUNC_3 (int ,int ,char*,int ,int ) ;

void FUNC_4(InfoScreen* VAR_4) {
   FUNC_1(VAR_1[VAR_3]);
   FUNC_2(0, 0, ' ', VAR_0);
   FUNC_3(0, 0, "Trace of process %d - %s", VAR_4->process->pid, VAR_4->process->comm);
   FUNC_1(VAR_1[VAR_2]);
   FUNC_0(VAR_4->inc);
}
