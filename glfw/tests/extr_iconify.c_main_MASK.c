
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int ** FUNC_0 (int,int) ;
 int * FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int,char**,char*) ;
 int ** FUNC_5 (int*) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int (*) (int *)) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (int *) ;
 int VAR_8 ;
 int FUNC_20 (char*,char*,char*) ;
 int VAR_9 ;
 int FUNC_21 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_22 (int *) ;
 int VAR_13 ;

int FUNC_23(int VAR_14, char** VAR_15)
{
    int VAR_16, VAR_17, VAR_18;
    int VAR_19 = VAR_2, VAR_20 = VAR_2;
    GLFWwindow** VAR_21;

    while ((VAR_16 = FUNC_4(VAR_14, VAR_15, "afhn")) != -1)
    {
        switch (VAR_16)
        {
            case 'a':
                VAR_20 = VAR_5;
                break;

            case 'h':
                FUNC_21();
                FUNC_2(VAR_1);

            case 'f':
                VAR_19 = VAR_5;
                break;

            default:
                FUNC_21();
                FUNC_2(VAR_0);
        }
    }

    FUNC_9(VAR_6);

    if (!FUNC_8())
        FUNC_2(VAR_0);

    if (VAR_19 && VAR_20)
    {
        int VAR_22;
        GLFWmonitor** VAR_23 = FUNC_5(&VAR_22);

        VAR_18 = VAR_22;
        VAR_21 = FUNC_0(VAR_18, sizeof(GLFWwindow*));

        for (VAR_17 = 0; VAR_17 < VAR_22; VAR_17++)
        {
            VAR_21[VAR_17] = FUNC_1(VAR_23[VAR_17]);
            if (!VAR_21[VAR_17])
                break;
        }
    }
    else
    {
        GLFWmonitor* VAR_24 = ((void*)0);

        if (VAR_19)
            VAR_24 = FUNC_6();

        VAR_18 = 1;
        VAR_21 = FUNC_0(VAR_18, sizeof(GLFWwindow*));
        VAR_21[0] = FUNC_1(VAR_24);
    }

    for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
    {
        FUNC_11(VAR_21[VAR_17], VAR_8);
        FUNC_10(VAR_21[VAR_17], VAR_7);
        FUNC_16(VAR_21[VAR_17], VAR_13);
        FUNC_12(VAR_21[VAR_17], VAR_10);
        FUNC_13(VAR_21[VAR_17], VAR_11);
        FUNC_14(VAR_21[VAR_17], VAR_12);
        FUNC_15(VAR_21[VAR_17], FUNC_22);

        FUNC_22(VAR_21[VAR_17]);

        FUNC_20("Window is %s and %s\n",
            FUNC_7(VAR_21[VAR_17], VAR_4) ? "iconified" : "restored",
            FUNC_7(VAR_21[VAR_17], VAR_3) ? "focused" : "defocused");
    }

    for (;;)
    {
        FUNC_18();

        for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
        {
            if (FUNC_19(VAR_21[VAR_17]))
                break;
        }

        if (VAR_17 < VAR_18)
            break;


        FUNC_3(VAR_9);
    }

    FUNC_17();
    FUNC_2(VAR_1);
}
