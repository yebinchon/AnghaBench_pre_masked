
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
 int FUNC_2 (float,float,float,float) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int,char*,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int*,int*) ;
 int VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (double) ;
 int FUNC_15 (int *) ;
 int VAR_5 ;
 float FUNC_16 () ;
 scalar_t__ FUNC_17 (float) ;
 int FUNC_18 (unsigned int) ;
 scalar_t__ FUNC_19 (int *) ;

int FUNC_20(void)
{
    GLFWwindow* VAR_6;

    FUNC_18((unsigned int) FUNC_19(((void*)0)));

    FUNC_10(VAR_3);

    if (!FUNC_8())
        FUNC_0(VAR_0);

    VAR_6 = FUNC_5(640, 480, "Event Wait Timeout Test", ((void*)0), ((void*)0));
    if (!VAR_6)
    {
        FUNC_13();
        FUNC_0(VAR_0);
    }

    FUNC_9(VAR_6);
    FUNC_4(VAR_4);
    FUNC_11(VAR_6, VAR_5);

    while (!FUNC_15(VAR_6))
    {
        int VAR_7, VAR_8;
        float VAR_9 = FUNC_16(), VAR_10 = FUNC_16(), VAR_11 = FUNC_16();
        float VAR_12 = (float) FUNC_17(VAR_9 * VAR_9 + VAR_10 * VAR_10 + VAR_11 * VAR_11);

        FUNC_7(VAR_6, &VAR_7, &VAR_8);

        FUNC_3(0, 0, VAR_7, VAR_8);
        FUNC_2(VAR_9 / VAR_12, VAR_10 / VAR_12, VAR_11 / VAR_12, 1.f);
        FUNC_1(VAR_2);
        FUNC_12(VAR_6);

        FUNC_14(1.0);
    }

    FUNC_6(VAR_6);

    FUNC_13();
    FUNC_0(VAR_1);
}
