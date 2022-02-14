
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_4__ {int a0; scalar_t__ a1; } ;
struct TYPE_5__ {int sign; int exp; TYPE_1__ sig; void* isNaN; void* isInf; void* isZero; } ;
typedef TYPE_2__ floatX ;
typedef int float64 ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;

__attribute__((used)) static floatX FUNC_1( float64 VAR_2 )
{
    int16 VAR_3;
    floatX VAR_4;

    VAR_4.isNaN = VAR_0;
    VAR_4.isInf = VAR_0;
    VAR_4.isZero = VAR_0;
    VAR_4.sign = ( ( VAR_2 & FUNC_0( 0x8000000000000000 ) ) != 0 );
    VAR_3 = ( VAR_2>>52 ) & 0x7FF;
    VAR_4.sig.a1 = 0;
    VAR_4.sig.a0 = VAR_2 & FUNC_0( 0x000FFFFFFFFFFFFF );
    if ( VAR_3 == 0 ) {
        if ( VAR_4.sig.a0 == 0 ) {
            VAR_4.isZero = VAR_1;
        }
        else {
            VAR_3 = 1 - 0x3FF;
            do {
                VAR_4.sig.a0 <<= 1;
                --VAR_3;
            } while ( VAR_4.sig.a0 < FUNC_0( 0x0010000000000000 ) );
            VAR_4.exp = VAR_3;
        }
    }
    else if ( VAR_3 == 0x7FF ) {
        if ( VAR_4.sig.a0 == 0 ) {
            VAR_4.isInf = VAR_1;
        }
        else {
            VAR_4.isNaN = VAR_1;
        }
    }
    else {
        VAR_4.exp = VAR_3 - 0x3FF;
        VAR_4.sig.a0 |= FUNC_0( 0x0010000000000000 );
    }
    VAR_4.sig.a0 <<= 3;
    return VAR_4;

}
