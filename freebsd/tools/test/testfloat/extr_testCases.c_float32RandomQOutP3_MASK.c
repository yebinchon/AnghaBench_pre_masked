
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 size_t FUNC_0 () ;

__attribute__((used)) static float32 FUNC_1( void )
{

    return
          VAR_3[ FUNC_0() % VAR_1 ]
        | ( ( VAR_2[ FUNC_0() % VAR_0 ]
                + VAR_2[ FUNC_0() % VAR_0 ] )
            & 0x007FFFFF );

}
