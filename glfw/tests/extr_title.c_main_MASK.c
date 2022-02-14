
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int,int,char*,int *,int *) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;

int FUNC_12(void)
{
    GLFWwindow* VAR_5;

    FUNC_6(VAR_3);

    if (!FUNC_4())
        FUNC_0(VAR_0);

    VAR_5 = FUNC_3(400, 400, "English 日本語 русский язык 官話", ((void*)0), ((void*)0));
    if (!VAR_5)
    {
        FUNC_9();
        FUNC_0(VAR_0);
    }

    FUNC_5(VAR_5);
    FUNC_2(VAR_4);
    FUNC_8(1);

    while (!FUNC_11(VAR_5))
    {
        FUNC_1(VAR_2);
        FUNC_7(VAR_5);
        FUNC_10();
    }

    FUNC_9();
    FUNC_0(VAR_1);
}
