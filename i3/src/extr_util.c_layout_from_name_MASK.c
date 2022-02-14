
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int layout_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

bool FUNC_2(const char *VAR_5, layout_t *VAR_6) {
    if (FUNC_1(VAR_5, "default") == 0) {
        *VAR_6 = VAR_0;
        return 1;
    } else if (FUNC_0(VAR_5, "stacked") == 0 ||
               FUNC_0(VAR_5, "stacking") == 0) {
        *VAR_6 = VAR_3;
        return 1;
    } else if (FUNC_0(VAR_5, "tabbed") == 0) {
        *VAR_6 = VAR_4;
        return 1;
    } else if (FUNC_0(VAR_5, "splitv") == 0) {
        *VAR_6 = VAR_2;
        return 1;
    } else if (FUNC_0(VAR_5, "splith") == 0) {
        *VAR_6 = VAR_1;
        return 1;
    }

    return 0;
}
