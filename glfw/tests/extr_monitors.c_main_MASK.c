
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int ** FUNC_2 (int*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

int FUNC_9(int VAR_5, char** VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10 = VAR_2;
    GLFWmonitor** VAR_11;

    while ((VAR_7 = FUNC_1(VAR_5, VAR_6, "th")) != -1)
    {
        switch (VAR_7)
        {
            case 'h':
                FUNC_8();
                FUNC_0(VAR_1);
            case 't':
                VAR_10 = VAR_3;
                break;
            default:
                FUNC_8();
                FUNC_0(VAR_0);
        }
    }

    FUNC_4(VAR_4);

    if (!FUNC_3())
        FUNC_0(VAR_0);

    VAR_11 = FUNC_2(&VAR_9);

    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    {
        if (VAR_10 == VAR_2)
            FUNC_6(VAR_11[VAR_8]);
        else if (VAR_10 == VAR_3)
            FUNC_7(VAR_11[VAR_8]);
    }

    FUNC_5();
    FUNC_0(VAR_1);
}
