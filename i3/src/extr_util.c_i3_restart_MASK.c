
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 () ;
 int * VAR_3 ;
 char* FUNC_7 () ;

void FUNC_8(bool VAR_4) {
    char *VAR_5 = VAR_4 ? ((void*)0) : FUNC_7();

    FUNC_5(&VAR_2, 1);
    FUNC_5(&VAR_1, 1);

    FUNC_6();

    FUNC_4(VAR_0, -1);

    FUNC_0("restarting \"%s\"...\n", VAR_3[0]);

    VAR_3 = FUNC_1(VAR_3, "-a", ((void*)0), ((void*)0));


    if (FUNC_3()) {
        VAR_3 = FUNC_1(VAR_3, "-d", "all", ((void*)0));
    }


    if (VAR_5 != ((void*)0)) {
        VAR_3 = FUNC_1(VAR_3, "--restart", VAR_5, "-r");
    }

    FUNC_2(VAR_3[0], VAR_3);


}
