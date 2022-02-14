
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pid; int ppid; char* comm; int updated; char state; int show; double percent_cpu; double percent_mem; char* user; int nlwp; int starttime_ctime; int m_size; int m_resident; int minflt; int majflt; int starttime_show; scalar_t__ nice; scalar_t__ priority; scalar_t__ processor; scalar_t__ flags; scalar_t__ st_uid; scalar_t__ tpgid; scalar_t__ tty_nr; scalar_t__ session; scalar_t__ pgrp; scalar_t__ basenameOffset; scalar_t__ tgid; scalar_t__ time; } ;
typedef int ProcessList ;
typedef TYPE_1__ Process ;


 TYPE_1__* FUNC_0 (int *,int,int*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

void FUNC_2(ProcessList* VAR_1) {
 bool VAR_2 = 1;
    Process *VAR_3;

    VAR_3 = FUNC_0(VAR_1, 1, &VAR_2, VAR_0);


    VAR_3->time = VAR_3->time + 10;
    VAR_3->pid = 1;
    VAR_3->ppid = 1;
    VAR_3->tgid = 0;
    VAR_3->comm = "<unsupported architecture>";
    VAR_3->basenameOffset = 0;
    VAR_3->updated = 1;

    VAR_3->state = 'R';
    VAR_3->show = 1;
    VAR_3->pgrp = 0;
    VAR_3->session = 0;
    VAR_3->tty_nr = 0;
    VAR_3->tpgid = 0;
    VAR_3->st_uid = 0;
    VAR_3->flags = 0;
    VAR_3->processor = 0;

    VAR_3->percent_cpu = 2.5;
    VAR_3->percent_mem = 2.5;
    VAR_3->user = "nobody";

    VAR_3->priority = 0;
    VAR_3->nice = 0;
    VAR_3->nlwp = 1;
    FUNC_1(VAR_3->starttime_show, "Jun 01 ", sizeof(VAR_3->starttime_show));
    VAR_3->starttime_ctime = 1433116800;

    VAR_3->m_size = 100;
    VAR_3->m_resident = 100;

    VAR_3->minflt = 20;
    VAR_3->majflt = 20;
}
