
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i3_event_state_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_0 (char const*,char*) ;

i3_event_state_mask_t FUNC_1(const char *VAR_11) {


    i3_event_state_mask_t VAR_12 = 0;
    if (VAR_11 == ((void*)0))
        return VAR_12;
    if (FUNC_0(VAR_11, "Mod1") != ((void*)0))
        VAR_12 |= VAR_5;
    if (FUNC_0(VAR_11, "Mod2") != ((void*)0))
        VAR_12 |= VAR_6;
    if (FUNC_0(VAR_11, "Mod3") != ((void*)0))
        VAR_12 |= VAR_7;
    if (FUNC_0(VAR_11, "Mod4") != ((void*)0))
        VAR_12 |= VAR_8;
    if (FUNC_0(VAR_11, "Mod5") != ((void*)0))
        VAR_12 |= VAR_9;
    if (FUNC_0(VAR_11, "Control") != ((void*)0) ||
        FUNC_0(VAR_11, "Ctrl") != ((void*)0))
        VAR_12 |= VAR_4;
    if (FUNC_0(VAR_11, "Shift") != ((void*)0))
        VAR_12 |= VAR_10;

    if (FUNC_0(VAR_11, "Group1") != ((void*)0))
        VAR_12 |= (VAR_0 << 16);
    if (FUNC_0(VAR_11, "Group2") != ((void*)0) ||
        FUNC_0(VAR_11, "Mode_switch") != ((void*)0))
        VAR_12 |= (VAR_1 << 16);
    if (FUNC_0(VAR_11, "Group3") != ((void*)0))
        VAR_12 |= (VAR_2 << 16);
    if (FUNC_0(VAR_11, "Group4") != ((void*)0))
        VAR_12 |= (VAR_3 << 16);
    return VAR_12;
}
