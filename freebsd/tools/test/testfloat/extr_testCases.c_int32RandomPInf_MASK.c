
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbits32 ;
typedef size_t int8 ;
typedef int int32 ;


 size_t VAR_0 ;
 int* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 () ;
 size_t FUNC_1 () ;

__attribute__((used)) static int32 FUNC_2( void )
{
    int8 VAR_3;

    VAR_3 = FUNC_1() % VAR_0;
    return
        (sbits32) (
              ( FUNC_0() & VAR_1[ VAR_3 ] )
            + VAR_2[ VAR_3 ]
        );

}
