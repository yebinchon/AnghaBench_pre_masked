
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int window; int event; } ;
typedef TYPE_1__ xcb_destroy_notify_event_t ;
struct TYPE_10__ {int class_instance; int class_class; } ;
typedef TYPE_2__ trayclient ;
struct TYPE_11__ {int trayclients; } ;
typedef TYPE_3__ i3_output ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_6 (int ,TYPE_3__**) ;

__attribute__((used)) static void FUNC_7(xcb_destroy_notify_event_t *VAR_1) {
    FUNC_0("DestroyNotify for window = %08x, event = %08x\n", VAR_1->window, VAR_1->event);

    i3_output *VAR_2;
    trayclient *VAR_3 = FUNC_6(VAR_1->window, &VAR_2);
    if (!VAR_3) {
        FUNC_0("WARNING: Could not find corresponding tray window.\n");
        return;
    }

    FUNC_0("Removing tray client with window ID %08x\n", VAR_1->window);
    FUNC_2(VAR_2->trayclients, VAR_3, VAR_0);
    FUNC_5(VAR_3->class_class);
    FUNC_5(VAR_3->class_instance);
    FUNC_1(VAR_3);


    FUNC_3();
    FUNC_4(0);
}
