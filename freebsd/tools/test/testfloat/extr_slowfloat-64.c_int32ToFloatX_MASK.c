
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int a0; scalar_t__ a1; } ;
struct TYPE_5__ {int sign; int exp; TYPE_1__ sig; void* isZero; void* isInf; void* isNaN; } ;
typedef TYPE_2__ floatX ;
typedef int bits64 ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;

__attribute__((used)) static floatX FUNC_1( int32 VAR_2 )
{
    floatX VAR_3;

    VAR_3.isNaN = VAR_0;
    VAR_3.isInf = VAR_0;
    VAR_3.sign = ( VAR_2 < 0 );
    VAR_3.sig.a1 = 0;
    VAR_3.sig.a0 = VAR_3.sign ? - (bits64) VAR_2 : VAR_2;
    if ( VAR_2 == 0 ) {
        VAR_3.isZero = VAR_1;
        return VAR_3;
    }
    VAR_3.isZero = VAR_0;
    VAR_3.sig.a0 <<= 24;
    VAR_3.exp = 31;
    while ( VAR_3.sig.a0 < FUNC_0( 0x0080000000000000 ) ) {
        VAR_3.sig.a0 <<= 1;
        --VAR_3.exp;
    }
    return VAR_3;

}
