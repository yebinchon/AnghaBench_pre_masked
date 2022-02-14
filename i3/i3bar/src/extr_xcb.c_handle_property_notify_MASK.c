
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ atom; scalar_t__ state; int window; } ;
typedef TYPE_1__ xcb_property_notify_event_t ;
struct TYPE_11__ {scalar_t__ length; int format; } ;
typedef TYPE_2__ xcb_get_property_reply_t ;
typedef int xcb_get_property_cookie_t ;
typedef int uint32_t ;
struct TYPE_12__ {int win; scalar_t__ mapped; } ;
typedef TYPE_3__ trayclient ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_6 ;
 TYPE_2__* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ,scalar_t__,int ,int ,int) ;
 int* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(xcb_property_notify_event_t *VAR_7) {
    FUNC_0("PropertyNotify\n");
    if (VAR_7->atom == VAR_5[VAR_4] &&
        VAR_7->state == VAR_2) {

        FUNC_0("xembed_info updated\n");

        trayclient *VAR_8 = FUNC_3(VAR_7->window);
        if (!VAR_8) {
            FUNC_1("PropertyNotify received for unknown window %08x\n", VAR_7->window);
            return;
        }

        xcb_get_property_cookie_t VAR_9;
        VAR_9 = FUNC_6(VAR_6,
                                             0,
                                             VAR_8->win,
                                             VAR_5[VAR_4],
                                             VAR_1,
                                             0,
                                             2 * 32);

        xcb_get_property_reply_t *VAR_10 = FUNC_5(VAR_6,
                                                                   VAR_9,
                                                                   ((void*)0));
        if (VAR_10 == ((void*)0) || VAR_10->length == 0) {
            FUNC_0("xembed_info unset\n");
            return;
        }

        FUNC_0("xembed format = %d, len = %d\n", VAR_10->format, VAR_10->length);
        uint32_t *VAR_11 = FUNC_7(VAR_10);
        FUNC_0("xembed version = %d\n", VAR_11[0]);
        FUNC_0("xembed flags = %d\n", VAR_11[1]);
        bool VAR_12 = ((VAR_11[1] & VAR_3) == VAR_3);
        FUNC_0("map state now %d\n", VAR_12);
        if (VAR_8->mapped && !VAR_12) {

            FUNC_9(VAR_6, VAR_8->win);
        } else if (!VAR_8->mapped && VAR_12) {

            FUNC_8(VAR_6, VAR_8->win);
        }
        FUNC_2(VAR_10);
    } else if (VAR_7->atom == VAR_0) {
        trayclient *VAR_13 = FUNC_3(VAR_7->window);
        if (VAR_13) {
            FUNC_4(VAR_13);
        }
    }
}
