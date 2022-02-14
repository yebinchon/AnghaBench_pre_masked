
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Output ;
typedef int Con ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,char const*) ;

bool FUNC_4(Con *VAR_0, const char *VAR_1, bool VAR_2) {
    Output *VAR_3 = FUNC_2(VAR_0);
    Output *VAR_4 = FUNC_3(VAR_3, VAR_1);
    if (VAR_4 == ((void*)0)) {
        FUNC_0("Could not find output \"%s\"\n", VAR_1);
        return 0;
    }

    FUNC_1(VAR_0, VAR_4, VAR_2);
    return 1;
}
