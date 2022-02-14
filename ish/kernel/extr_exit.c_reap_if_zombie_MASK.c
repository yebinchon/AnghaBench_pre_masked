
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rusage_ {int dummy; } ;
struct task {TYPE_2__* group; struct rusage_ exit_code; int zombie; } ;
typedef struct rusage_ dword_t ;
typedef scalar_t__ addr_t ;
struct TYPE_6__ {TYPE_1__* group; } ;
struct TYPE_5__ {int child_exit; int lock; struct rusage_ rusage; struct rusage_ group_exit_code; scalar_t__ doing_group_exit; } ;
struct TYPE_4__ {int lock; int children_rusage; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct rusage_*) ;
 int FUNC_4 (struct task*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,struct rusage_) ;

__attribute__((used)) static bool FUNC_7(struct task *VAR_2, addr_t VAR_3, addr_t VAR_4) {
    if (!VAR_2->zombie)
        return 0;
    FUNC_2(&VAR_2->group->lock);

    dword_t VAR_5 = VAR_2->exit_code;
    if (VAR_2->group->doing_group_exit)
        VAR_5 = VAR_2->group->group_exit_code;
    if (VAR_3 != 0)
        if (FUNC_6(VAR_3, VAR_5))
            return VAR_0;

    struct rusage_ VAR_6 = VAR_2->group->rusage;
    FUNC_2(&VAR_1->group->lock);
    FUNC_3(&VAR_1->group->children_rusage, &VAR_6);
    FUNC_5(&VAR_1->group->lock);
    if (VAR_4 != 0)
        if (FUNC_6(VAR_4, VAR_6))
            return VAR_0;

    FUNC_5(&VAR_2->group->lock);
    FUNC_0(&VAR_2->group->child_exit);
    FUNC_1(VAR_2->group);
    FUNC_4(VAR_2);
    return 1;
}
