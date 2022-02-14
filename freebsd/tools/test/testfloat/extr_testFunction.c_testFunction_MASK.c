
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8 ;
typedef int int8 ;
struct TYPE_2__ {int roundingMode; int roundingPrecision; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (size_t,int,int) ;

void
 FUNC_1(
     uint8 VAR_2, int8 VAR_3, int8 VAR_4 )
{
    int8 VAR_5, VAR_6;

    VAR_5 = 32;
    for (;;) {
        if ( ! VAR_1[ VAR_2 ].roundingPrecision ) {
            VAR_5 = 0;
        }
        else if ( VAR_3 ) {
            VAR_5 = VAR_3;
        }
        for ( VAR_6 = 1;
              VAR_6 < VAR_0;
              ++VAR_6
            ) {
            if ( ! VAR_1[ VAR_2 ].roundingMode ) {
                VAR_6 = 0;
            }
            else if ( VAR_4 ) {
                VAR_6 = VAR_4;
            }
            FUNC_0(
                VAR_2, VAR_5, VAR_6 );
            if ( VAR_4 || ! VAR_6 ) break;
        }
        if ( VAR_3 || ! VAR_5 ) break;
        if ( VAR_5 == 80 ) {
            break;
        }
        else if ( VAR_5 == 64 ) {
            VAR_5 = 80;
        }
        else if ( VAR_5 == 32 ) {
            VAR_5 = 64;
        }
    }

}
