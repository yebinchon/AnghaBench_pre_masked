
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int high; } ;
typedef TYPE_1__ float64 ;


 TYPE_1__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__ FUNC_3 (int ) ;

float64 FUNC_4( float64 VAR_0, float64 VAR_1 )
{




    VAR_1.high ^= 0x80000000;

    return
        FUNC_3(
            FUNC_2( FUNC_1( VAR_0 ), FUNC_1( VAR_1 ) ) );

}
