
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ev_loop {int dummy; } ;
struct TYPE_3__ {int signum; } ;
typedef TYPE_1__ ev_signal ;


 int FUNC_0 (char*) ;
 int VAR_0 ;



 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct ev_loop *VAR_2, ev_signal *VAR_3, int VAR_4) {
    switch (VAR_3->signum) {
        case 128:
            FUNC_0("Got a SIGTERM, stopping\n");
            break;
        case 129:
            FUNC_0("Got a SIGINT, stopping\n");
            break;
        case 130:
            FUNC_0("Got a SIGHUP, stopping\n");
    }
    FUNC_1(VAR_1, VAR_0);
}
