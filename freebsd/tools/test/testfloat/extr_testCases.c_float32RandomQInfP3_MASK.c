
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef size_t int8 ;
typedef int float32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 () ;
 size_t FUNC_1 () ;

__attribute__((used)) static float32 FUNC_2( void )
{
    int8 VAR_5;

    VAR_5 = FUNC_1() % VAR_1;
    return
          ( ( (uint32) ( FUNC_1() & 1 ) )<<31 )
        | ( ( ( ( (uint32) ( FUNC_0() & 0x1FF ) )<<23 )
                & VAR_3[ VAR_5 ] )
            + VAR_4[ VAR_5 ]
          )
        | ( ( VAR_2[ FUNC_1() % VAR_0 ]
                + VAR_2[ FUNC_1() % VAR_0 ] )
            & 0x007FFFFF );

}
