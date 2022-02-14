
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
typedef size_t int8 ;
typedef int float64 ;
struct TYPE_2__ {int low; int high; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static float64 FUNC_3( void )
{
    int8 VAR_5, VAR_6;
    uint32 VAR_7, VAR_8, VAR_9;
    int8 VAR_10;
    float64 VAR_11;

    VAR_5 = FUNC_2() % VAR_0;
    VAR_6 = FUNC_2() % VAR_0;
    VAR_7 = VAR_2[ VAR_5 ].low;
    VAR_8 = VAR_2[ VAR_6 ].low;
    VAR_9 = VAR_7 + VAR_8;
    VAR_10 = FUNC_2() % VAR_1;
    FUNC_0(
        VAR_11,
          ( ( (uint32) ( FUNC_2() & 1 ) )<<31 )
        | ( ( ( ( (uint32) ( FUNC_1() & 0xFFF ) )<<20 )
                & VAR_3[ VAR_10 ] )
            + VAR_4[ VAR_10 ]
          )
        | ( ( VAR_2[ VAR_5 ].high
                + VAR_2[ VAR_6 ].high
                + ( VAR_9 < VAR_7 )
              )
            & 0x000FFFFF
          ),
        VAR_9
    );
    return VAR_11;

}
