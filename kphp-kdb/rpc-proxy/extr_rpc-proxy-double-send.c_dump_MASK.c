
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; int utime; int port; int ip; } ;
struct double_receive {int qid; TYPE_1__ PID; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,struct double_receive*) ;

void FUNC_1 (struct double_receive *VAR_0) {
  FUNC_0 (2, "DUMP: PID: %u.%d.%d.%d, qid = %lld, %p\n", VAR_0->PID.ip, VAR_0->PID.port, VAR_0->PID.utime, VAR_0->PID.pid, VAR_0->qid, VAR_0);
}
