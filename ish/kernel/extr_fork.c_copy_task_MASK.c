
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct tgroup {int lock; int threads; struct task* leader; } ;
struct TYPE_13__ {scalar_t__ esp; } ;
struct task {int exit_signal; struct mm* mm; TYPE_8__* files; TYPE_5__* fs; TYPE_2__* sighand; scalar_t__ clear_tid; int pid; int group_links; struct tgroup* group; int tgid; TYPE_1__ cpu; int * vfork; } ;
struct mm {int dummy; } ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;
struct TYPE_16__ {int refcount; } ;
struct TYPE_15__ {int refcount; } ;
struct TYPE_14__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_8__* FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 TYPE_5__* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mm*) ;
 int FUNC_9 (struct mm*) ;
 int FUNC_10 (struct mm*) ;
 int VAR_12 ;
 TYPE_2__* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct task*,int ) ;
 int FUNC_14 (struct task*,scalar_t__) ;
 struct tgroup* FUNC_15 (struct tgroup*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (scalar_t__,int ) ;
 scalar_t__ FUNC_18 (struct task*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_19(struct task *VAR_13, dword_t VAR_14, addr_t VAR_15, addr_t VAR_16, addr_t VAR_17, addr_t VAR_18) {
    VAR_13->vfork = ((void*)0);
    if (VAR_15 != 0)
        VAR_13->cpu.esp = VAR_15;

    int VAR_19;
    struct mm *VAR_20 = VAR_13->mm;
    if (VAR_14 & VAR_8) {
        FUNC_10(VAR_20);
    } else {
        FUNC_13(VAR_13, FUNC_8(VAR_20));
    }

    if (VAR_14 & VAR_2) {
        VAR_13->files->refcount++;
    } else {
        VAR_13->files = FUNC_2(VAR_13->files);
        if (FUNC_0(VAR_13->files)) {
            VAR_19 = FUNC_1(VAR_13->files);
            goto fail_free_mem;
        }
    }

    VAR_19 = VAR_11;
    if (VAR_14 & VAR_3) {
        VAR_13->fs->refcount++;
    } else {
        VAR_13->fs = FUNC_4(VAR_13->fs);
        if (VAR_13->fs == ((void*)0))
            goto fail_free_files;
    }

    if (VAR_14 & VAR_6) {
        VAR_13->sighand->refcount++;
    } else {
        VAR_13->sighand = FUNC_11(VAR_13->sighand);
        if (VAR_13->sighand == ((void*)0))
            goto fail_free_fs;
    }

    struct tgroup *VAR_21 = VAR_13->group;
    FUNC_7(&VAR_12);
    FUNC_7(&VAR_21->lock);
    if (!(VAR_14 & VAR_7)) {
        VAR_13->group = FUNC_15(VAR_21);
        VAR_13->group->leader = VAR_13;
        VAR_13->tgid = VAR_13->pid;
    }
    FUNC_6(&VAR_13->group->threads, &VAR_13->group_links);
    FUNC_16(&VAR_21->lock);
    FUNC_16(&VAR_12);

    if (VAR_14 & VAR_5) {
        VAR_19 = FUNC_14(VAR_13, VAR_17);
        if (VAR_19 < 0)
            goto fail_free_sighand;
    }

    VAR_19 = VAR_10;
    if (VAR_14 & VAR_1)
        if (FUNC_18(VAR_13, VAR_18, VAR_13->pid))
            goto fail_free_sighand;
    if (VAR_14 & VAR_4)
        if (FUNC_17(VAR_16, VAR_13->pid))
            goto fail_free_sighand;
    if (VAR_14 & VAR_0)
        VAR_13->clear_tid = VAR_18;
    VAR_13->exit_signal = VAR_14 & VAR_9;


    return 0;

fail_free_sighand:
    FUNC_12(VAR_13->sighand);
fail_free_fs:
    FUNC_5(VAR_13->fs);
fail_free_files:
    FUNC_3(VAR_13->files);
fail_free_mem:
    FUNC_9(VAR_13->mm);
    return VAR_19;
}
