
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfork_info {int done; int cond; int lock; } ;
struct TYPE_2__ {scalar_t__ eax; } ;
struct task {int pid; struct vfork_info* vfork; TYPE_1__ cpu; } ;
typedef int pid_t ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task*,int,int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct task* FUNC_7 (int ) ;
 int FUNC_8 (struct task*) ;
 int FUNC_9 (struct task*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *) ;

dword_t FUNC_12(dword_t VAR_9, addr_t VAR_10, addr_t VAR_11, addr_t VAR_12, addr_t VAR_13) {
    FUNC_1("clone(0x%x, 0x%x, 0x%x, 0x%x, 0x%x)", VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
    if (VAR_9 & ~VAR_4 & ~VAR_5) {
        FUNC_0("unimplemented clone flags 0x%x", VAR_9 & ~VAR_4 & ~VAR_5);
        return VAR_6;
    }
    if (VAR_9 & VAR_0 && !(VAR_9 & VAR_3))
        return VAR_6;
    if (VAR_9 & VAR_1 && !(VAR_9 & VAR_0))
        return VAR_6;

    struct task *VAR_14 = FUNC_7(VAR_8);
    if (VAR_14 == ((void*)0))
        return VAR_7;
    int VAR_15 = FUNC_4(VAR_14, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
    if (VAR_15 < 0) {
        FUNC_8(VAR_14);
        return VAR_15;
    }
    VAR_14->cpu.eax = 0;

    struct vfork_info VAR_16;
    if (VAR_9 & VAR_2) {
        FUNC_6(&VAR_16.lock);
        FUNC_3(&VAR_16.cond);
        VAR_16.done = 0;
        VAR_14->vfork = &VAR_16;
    }


    pid_t VAR_17 = VAR_14->pid;
    FUNC_9(VAR_14);

    if (VAR_9 & VAR_2) {
        FUNC_5(&VAR_16.lock);
        while (!VAR_16.done)

            FUNC_11(&VAR_16.cond, &VAR_16.lock, ((void*)0));
        FUNC_10(&VAR_16.lock);
        VAR_14->vfork = ((void*)0);
        FUNC_2(&VAR_16.cond);
    }
    return VAR_17;
}
