
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float,float,float,int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int,int,char*,int *,int *) ;
 int VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 () ;

int FUNC_17(int VAR_7, char** VAR_8)
{
    int VAR_9;
    GLFWwindow* VAR_10;

    while ((VAR_9 = FUNC_2(VAR_7, VAR_8, "h")) != -1)
    {
        switch (VAR_9)
        {
            case 'h':
                FUNC_16();
                FUNC_0(VAR_1);

            default:
                FUNC_16();
                FUNC_0(VAR_0);
        }
    }

    FUNC_9(VAR_3);

    if (!FUNC_7())
    {
        FUNC_1(VAR_6, "Failed to initialize GLFW\n");
        FUNC_0(VAR_0);
    }

    VAR_10 = FUNC_6(200, 200, "Clipboard Test", ((void*)0), ((void*)0));
    if (!VAR_10)
    {
        FUNC_13();

        FUNC_1(VAR_6, "Failed to open GLFW window\n");
        FUNC_0(VAR_0);
    }

    FUNC_8(VAR_10);
    FUNC_5(VAR_4);
    FUNC_12(1);

    FUNC_10(VAR_10, VAR_5);

    FUNC_4(0.5f, 0.5f, 0.5f, 0);

    while (!FUNC_15(VAR_10))
    {
        FUNC_3(VAR_2);

        FUNC_11(VAR_10);
        FUNC_14();
    }

    FUNC_13();
    FUNC_0(VAR_1);
}
