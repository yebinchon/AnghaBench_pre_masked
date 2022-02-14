
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int,char*,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int (*) (int *,int ,int )) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int (*) (int *)) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_19 (int *) ;

int FUNC_20(void)
{
    GLFWwindow* VAR_14;


    if (!FUNC_7())
    {
        FUNC_1(VAR_12, "Failed to initialize GLFW\n");
        FUNC_0(VAR_0);
    }

    FUNC_17(VAR_4, 4);


    VAR_14 = FUNC_5(500, 500, "Split view demo", ((void*)0), ((void*)0));
    if (!VAR_14)
    {
        FUNC_1(VAR_12, "Failed to open GLFW window\n");

        FUNC_15();
        FUNC_0(VAR_0);
    }


    FUNC_10(VAR_14, FUNC_2);
    FUNC_13(VAR_14, FUNC_19);
    FUNC_9(VAR_14, VAR_6);
    FUNC_12(VAR_14, VAR_11);
    FUNC_11(VAR_14, VAR_10);


    FUNC_8(VAR_14);
    FUNC_4(VAR_8);
    FUNC_14(1);

    if (VAR_2 || VAR_3)
        FUNC_3(VAR_5);

    FUNC_6(VAR_14, &VAR_13, &VAR_9);
    FUNC_2(VAR_14, VAR_13, VAR_9);


    for (;;)
    {

        if (VAR_7)
            FUNC_19(VAR_14);


        FUNC_16();


        if (FUNC_18(VAR_14))
            break;
    }


    FUNC_15();

    FUNC_0(VAR_1);
}
