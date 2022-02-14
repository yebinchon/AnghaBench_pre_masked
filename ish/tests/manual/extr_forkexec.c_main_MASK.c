
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,char**) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *,int ) ;

int FUNC_5(int VAR_0, char *VAR_1[]) {
    int VAR_2 = FUNC_2();
    if (VAR_2 < 0) {
        FUNC_3("fork");
        FUNC_0();
    }
    if (VAR_2 == 0) {

        if (FUNC_1(VAR_1[1], VAR_1 + 1) < 0) {
            FUNC_3("exec");
            FUNC_0();
        }
    } else {

        if (FUNC_4(VAR_2, ((void*)0), 0) != VAR_2) {
            FUNC_3("wait");
            FUNC_0();
        }
    }
}
