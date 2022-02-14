
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
typedef scalar_t__ sigset_t_ ;
typedef scalar_t__ int_t ;
typedef int addr_t ;
struct TYPE_4__ {long long pid; TYPE_1__* sighand; int pause; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (char*,long long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int *,int *) ;

int_t FUNC_6(addr_t VAR_4, uint_t VAR_5) {
    if (VAR_5 != sizeof(sigset_t_))
        return VAR_2;
    sigset_t_ VAR_6;
    if (FUNC_4(VAR_4, VAR_6))
        return VAR_0;
    FUNC_0("sigsuspend(0x%llx) = ...\n", (long long) VAR_6);

    FUNC_1(&VAR_3->sighand->lock);
    FUNC_2(VAR_6);
    while (FUNC_5(&VAR_3->pause, &VAR_3->sighand->lock, ((void*)0)) != VAR_1)
        continue;
    FUNC_3(&VAR_3->sighand->lock);
    FUNC_0("%d done sigsuspend", VAR_3->pid);
    return VAR_1;
}
