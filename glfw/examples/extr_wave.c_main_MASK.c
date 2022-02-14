
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 double VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int,int,char*,int *,int *) ;
 int FUNC_7 (int *,int*,int*) ;
 int VAR_6 ;
 double FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int (*) (int *,int,int)) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_24(int VAR_10, char* VAR_11[])
{
    GLFWwindow* VAR_12;
    double VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17;

    FUNC_13(VAR_5);

    if (!FUNC_9())
        FUNC_3(VAR_0);

    VAR_12 = FUNC_6(640, 480, "Wave Simulation", ((void*)0), ((void*)0));
    if (!VAR_12)
    {
        FUNC_19();
        FUNC_3(VAR_0);
    }

    FUNC_15(VAR_12, VAR_7);
    FUNC_14(VAR_12, FUNC_4);
    FUNC_16(VAR_12, VAR_8);
    FUNC_12(VAR_12, VAR_3);
    FUNC_17(VAR_12, VAR_9);

    FUNC_10(VAR_12);
    FUNC_5(VAR_6);
    FUNC_18(1);

    FUNC_7(VAR_12, &VAR_16, &VAR_17);
    FUNC_4(VAR_12, VAR_16, VAR_17);


    FUNC_22();


    FUNC_23();
    FUNC_21();
    FUNC_0();


    VAR_15 = FUNC_8() - 0.01;

    while (!FUNC_20(VAR_12))
    {
        VAR_13 = FUNC_8();
        VAR_14 = VAR_13 - VAR_15;
        VAR_15 = VAR_13;


        while (VAR_14 > 0.f)
        {

            VAR_4 = VAR_14 > VAR_2 ? VAR_2 : VAR_14;
            VAR_14 -= VAR_4;


            FUNC_1();
        }


        FUNC_0();


        FUNC_2(VAR_12);

        FUNC_11();
    }

    FUNC_19();
    FUNC_3(VAR_1);
}
