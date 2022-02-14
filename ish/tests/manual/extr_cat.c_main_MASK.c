
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int * VAR_2 ;

int FUNC_5(int VAR_3, const char *VAR_4[]) {
    FILE *VAR_5 = VAR_2;
    if (VAR_3 > 1)
        VAR_5 = FUNC_1(VAR_4[1], "r");
    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_1, "cat: ");
        FUNC_3(VAR_4[1]);
        return 1;
    }

    int VAR_6;
    while ((VAR_6 = FUNC_0(VAR_5)) != VAR_0)
        FUNC_4(VAR_6);
}
