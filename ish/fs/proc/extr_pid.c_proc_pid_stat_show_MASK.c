
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef long uint32_t ;
struct tty {int fg_group; int num; TYPE_2__* driver; } ;
struct task {int general_lock; TYPE_6__* group; TYPE_5__* sighand; int exit_signal; scalar_t__ blocked; scalar_t__ pending; TYPE_3__* mm; TYPE_1__* parent; scalar_t__ zombie; int comm; int pid; } ;
struct proc_entry {int dummy; } ;
struct proc_data {int dummy; } ;
struct TYPE_12__ {int lock; int threads; struct tty* tty; int sid; int pgid; scalar_t__ stopped; } ;
struct TYPE_11__ {int lock; TYPE_4__* action; } ;
struct TYPE_10__ {scalar_t__ handler; } ;
struct TYPE_9__ {int stack_start; } ;
struct TYPE_8__ {int major; } ;
struct TYPE_7__ {int pid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct task* FUNC_3 (struct proc_entry*) ;
 int FUNC_4 (struct proc_data*,char*,...) ;
 int FUNC_5 (struct task*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct proc_entry *VAR_3, struct proc_data *VAR_4) {
    struct task *VAR_5 = FUNC_3(VAR_3);
    if (VAR_5 == ((void*)0))
        return VAR_2;
    FUNC_2(&VAR_5->general_lock);
    FUNC_2(&VAR_5->group->lock);
    FUNC_2(&VAR_5->sighand->lock);

    FUNC_4(VAR_4, "%d ", VAR_5->pid);
    FUNC_4(VAR_4, "(%.16s) ", VAR_5->comm);
    FUNC_4(VAR_4, "%c ",
            VAR_5->zombie ? 'Z' :
            VAR_5->group->stopped ? 'T' :
            'R');
    FUNC_4(VAR_4, "%d ", VAR_5->parent ? VAR_5->parent->pid : 0);
    FUNC_4(VAR_4, "%d ", VAR_5->group->pgid);
    FUNC_4(VAR_4, "%d ", VAR_5->group->sid);
    struct tty *VAR_6 = VAR_5->group->tty;
    FUNC_4(VAR_4, "%d ", VAR_6 ? FUNC_0(VAR_6->driver->major, VAR_6->num) : 0);
    FUNC_4(VAR_4, "%d ", VAR_6 ? VAR_6->fg_group : 0);
    FUNC_4(VAR_4, "%u ", 0);


    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%lu ", 0l);



    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%ld ", 0l);
    FUNC_4(VAR_4, "%ld ", 0l);

    FUNC_4(VAR_4, "%ld ", 20l);
    FUNC_4(VAR_4, "%ld ", 0l);
    FUNC_4(VAR_4, "%ld ", FUNC_1(&VAR_5->group->threads));
    FUNC_4(VAR_4, "%ld ", 0l);
    FUNC_4(VAR_4, "%lld ", 0ll);

    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%ld ", 0l);
    FUNC_4(VAR_4, "%lu ", 0l);


    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%lu ", VAR_5->mm->stack_start);
    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%lu ", 0l);

    FUNC_4(VAR_4, "%lu ", (unsigned long) VAR_5->pending & 0xffffffff);
    FUNC_4(VAR_4, "%lu ", (unsigned long) VAR_5->blocked & 0xffffffff);
    uint32_t VAR_7 = 0;
    uint32_t VAR_8 = 0;
    for (int VAR_9 = 0; VAR_9 < 32; VAR_9++) {
        if (VAR_5->sighand->action[VAR_9].handler == VAR_1)
            VAR_7 |= 1l << VAR_9;
        else if (VAR_5->sighand->action[VAR_9].handler != VAR_0)
            VAR_8 |= 1l << VAR_9;
    }
    FUNC_4(VAR_4, "%lu ", (unsigned long) VAR_7);
    FUNC_4(VAR_4, "%lu ", (unsigned long) VAR_8);

    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%lu ", 0l);
    FUNC_4(VAR_4, "%d", VAR_5->exit_signal);

    FUNC_4(VAR_4, "\n");

    FUNC_6(&VAR_5->sighand->lock);
    FUNC_6(&VAR_5->group->lock);
    FUNC_6(&VAR_5->general_lock);
    FUNC_5(VAR_5);
    return 0;
}
