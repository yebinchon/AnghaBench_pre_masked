
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task {scalar_t__ tgid; } ;
struct TYPE_4__ {int uid; int pid; } ;
struct siginfo_ {TYPE_1__ kill; int code; } ;
typedef scalar_t__ pid_t_ ;
typedef int dword_t ;
struct TYPE_6__ {TYPE_2__* group; int uid; int pid; } ;
struct TYPE_5__ {scalar_t__ pgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (int *) ;
 struct task* FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int ,struct siginfo_) ;
 int FUNC_4 (struct task*,int ,struct siginfo_) ;
 int FUNC_5 (int *) ;

int FUNC_6(pid_t_ VAR_6, dword_t VAR_7, pid_t_ VAR_8) {
    FUNC_0("kill(%d, %d)", VAR_6, VAR_7);
    if (VAR_7 >= VAR_0)
        return VAR_2;
    struct siginfo_ VAR_9 = {
        .code = VAR_1,
        .kill.pid = VAR_4->pid,
        .kill.uid = VAR_4->uid,
    };

    if (VAR_6 == 0)
        VAR_6 = -VAR_4->group->pgid;
    if (VAR_6 < 0)
        return FUNC_3(-VAR_6, VAR_7, VAR_9);

    FUNC_1(&VAR_5);
    struct task *VAR_10 = FUNC_2(VAR_6);
    if (VAR_10 == ((void*)0)) {
        FUNC_5(&VAR_5);
        return VAR_3;
    }


    if (VAR_8 != 0 && VAR_10->tgid != VAR_8) {
        FUNC_5(&VAR_5);
        return VAR_3;
    }

    FUNC_4(VAR_10, VAR_7, VAR_9);
    FUNC_5(&VAR_5);
    return 0;
}
