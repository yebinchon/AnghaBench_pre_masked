
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_key_press_event_t ;
struct TYPE_5__ {int response_type; } ;
typedef TYPE_1__ xcb_generic_event_t ;
struct TYPE_6__ {int count; } ;
typedef TYPE_2__ xcb_expose_event_t ;
struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
typedef int siginfo_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(int VAR_3, siginfo_t *VAR_4, void *VAR_5) {
    FUNC_0("i3 crashed. SIG: %d\n", VAR_3);

    struct sigaction VAR_6;
    VAR_6.sa_handler = VAR_0;
    VAR_6.sa_flags = 0;
    FUNC_3(&VAR_6.sa_mask);
    FUNC_2(VAR_3, &VAR_6, ((void*)0));
    VAR_2 = VAR_3;

    FUNC_7();
    FUNC_4();

    xcb_generic_event_t *VAR_7;

    while ((VAR_7 = FUNC_8(VAR_1))) {

        int VAR_8 = (VAR_7->response_type & 0x7F);
        switch (VAR_8) {
            case 128:
                FUNC_6((xcb_key_press_event_t *)VAR_7);
                break;
            case 129:
                if (((xcb_expose_event_t *)VAR_7)->count == 0) {
                    FUNC_5();
                }

                break;
        }

        FUNC_1(VAR_7);
    }
}
