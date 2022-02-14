
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; } ;
typedef TYPE_1__ xcb_xinerama_is_active_reply_t ;
struct TYPE_6__ {int present; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int *) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,int ,int *) ;

void FUNC_7(void) {
    if (!FUNC_4(VAR_0, &VAR_1)->present) {
        FUNC_0("Xinerama extension not found, using root output.\n");
        FUNC_3(VAR_0);
    } else {
        xcb_xinerama_is_active_reply_t *VAR_2;
        VAR_2 = FUNC_6(VAR_0, FUNC_5(VAR_0), ((void*)0));

        if (VAR_2 == ((void*)0) || !VAR_2->state) {
            FUNC_0("Xinerama is not active (in your X-Server), using root output.\n");
            FUNC_3(VAR_0);
        } else
            FUNC_2(VAR_0);

        FUNC_1(VAR_2);
    }
}
