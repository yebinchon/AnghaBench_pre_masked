
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float64 ;


 int FUNC_0 (int ,int,int) ;
 size_t VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 () ;
 size_t FUNC_2 () ;

__attribute__((used)) static float64 FUNC_3( void )
{
    float64 VAR_2;

    FUNC_0(
        VAR_2,
          VAR_1[ FUNC_2() % VAR_0 ]
        | ( FUNC_1() & 0x000FFFFF ),
        FUNC_1()
    );
    return VAR_2;

}
