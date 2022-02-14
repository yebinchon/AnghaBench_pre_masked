
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sequence; int window; int event; } ;
typedef TYPE_1__ xcb_unmap_notify_event_t ;
typedef int xcb_get_input_focus_cookie_t ;
struct TYPE_8__ {scalar_t__ ignore_unmap; } ;
typedef TYPE_2__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_11(xcb_unmap_notify_event_t *VAR_5) {
    FUNC_0("UnmapNotify for 0x%08x (received from 0x%08x), serial %d\n", VAR_5->window, VAR_5->event, VAR_5->sequence);
    xcb_get_input_focus_cookie_t VAR_6;
    Con *VAR_7 = FUNC_4(VAR_5->window);
    if (VAR_7 == ((void*)0)) {


        VAR_7 = FUNC_3(VAR_5->window);
        if (VAR_7 == ((void*)0)) {
            FUNC_1("Not a managed window, ignoring UnmapNotify event\n");
            return;
        }

        if (VAR_7->ignore_unmap > 0)
            VAR_7->ignore_unmap--;

        VAR_6 = FUNC_9(VAR_4);
        FUNC_0("ignore_unmap = %d for frame of container %p\n", VAR_7->ignore_unmap, VAR_7);
        goto ignore_end;
    }


    VAR_6 = FUNC_9(VAR_4);

    if (VAR_7->ignore_unmap > 0) {
        FUNC_0("ignore_unmap = %d, dec\n", VAR_7->ignore_unmap);
        VAR_7->ignore_unmap--;
        goto ignore_end;
    }



    FUNC_8(VAR_4, VAR_5->window, VAR_0);
    FUNC_8(VAR_4, VAR_5->window, VAR_1);

    FUNC_6(VAR_7, VAR_2, 0);
    FUNC_7();

ignore_end:
    FUNC_2(VAR_5->sequence, VAR_3);






    FUNC_5(FUNC_10(VAR_4, VAR_6, ((void*)0)));
}
