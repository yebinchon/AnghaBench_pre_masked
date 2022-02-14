
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tgroup {scalar_t__ pgid; scalar_t__ sid; int pgroup; int session; TYPE_1__* leader; } ;
struct task {int pid; struct tgroup* group; } ;
struct pid {int pgroup; int session; } ;
typedef scalar_t__ pid_t_ ;
struct TYPE_2__ {scalar_t__ pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct pid* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct task*) ;
 int FUNC_5 (int *) ;

pid_t_ FUNC_6(struct task *VAR_2) {
    FUNC_2(&VAR_1);
    struct tgroup *VAR_3 = VAR_2->group;
    pid_t_ VAR_4 = VAR_3->leader->pid;
    if (VAR_3->pgid == VAR_4 || VAR_3->sid == VAR_4) {
        FUNC_5(&VAR_1);
        return VAR_0;
    }

    FUNC_4(VAR_2);
    struct pid *VAR_5 = FUNC_3(VAR_2->pid);
    FUNC_0(&VAR_5->session, &VAR_3->session);
    VAR_3->sid = VAR_4;

    FUNC_1(&VAR_3->pgroup);
    FUNC_0(&VAR_5->pgroup, &VAR_3->pgroup);
    VAR_3->pgid = VAR_4;

    FUNC_5(&VAR_1);
    return VAR_4;
}
