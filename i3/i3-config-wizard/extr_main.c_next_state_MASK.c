
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xkb_keysym_t ;
typedef int str ;
struct TYPE_3__ {scalar_t__ next_state; } ;
typedef TYPE_1__ cmdp_token ;
typedef scalar_t__ cmdp_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,int const) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int const,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char**,char*,char*,char*,char*,char*,char*) ;
 char* FUNC_8 (char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 char* FUNC_9 (char*,char) ;
 int * FUNC_10 (char const*,char*) ;
 int VAR_5 ;
 int FUNC_11 (int ,int,int ,int,int const**) ;
 int FUNC_12 (int const,char*,int) ;

__attribute__((used)) static char *FUNC_13(const cmdp_token *VAR_6) {
    cmdp_state VAR_7 = VAR_6->next_state;

    if (VAR_6->next_state == VAR_1) {
        const char *VAR_8 = FUNC_4("modifiers");
        int VAR_9 = FUNC_0(FUNC_4("key"));
        int VAR_10 = 0;
        if (VAR_8 != ((void*)0) &&
            FUNC_10(VAR_8, "Shift") != ((void*)0)) {




            VAR_10 = 1;
            const xkb_keysym_t *VAR_11;
            int VAR_12 = FUNC_11(VAR_5, VAR_9, 0, 0, &VAR_11);
            if (VAR_12 == 0)
                FUNC_2(1, "xkb_keymap_key_get_syms_by_level returned no symbols for keycode %d", VAR_9);
            if (!FUNC_5(VAR_11[0], VAR_9))
                VAR_10 = 0;
        }

        const xkb_keysym_t *VAR_13;
        int VAR_14 = FUNC_11(VAR_5, VAR_9, 0, VAR_10, &VAR_13);
        if (VAR_14 == 0)
            FUNC_2(1, "xkb_keymap_key_get_syms_by_level returned no symbols for keycode %d", VAR_9);
        if (VAR_14 > 1)
            FUNC_6("xkb_keymap_key_get_syms_by_level (keycode = %d) returned %d symbolsinstead of 1, using only the first one.\n", VAR_9, VAR_14);

        char VAR_15[4096];
        if (FUNC_12(VAR_13[0], VAR_15, sizeof(VAR_15)) == -1)
            FUNC_2(VAR_0, "xkb_keysym_get_name(%u) failed", VAR_13[0]);
        const char *VAR_16 = FUNC_4("release");
        char *VAR_17;
        char *VAR_18 = (VAR_8 == ((void*)0) ? FUNC_8("") : FUNC_8(VAR_8));
        char *VAR_19;
        while ((VAR_19 = FUNC_9(VAR_18, ',')) != ((void*)0)) {
            *VAR_19 = '+';
        }
        FUNC_7(&VAR_17, "bindsym %s%s%s %s%s\n", (VAR_8 == ((void*)0) ? "" : VAR_18), (VAR_8 == ((void*)0) ? "" : "+"), VAR_15, (VAR_16 == ((void*)0) ? "" : VAR_16), FUNC_4("command"));
        FUNC_1();
        FUNC_3(VAR_18);
        return VAR_17;
    }

    VAR_2 = VAR_7;



    for (int VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {
        if (VAR_3[VAR_20] != VAR_7)
            continue;
        VAR_4 = VAR_20 + 1;
        return ((void*)0);
    }


    VAR_3[VAR_4++] = VAR_7;
    return ((void*)0);
}
