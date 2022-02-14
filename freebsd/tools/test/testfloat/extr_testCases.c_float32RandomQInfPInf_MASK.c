
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef size_t int8 ;
typedef int float32 ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static float32 FUNC_3( void )
{
    int8 VAR_3;

    VAR_3 = FUNC_2() % VAR_0;
    return
          ( ( (uint32) ( FUNC_2() & 1 ) )<<31 )
        | ( ( ( ( (uint32) ( FUNC_0() & 0x1FF ) )<<23 )
                & VAR_1[ VAR_3 ] )
            + VAR_2[ VAR_3 ]
          )
        | ( FUNC_1() & 0x007FFFFF );

}
