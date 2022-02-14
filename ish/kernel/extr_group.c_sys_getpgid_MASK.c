
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t_ ;
struct TYPE_4__ {scalar_t__ pid; TYPE_1__* group; } ;
struct TYPE_3__ {scalar_t__ pgid; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

pid_t_ FUNC_3(pid_t_ VAR_3) {
    FUNC_0("getpgid(%d)", VAR_3);
    if (VAR_3 != 0 && VAR_3 != VAR_1->pid)
        return VAR_0;
    FUNC_1(&VAR_2);
    pid_t_ VAR_4 = VAR_1->group->pgid;
    FUNC_2(&VAR_2);
    return VAR_4;
}
