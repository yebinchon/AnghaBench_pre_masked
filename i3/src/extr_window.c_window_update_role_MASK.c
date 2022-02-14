
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char xcb_get_property_reply_t ;
struct TYPE_3__ {char* role; } ;
typedef TYPE_1__ i3Window ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,char*,scalar_t__,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;

void FUNC_7(i3Window *VAR_0, xcb_get_property_reply_t *VAR_1) {
    if (VAR_1 == ((void*)0) || FUNC_6(VAR_1) == 0) {
        FUNC_0("WM_WINDOW_ROLE not set.\n");
        FUNC_1(VAR_1);
        return;
    }

    char *VAR_2;
    FUNC_4(&VAR_2, "%.*s", FUNC_6(VAR_1),
              (char *)FUNC_5(VAR_1));
    FUNC_1(VAR_0->role);
    VAR_0->role = VAR_2;
    FUNC_2("WM_WINDOW_ROLE changed to \"%s\"\n", VAR_0->role);

    FUNC_3(VAR_1);
}
