
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int,int,char*,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int (*) (int *,int ,int )) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (double) ;
 int FUNC_14 (int *,int,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int *) ;
 int VAR_5 ;
 int FUNC_19 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_20 (int *,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

int FUNC_21( void )
{
   GLFWwindow* VAR_11;


   if( !FUNC_6() )
      FUNC_1( VAR_0 );

   VAR_11 = FUNC_3( 400, 400, "Boing (classic Amiga demo)", ((void*)0), ((void*)0) );
   if (!VAR_11)
   {
       FUNC_17();
       FUNC_1( VAR_0 );
   }

   FUNC_14(VAR_11, 1, 1);

   FUNC_10(VAR_11, FUNC_20);
   FUNC_11(VAR_11, VAR_6);
   FUNC_12(VAR_11, VAR_7);
   FUNC_9(VAR_11, VAR_2);

   FUNC_7(VAR_11);
   FUNC_2(VAR_4);
   FUNC_16( 1 );

   FUNC_4(VAR_11, &VAR_10, &VAR_5);
   FUNC_20(VAR_11, VAR_10, VAR_5);

   FUNC_13( 0.0 );

   FUNC_19();


   for (;;)
   {

       VAR_8 = FUNC_5();
       VAR_3 = VAR_8 - VAR_9;
       VAR_9 = VAR_8;


       FUNC_0();


       FUNC_15(VAR_11);
       FUNC_8();


       if (FUNC_18(VAR_11))
           break;
   }

   FUNC_17();
   FUNC_1( VAR_1 );
}
