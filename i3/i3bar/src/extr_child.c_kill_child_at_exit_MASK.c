
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pid; scalar_t__ cont_signal; scalar_t__ stopped; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

void FUNC_1(void) {
    if (VAR_1.pid > 0) {
        if (VAR_1.cont_signal > 0 && VAR_1.stopped)
            FUNC_0(VAR_1.pid, VAR_1.cont_signal);
        FUNC_0(VAR_1.pid, VAR_0);
    }
}
