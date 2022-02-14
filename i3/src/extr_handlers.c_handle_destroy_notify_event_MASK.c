
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int window; int event; int sequence; } ;
typedef TYPE_1__ xcb_unmap_notify_event_t ;
struct TYPE_6__ {int window; int event; int sequence; } ;
typedef TYPE_2__ xcb_destroy_notify_event_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(xcb_destroy_notify_event_t *VAR_0) {
    FUNC_0("destroy notify for 0x%08x, 0x%08x\n", VAR_0->event, VAR_0->window);

    xcb_unmap_notify_event_t VAR_1;
    VAR_1.sequence = VAR_0->sequence;
    VAR_1.event = VAR_0->event;
    VAR_1.window = VAR_0->window;

    FUNC_1(&VAR_1);
}
