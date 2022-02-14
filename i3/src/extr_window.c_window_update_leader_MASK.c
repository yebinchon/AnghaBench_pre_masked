
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_reply_t ;
struct TYPE_3__ {int leader; int id; } ;
typedef TYPE_1__ i3Window ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(i3Window *VAR_1, xcb_get_property_reply_t *VAR_2) {
    if (VAR_2 == ((void*)0) || FUNC_4(VAR_2) == 0) {
        FUNC_0("CLIENT_LEADER not set on window 0x%08x.\n", VAR_1->id);
        VAR_1->leader = VAR_0;
        FUNC_1(VAR_2);
        return;
    }

    xcb_window_t *VAR_3 = FUNC_3(VAR_2);
    if (VAR_3 == ((void*)0)) {
        FUNC_2(VAR_2);
        return;
    }

    FUNC_0("Client leader changed to %08x\n", *VAR_3);

    VAR_1->leader = *VAR_3;

    FUNC_2(VAR_2);
}
