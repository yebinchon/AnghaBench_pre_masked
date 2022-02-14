
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long version; long long stop_signal; long long cont_signal; } ;
typedef TYPE_1__ i3bar_child ;





 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, long long VAR_2) {
    i3bar_child *VAR_3 = VAR_1;

    switch (VAR_0) {
        case 128:
            VAR_3->version = VAR_2;
            break;
        case 129:
            VAR_3->stop_signal = VAR_2;
            break;
        case 130:
            VAR_3->cont_signal = VAR_2;
            break;
        default:
            break;
    }

    return 1;
}
