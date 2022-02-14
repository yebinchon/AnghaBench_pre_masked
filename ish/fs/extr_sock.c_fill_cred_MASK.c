
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred_ {int gid; int uid; int pid; } ;
struct TYPE_2__ {int egid; int euid; int pid; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ucred_ *VAR_1) {
    VAR_1->pid = VAR_0->pid;
    VAR_1->uid = VAR_0->euid;
    VAR_1->gid = VAR_0->egid;
}
