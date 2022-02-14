
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct futex {int cond; } ;
typedef scalar_t__ dword_t ;
typedef int addr_t ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct futex* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct futex*,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_3 (struct futex*) ;
 int FUNC_4 (int *,int *,struct timespec*) ;

int FUNC_5(addr_t VAR_4, dword_t VAR_5, struct timespec *VAR_6) {
    struct futex *VAR_7 = FUNC_1(VAR_4);
    int VAR_8 = 0;
    dword_t VAR_9;
    if (FUNC_2(VAR_7, &VAR_9))
        VAR_8 = VAR_1;
    else if (VAR_9 != VAR_5)
        VAR_8 = VAR_0;
    else
        VAR_8 = FUNC_4(&VAR_7->cond, &VAR_3, VAR_6);
    FUNC_3(VAR_7);
    FUNC_0("%d end futex(FUTEX_WAIT)", VAR_2->pid);
    return VAR_8;
}
