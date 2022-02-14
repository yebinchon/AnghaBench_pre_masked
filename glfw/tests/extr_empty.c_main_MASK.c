
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thrd_t ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (float,float,float,float) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int,int,char*,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int*,int*) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int *) ;
 int VAR_6 ;
 float FUNC_18 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_19 (float) ;
 int FUNC_20 (unsigned int) ;
 int VAR_8 ;
 scalar_t__ FUNC_21 (int *,int ,int *) ;
 int FUNC_22 (int ,int*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_23 (int *) ;

int FUNC_24(void)
{
    int VAR_11;
    thrd_t VAR_12;
    GLFWwindow* VAR_13;

    FUNC_20((unsigned int) FUNC_23(((void*)0)));

    FUNC_12(VAR_4);

    if (!FUNC_10())
        FUNC_0(VAR_0);

    VAR_13 = FUNC_6(640, 480, "Empty Event Test", ((void*)0), ((void*)0));
    if (!VAR_13)
    {
        FUNC_15();
        FUNC_0(VAR_0);
    }

    FUNC_11(VAR_13);
    FUNC_5(VAR_5);
    FUNC_13(VAR_13, VAR_6);

    if (FUNC_21(&VAR_12, VAR_10, ((void*)0)) != VAR_9)
    {
        FUNC_1(VAR_8, "Failed to create secondary thread\n");

        FUNC_15();
        FUNC_0(VAR_0);
    }

    while (VAR_7)
    {
        int VAR_14, VAR_15;
        float VAR_16 = FUNC_18(), VAR_17 = FUNC_18(), VAR_18 = FUNC_18();
        float VAR_19 = (float) FUNC_19(VAR_16 * VAR_16 + VAR_17 * VAR_17 + VAR_18 * VAR_18);

        FUNC_8(VAR_13, &VAR_14, &VAR_15);

        FUNC_4(0, 0, VAR_14, VAR_15);
        FUNC_3(VAR_16 / VAR_19, VAR_17 / VAR_19, VAR_18 / VAR_19, 1.f);
        FUNC_2(VAR_3);
        FUNC_14(VAR_13);

        FUNC_16();

        if (FUNC_17(VAR_13))
            VAR_7 = VAR_2;
    }

    FUNC_9(VAR_13);
    FUNC_22(VAR_12, &VAR_11);
    FUNC_7(VAR_13);

    FUNC_15();
    FUNC_0(VAR_1);
}
