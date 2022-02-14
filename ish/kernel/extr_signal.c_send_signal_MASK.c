
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {TYPE_1__* group; struct sighand* sighand; scalar_t__ zombie; } ;
struct siginfo_ {int dummy; } ;
struct sighand {int lock; } ;
struct TYPE_2__ {int stopped; int lock; int stopped_cond; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct task*,int,struct siginfo_) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sighand*,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct task *VAR_3, int VAR_4, struct siginfo_ VAR_5) {

    if (VAR_4 == 0)
        return;
    if (VAR_3->zombie)
        return;

    struct sighand *VAR_6 = VAR_3->sighand;
    FUNC_1(&VAR_6->lock);
    if (FUNC_3(VAR_6, VAR_4) != VAR_2) {
        FUNC_0(VAR_3, VAR_4, VAR_5);
    }
    FUNC_4(&VAR_6->lock);

    if (VAR_4 == VAR_0 || VAR_4 == VAR_1) {
        FUNC_1(&VAR_3->group->lock);
        VAR_3->group->stopped = 0;
        FUNC_2(&VAR_3->group->stopped_cond);
        FUNC_4(&VAR_3->group->lock);
    }
}
