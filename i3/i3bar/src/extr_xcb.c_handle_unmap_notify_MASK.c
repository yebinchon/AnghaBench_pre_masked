
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int window; int event; } ;
typedef TYPE_1__ xcb_unmap_notify_event_t ;
struct TYPE_6__ {int mapped; } ;
typedef TYPE_2__ trayclient ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(xcb_unmap_notify_event_t *VAR_0) {
    FUNC_0("UnmapNotify for window = %08x, event = %08x\n", VAR_0->window, VAR_0->event);

    trayclient *VAR_1 = FUNC_3(VAR_0->window);
    if (!VAR_1) {
        FUNC_0("WARNING: Could not find corresponding tray window.\n");
        return;
    }

    FUNC_0("Tray client unmapped (window ID %08x). Adjusting tray.\n", VAR_0->window);
    VAR_1->mapped = 0;


    FUNC_1();
    FUNC_2(0);
}
