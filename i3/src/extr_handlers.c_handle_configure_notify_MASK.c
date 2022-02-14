
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ event; } ;
typedef TYPE_1__ xcb_configure_notify_event_t ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(xcb_configure_notify_event_t *VAR_2) {
    if (VAR_2->event != VAR_1) {
        FUNC_0("ConfigureNotify for non-root window 0x%08x, ignoring\n", VAR_2->event);
        return;
    }
    FUNC_0("ConfigureNotify for root window 0x%08x\n", VAR_2->event);

    if (VAR_0) {
        return;
    }
    FUNC_1();
}
