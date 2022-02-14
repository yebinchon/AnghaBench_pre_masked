
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int,char*,int *,int *) ;
 int FUNC_6 (int *,int*,int*) ;
 int VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int (*) (int *,int,int)) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int VAR_6 ;
 int FUNC_18 (int *,int,int) ;
 int VAR_7 ;

int FUNC_19(int VAR_8, char *VAR_9[])
{
    GLFWwindow* VAR_10;
    int VAR_11, VAR_12;

    if( !FUNC_7() )
    {
        FUNC_3( VAR_7, "Failed to initialize GLFW\n" );
        FUNC_2( VAR_0 );
    }

    FUNC_15(VAR_2, 16);
    FUNC_15(VAR_3, VAR_4);

    VAR_10 = FUNC_5( 300, 300, "Gears", ((void*)0), ((void*)0) );
    if (!VAR_10)
    {
        FUNC_3( VAR_7, "Failed to open GLFW window\n" );
        FUNC_14();
        FUNC_2( VAR_0 );
    }


    FUNC_10(VAR_10, FUNC_18);
    FUNC_11(VAR_10, VAR_6);

    FUNC_8(VAR_10);
    FUNC_4(VAR_5);
    FUNC_13( 1 );

    FUNC_6(VAR_10, &VAR_11, &VAR_12);
    FUNC_18(VAR_10, VAR_11, VAR_12);


    FUNC_17();


    while( !FUNC_16(VAR_10) )
    {

        FUNC_1();


        FUNC_0();


        FUNC_12(VAR_10);
        FUNC_9();
    }


    FUNC_14();


    FUNC_2( VAR_1 );
}
