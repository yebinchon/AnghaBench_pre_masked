
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char xcb_get_property_reply_t ;
struct TYPE_6__ {int name_x_changed; int uses_net_wm_name; int * name; int id; } ;
typedef TYPE_1__ i3Window ;
typedef int i3String ;
struct TYPE_7__ {int * title_format; } ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*) ;
 char* FUNC_11 (int ,int const) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;

void FUNC_14(i3Window *VAR_0, xcb_get_property_reply_t *VAR_1) {
    if (VAR_1 == ((void*)0) || FUNC_13(VAR_1) == 0) {
        FUNC_0("_NET_WM_NAME not specified, not changing\n");
        FUNC_1(VAR_1);
        return;
    }

    FUNC_9(VAR_0->name);


    const int VAR_2 = FUNC_13(VAR_1);
    char *VAR_3 = FUNC_11(FUNC_12(VAR_1), VAR_2);
    VAR_0->name = FUNC_10(VAR_3);
    FUNC_7(VAR_3);

    Con *VAR_4 = FUNC_4(VAR_0->id);
    if (VAR_4 != ((void*)0) && VAR_4->title_format != ((void*)0)) {
        i3String *VAR_5 = FUNC_5(VAR_4);
        FUNC_6(VAR_0->id, FUNC_8(VAR_5));
        FUNC_2(VAR_5);
    }
    VAR_0->name_x_changed = 1;
    FUNC_3("_NET_WM_NAME changed to \"%s\"\n", FUNC_8(VAR_0->name));

    VAR_0->uses_net_wm_name = 1;

    FUNC_7(VAR_1);
}
