
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int click_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;

void FUNC_8(int VAR_9, const char *VAR_10, const char *VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18) {
    if (!VAR_7.click_events) {
        return;
    }

    FUNC_0();

    FUNC_6(VAR_8);

    if (VAR_10) {
        FUNC_7("name");
        FUNC_7(VAR_10);
    }

    if (VAR_11) {
        FUNC_7("instance");
        FUNC_7(VAR_11);
    }

    FUNC_7("button");
    FUNC_4(VAR_8, VAR_9);

    FUNC_7("modifiers");
    FUNC_3(VAR_8);
    if (VAR_18 & VAR_6)
        FUNC_7("Shift");
    if (VAR_18 & VAR_5)
        FUNC_7("Control");
    if (VAR_18 & VAR_0)
        FUNC_7("Mod1");
    if (VAR_18 & VAR_1)
        FUNC_7("Mod2");
    if (VAR_18 & VAR_2)
        FUNC_7("Mod3");
    if (VAR_18 & VAR_3)
        FUNC_7("Mod4");
    if (VAR_18 & VAR_4)
        FUNC_7("Mod5");
    FUNC_2(VAR_8);

    FUNC_7("x");
    FUNC_4(VAR_8, VAR_12);

    FUNC_7("y");
    FUNC_4(VAR_8, VAR_13);

    FUNC_7("relative_x");
    FUNC_4(VAR_8, VAR_14);

    FUNC_7("relative_y");
    FUNC_4(VAR_8, VAR_15);

    FUNC_7("width");
    FUNC_4(VAR_8, VAR_16);

    FUNC_7("height");
    FUNC_4(VAR_8, VAR_17);

    FUNC_5(VAR_8);
    FUNC_1();
}
