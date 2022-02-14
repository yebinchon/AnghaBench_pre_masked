
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xkb_rule_names {int * options; int * variant; int * layout; int * model; int * rules; } ;
struct xkb_keymap {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct xkb_rule_names*) ;
 int FUNC_3 (char*) ;
 int * VAR_1 ;
 int * FUNC_4 (int ) ;
 struct xkb_keymap* VAR_2 ;
 struct xkb_keymap* FUNC_5 (int *,struct xkb_rule_names*,int ) ;
 int FUNC_6 (struct xkb_keymap*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ) ;
 struct xkb_keymap* FUNC_8 (int *,int ,int,int ) ;

bool FUNC_9(void) {
    if (VAR_1 == ((void*)0)) {
        if ((VAR_1 = FUNC_4(0)) == ((void*)0)) {
            FUNC_0("Could not create xkbcommon context\n");
            return 0;
        }
    }

    struct xkb_keymap *VAR_4 = ((void*)0);
    int32_t VAR_5;
    if (VAR_3 && (VAR_5 = FUNC_7(VAR_0)) > -1) {
        if ((VAR_4 = FUNC_8(VAR_1, VAR_0, VAR_5, 0)) == ((void*)0)) {
            FUNC_0("xkb_x11_keymap_new_from_device failed\n");
            return 0;
        }
    } else {


        FUNC_1("No XKB / core keyboard device? Assembling keymap from local RMLVO.\n");
        struct xkb_rule_names VAR_6 = {
            .rules = ((void*)0),
            .model = ((void*)0),
            .layout = ((void*)0),
            .variant = ((void*)0),
            .options = ((void*)0)};
        if (FUNC_2(&VAR_6) == -1) {
            FUNC_0("Could not get _XKB_RULES_NAMES atom from root window, falling back to defaults.\n");

        }
        VAR_4 = FUNC_5(VAR_1, &VAR_6, 0);
        FUNC_3((char *)VAR_6.rules);
        FUNC_3((char *)VAR_6.model);
        FUNC_3((char *)VAR_6.layout);
        FUNC_3((char *)VAR_6.variant);
        FUNC_3((char *)VAR_6.options);
        if (VAR_4 == ((void*)0)) {
            FUNC_0("xkb_keymap_new_from_names failed\n");
            return 0;
        }
    }
    FUNC_6(VAR_2);
    VAR_2 = VAR_4;

    return 1;
}
