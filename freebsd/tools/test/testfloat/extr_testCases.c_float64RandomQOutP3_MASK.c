
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef size_t int8 ;
typedef int float64 ;
struct TYPE_2__ {scalar_t__ low; int high; } ;


 int FUNC_0 (int ,int,scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 size_t FUNC_1 () ;

__attribute__((used)) static float64 FUNC_2( void )
{
    int8 VAR_4, VAR_5;
    uint32 VAR_6, VAR_7, VAR_8;
    float64 VAR_9;

    VAR_4 = FUNC_1() % VAR_0;
    VAR_5 = FUNC_1() % VAR_0;
    VAR_6 = VAR_2[ VAR_4 ].low;
    VAR_7 = VAR_2[ VAR_5 ].low;
    VAR_8 = VAR_6 + VAR_7;
    FUNC_0(
        VAR_9,
          VAR_3[ FUNC_1() % VAR_1 ]
        | ( ( VAR_2[ VAR_4 ].high
                + VAR_2[ VAR_5 ].high
                + ( VAR_8 < VAR_6 )
              )
            & 0x000FFFFF
          ),
        VAR_8
    );
    return VAR_9;

}
