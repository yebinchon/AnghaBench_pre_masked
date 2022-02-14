
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float32 ;


 size_t VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 () ;
 size_t FUNC_1 () ;

__attribute__((used)) static float32 FUNC_2( void )
{

    return
          VAR_1[ FUNC_1() % VAR_0 ]
        | ( FUNC_0() & 0x007FFFFF );

}
