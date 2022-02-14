
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct Mode {int bindings; } ;
struct TYPE_7__ {long keycode; int event_state_mask; int keycodes_head; void* command; void* input_type; void* symbol; int exclude_titlebar; int whole_window; int border; int release; } ;
typedef TYPE_1__ Binding ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_1__*,char const*,char const*,char const*,char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int VAR_8 ;
 int FUNC_5 (char const*) ;
 struct Mode* FUNC_6 (char const*,int) ;
 int FUNC_7 (char const*,long*,int) ;
 TYPE_1__* FUNC_8 (int,int) ;
 void* FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

Binding *FUNC_12(const char *VAR_9, const char *VAR_10, const char *VAR_11,
                           const char *VAR_12, const char *VAR_13, const char *VAR_14,
                           const char *VAR_15, const char *VAR_16, const char *VAR_17,
                           bool VAR_18) {
    Binding *VAR_19 = FUNC_8(1, sizeof(Binding));
    FUNC_0("Binding %p bindtype %s, modifiers %s, input code %s, release %s\n", VAR_19, VAR_9, VAR_10, VAR_11, VAR_12);
    VAR_19->release = (VAR_12 != ((void*)0) ? VAR_3 : VAR_2);
    VAR_19->border = (VAR_13 != ((void*)0));
    VAR_19->whole_window = (VAR_14 != ((void*)0));
    VAR_19->exclude_titlebar = (VAR_15 != ((void*)0));
    if (FUNC_10(VAR_9, "bindsym") == 0) {
        VAR_19->input_type = (FUNC_11(VAR_11, "button", (sizeof("button") - 1)) == 0
                                       ? VAR_1
                                       : VAR_0);

        VAR_19->symbol = FUNC_9(VAR_11);
    } else {
        long VAR_20;
        if (!FUNC_7(VAR_11, &VAR_20, 10)) {
            FUNC_1("Could not parse \"%s\" as an input code, ignoring this binding.\n", VAR_11);
            FUNC_2(VAR_19);
            return ((void*)0);
        }

        VAR_19->keycode = VAR_20;
        VAR_19->input_type = VAR_0;
    }
    VAR_19->command = FUNC_9(VAR_16);
    VAR_19->event_state_mask = FUNC_5(VAR_10);
    int VAR_21 = 0;
    if ((VAR_19->event_state_mask >> 16) & VAR_4)
        VAR_21++;
    if ((VAR_19->event_state_mask >> 16) & VAR_5)
        VAR_21++;
    if ((VAR_19->event_state_mask >> 16) & VAR_6)
        VAR_21++;
    if ((VAR_19->event_state_mask >> 16) & VAR_7)
        VAR_21++;
    if (VAR_21 > 1)
        FUNC_1("Keybinding has more than one Group specified, but your X server is always in precisely one group. The keybinding can never trigger.\n");

    struct Mode *VAR_22 = FUNC_6(VAR_17, VAR_18);
    FUNC_4(VAR_22->bindings, VAR_19, VAR_8);

    FUNC_3(&(VAR_19->keycodes_head));

    return VAR_19;
}
