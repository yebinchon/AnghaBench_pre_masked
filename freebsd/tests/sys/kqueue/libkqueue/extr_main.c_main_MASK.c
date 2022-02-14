
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_2 ;

int
FUNC_11(int VAR_3, char **VAR_4)
{
    int VAR_5 = 1;
    int VAR_6 = 1;
    int VAR_7 = 1;
    int VAR_8 = 1;
    int VAR_9 = 1;




    int VAR_10 = 0;


    while (VAR_3) {
        if (FUNC_2(VAR_4[0], "--no-proc") == 0)
            VAR_5 = 0;
        if (FUNC_2(VAR_4[0], "--no-socket") == 0)
            VAR_6 = 0;
        if (FUNC_2(VAR_4[0], "--no-timer") == 0)
            VAR_9 = 0;
        if (FUNC_2(VAR_4[0], "--no-signal") == 0)
            VAR_7 = 0;
        if (FUNC_2(VAR_4[0], "--no-vnode") == 0)
            VAR_8 = 0;
        if (FUNC_2(VAR_4[0], "--no-user") == 0)
            VAR_10 = 0;
        VAR_4++;
        VAR_3--;
    }







    FUNC_1(VAR_1);
    FUNC_1(VAR_0);

    FUNC_9();
    FUNC_10();

    if (VAR_6)
        FUNC_4();
    if (VAR_7)
        FUNC_5();
    if (VAR_8)
        FUNC_8();




    if (VAR_9)
        FUNC_6();
    if (VAR_5)
        FUNC_3();

    FUNC_0("\n---\n"
            "+OK All %d tests completed.\n", VAR_2 - 1);
    return (0);
}
