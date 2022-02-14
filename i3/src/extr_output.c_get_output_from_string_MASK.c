
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Output ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (char const*,int) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

Output *FUNC_4(Output *VAR_5, const char *VAR_6) {
    if (FUNC_3(VAR_6, "current") == 0) {
        return FUNC_1(VAR_4);
    } else if (FUNC_3(VAR_6, "left") == 0) {
        return FUNC_2(VAR_1, VAR_5);
    } else if (FUNC_3(VAR_6, "right") == 0) {
        return FUNC_2(VAR_2, VAR_5);
    } else if (FUNC_3(VAR_6, "up") == 0) {
        return FUNC_2(VAR_3, VAR_5);
    } else if (FUNC_3(VAR_6, "down") == 0) {
        return FUNC_2(VAR_0, VAR_5);
    }

    return FUNC_0(VAR_6, 1);
}
