
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pid; scalar_t__ cont_signal; scalar_t__ stopped; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int*,int ) ;

void FUNC_3(void) {
    if (VAR_1.pid > 0) {
        if (VAR_1.cont_signal > 0 && VAR_1.stopped)
            FUNC_1(VAR_1.pid, VAR_1.cont_signal);
        FUNC_1(VAR_1.pid, VAR_0);
        int VAR_2;
        FUNC_2(VAR_1.pid, &VAR_2, 0);
        FUNC_0();
    }
}
