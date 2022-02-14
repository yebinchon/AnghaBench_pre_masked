
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef size_t int8 ;
typedef int float64 ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static float64 FUNC_4( void )
{
    int8 VAR_3;
    float64 VAR_4;

    VAR_3 = FUNC_3() % VAR_0;
    FUNC_0(
        VAR_4,
          ( ( (uint32) ( FUNC_3() & 1 ) )<<31 )
        | ( ( ( ( (uint32) ( FUNC_1() & 0xFFF ) )<<20 )
                & VAR_1[ VAR_3 ] )
            + VAR_2[ VAR_3 ]
          )
        | ( FUNC_2() & 0x000FFFFF ),
        FUNC_2()
    );
    return VAR_4;

}
