
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sighand {int lock; } ;
typedef scalar_t__ sigset_t_ ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;
struct TYPE_2__ {struct sighand* sighand; int blocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,long long,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

dword_t FUNC_6(dword_t VAR_6, addr_t VAR_7, addr_t VAR_8, dword_t VAR_9) {
    if (VAR_9 != sizeof(sigset_t_))
        return VAR_4;

    sigset_t_ VAR_10;
    if (VAR_7 != 0)
        if (FUNC_4(VAR_7, VAR_10))
            return VAR_3;
    FUNC_0("rt_sigprocmask(%s, %#llx, %#x, %d)",
            VAR_6 == VAR_0 ? "SIG_BLOCK" :
            VAR_6 == VAR_2 ? "SIG_UNBLOCK" :
            VAR_6 == VAR_1 ? "SIG_SETMASK" : "??",
            VAR_7 != 0 ? (long long) VAR_10 : -1, VAR_8, VAR_9);

    if (VAR_8 != 0)
        if (FUNC_5(VAR_8, VAR_5->blocked))
            return VAR_3;
    if (VAR_7 != 0) {
        struct sighand *VAR_11 = VAR_5->sighand;
        FUNC_2(&VAR_11->lock);
        int VAR_12 = FUNC_1(VAR_6, VAR_10);
        FUNC_3(&VAR_11->lock);
        if (VAR_12 < 0)
            return VAR_12;
    }
    return 0;
}
