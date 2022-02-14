
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cont_signal; int stopped; int pid; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(void) {
    if (VAR_0.cont_signal > 0 && VAR_0.stopped) {
        VAR_0.stopped = 0;
        FUNC_0(VAR_0.pid, VAR_0.cont_signal);
    }
}
