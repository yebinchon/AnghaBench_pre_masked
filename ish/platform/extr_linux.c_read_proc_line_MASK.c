
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char const*,char*) ;
 size_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,size_t) ;

__attribute__((used)) static void FUNC_8(const char *VAR_0, const char *VAR_1, char *VAR_2) {
    FILE *VAR_3 = FUNC_5(VAR_0, "r");
    if (VAR_3 == ((void*)0)) FUNC_0(VAR_0);
    do {
        FUNC_4(VAR_2, 1234, VAR_3);
        if (FUNC_3(VAR_3))
            FUNC_1("could not find proc line %s", VAR_1);
    } while (!(FUNC_7(VAR_1, VAR_2, FUNC_6(VAR_1)) == 0 && VAR_2[FUNC_6(VAR_1)] == ' '));
    FUNC_2(VAR_3);
}
