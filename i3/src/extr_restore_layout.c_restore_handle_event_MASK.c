
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_generic_event_t ;
struct TYPE_3__ {int count; } ;
typedef TYPE_1__ xcb_expose_event_t ;
typedef int xcb_configure_notify_event_t ;


 int FUNC_0 (char*,int) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(int VAR_0, xcb_generic_event_t *VAR_1) {
    switch (VAR_0) {
        case 128:
            if (((xcb_expose_event_t *)VAR_1)->count == 0) {
                FUNC_2((xcb_expose_event_t *)VAR_1);
            }

            break;
        case 129:
            FUNC_1((xcb_configure_notify_event_t *)VAR_1);
            break;
        default:
            FUNC_0("Received unhandled X11 event of type %d\n", VAR_0);
            break;
    }
}
