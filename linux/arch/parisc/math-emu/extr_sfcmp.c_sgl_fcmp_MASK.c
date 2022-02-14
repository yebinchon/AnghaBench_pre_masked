
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (unsigned int) ;
 scalar_t__ FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (unsigned int) ;
 scalar_t__ FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int,unsigned int,int) ;
 int FUNC_15 (unsigned int) ;

int
FUNC_16 (sgl_floating_point * VAR_3, sgl_floating_point * VAR_4,
   unsigned int VAR_5, unsigned int *VAR_6)



    {
    register unsigned int VAR_7, VAR_8;
    register int VAR_9;


    VAR_7 = *VAR_3;
    VAR_8 = *VAR_4;




    if( (FUNC_8(VAR_7) == VAR_2)
        || (FUNC_8(VAR_8) == VAR_2) )
 {



        if( ( (FUNC_8(VAR_7) == VAR_2)
     && FUNC_9(VAR_7)
     && (FUNC_1(VAR_5) || FUNC_11(VAR_7)))
    ||
     ( (FUNC_8(VAR_8) == VAR_2)
     && FUNC_9(VAR_8)
     && (FUNC_1(VAR_5) || FUNC_11(VAR_8)) ) )
     {
     if( FUNC_3() ) {
      FUNC_6(FUNC_15(VAR_5));
  return(VAR_0);
     }
     else FUNC_5();
     FUNC_6(FUNC_15(VAR_5));
     return(VAR_1);
     }


        else if( ((FUNC_8(VAR_7) == VAR_2)
     && FUNC_9(VAR_7))
    ||
     ((FUNC_8(VAR_8) == VAR_2)
     && FUNC_9(VAR_8)) )
     {

     FUNC_6(FUNC_15(VAR_5));
     return(VAR_1);
     }

 }


    FUNC_14(VAR_7,VAR_8,VAR_9);
    if( VAR_9 < 0 )
        {


        if( FUNC_12(VAR_7)
   && FUNC_12(VAR_8) )
            {
     FUNC_6(FUNC_0(VAR_5));
     }
 else if( FUNC_10(VAR_7) )
     {
     FUNC_6(FUNC_4(VAR_5));
     }
 else
     {
     FUNC_6(FUNC_2(VAR_5));
     }
        }


    else if( FUNC_7(VAR_7) == FUNC_7(VAR_8) )
        {
        FUNC_6(FUNC_0(VAR_5));
        }
    else if( FUNC_13(VAR_7) )
        {

        if( FUNC_7(VAR_7) < FUNC_7(VAR_8) )
     {
     FUNC_6(FUNC_4(VAR_5));
     }
 else
     {
     FUNC_6(FUNC_2(VAR_5));
     }
 }
    else
        {



        if( FUNC_7(VAR_7) > FUNC_7(VAR_8) )
     {
     FUNC_6(FUNC_4(VAR_5));
     }
        else
     {
     FUNC_6(FUNC_2(VAR_5));
     }
        }
 return(VAR_1);
    }
