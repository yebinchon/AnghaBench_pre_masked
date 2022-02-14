
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int owner; int m; } ;
struct task {int pending; int blocked; int waiting; TYPE_1__* sighand; TYPE_2__ waiting_cond_lock; TYPE_2__* waiting_lock; int * waiting_cond; int thread; int queue; } ;
struct siginfo_ {int sig; } ;
struct sigqueue {int queue; struct siginfo_ info; } ;
struct TYPE_4__ {TYPE_2__ lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct task* VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 struct sigqueue* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int*,int) ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_12(struct task *VAR_3, int VAR_4, struct siginfo_ VAR_5) {
    if (FUNC_10(VAR_3->pending, VAR_4))
        return;

    FUNC_9(&VAR_3->pending, VAR_4);
    struct sigqueue *VAR_6 = FUNC_2(sizeof(struct sigqueue));
    VAR_6->info = VAR_5;
    VAR_6->info.sig = VAR_4;
    FUNC_0(&VAR_3->queue, &VAR_6->queue);

    if (FUNC_10(VAR_3->blocked & ~VAR_3->waiting, VAR_4) && FUNC_8(VAR_4))
        return;

    if (VAR_3 != VAR_2) {
        FUNC_5(VAR_3->thread, VAR_1);




        FUNC_11(&VAR_3->sighand->lock);
retry:
        FUNC_1(&VAR_3->waiting_cond_lock);
        if (VAR_3->waiting_cond != ((void*)0)) {
            bool VAR_7 = 0;
            if (FUNC_6(&VAR_3->waiting_lock->m) == VAR_0) {
                if (FUNC_4(VAR_3->waiting_lock->owner, FUNC_7()))
                    VAR_7 = 1;
                if (!VAR_7) {
                    FUNC_11(&VAR_3->waiting_cond_lock);
                    goto retry;
                }
            }
            FUNC_3(VAR_3->waiting_cond);
            if (!VAR_7)
                FUNC_11(VAR_3->waiting_lock);
        }
        FUNC_11(&VAR_3->waiting_cond_lock);
        FUNC_1(&VAR_3->sighand->lock);
    }
}
