
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
typedef int float32 ;


 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static floatX FUNC_0( float32 VAR_2 )
{
    int16 VAR_3;
    floatX VAR_4;

    VAR_4.isNaN = VAR_0;
    VAR_4.isInf = VAR_0;
    VAR_4.isZero = VAR_0;
    VAR_4.sign = ( ( VAR_2 & 0x80000000 ) != 0 );
    VAR_3 = ( VAR_2>>23 ) & 0xFF;
    VAR_4.sig.a1 = 0;
    VAR_4.sig.a0 = VAR_2 & 0x007FFFFF;
    if ( VAR_3 == 0 ) {
        if ( VAR_4.sig.a0 == 0 ) {
            VAR_4.isZero = VAR_1;
        }
        else {
            VAR_3 = 1 - 0x7F;
            do {
                VAR_4.sig.a0 <<= 1;
                --VAR_3;
            } while ( VAR_4.sig.a0 < 0x00800000 );
            VAR_4.exp = VAR_3;
        }
    }
    else if ( VAR_3 == 0xFF ) {
        if ( VAR_4.sig.a0 == 0 ) {
            VAR_4.isInf = VAR_1;
        }
        else {
            VAR_4.isNaN = VAR_1;
        }
    }
    else {
        VAR_4.sig.a0 |= 0x00800000;
        VAR_4.exp = VAR_3 - 0x7F;
    }
    return VAR_4;

}
