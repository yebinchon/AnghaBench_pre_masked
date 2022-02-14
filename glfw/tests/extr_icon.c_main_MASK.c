
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int,int,char*,int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int VAR_5 ;
 int FUNC_13 (int *,int ) ;
 int VAR_6 ;

int FUNC_14(int VAR_7, char** VAR_8)
{
    GLFWwindow* VAR_9;

    if (!FUNC_6())
    {
        FUNC_1(VAR_6, "Failed to initialize GLFW\n");
        FUNC_0(VAR_0);
    }

    VAR_9 = FUNC_4(200, 200, "Window Icon", ((void*)0), ((void*)0));
    if (!VAR_9)
    {
        FUNC_10();

        FUNC_1(VAR_6, "Failed to open GLFW window\n");
        FUNC_0(VAR_0);
    }

    FUNC_7(VAR_9);
    FUNC_3(VAR_4);

    FUNC_8(VAR_9, VAR_5);
    FUNC_13(VAR_9, VAR_3);

    while (!FUNC_12(VAR_9))
    {
        FUNC_2(VAR_2);
        FUNC_9(VAR_9);
        FUNC_11();
    }

    FUNC_5(VAR_9);
    FUNC_10();
    FUNC_0(VAR_1);
}
