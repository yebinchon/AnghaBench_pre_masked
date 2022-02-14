
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_9__ {int a1; scalar_t__ a0; } ;
struct TYPE_8__ {int exp; scalar_t__ isZero; TYPE_2__ sig; scalar_t__ isInf; scalar_t__ isNaN; } ;
typedef TYPE_1__ floatX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_0 (int ,TYPE_1__) ;
 TYPE_2__ FUNC_1 (TYPE_2__,int) ;

__attribute__((used)) static floatX FUNC_2( floatX VAR_2 )
{
    int32 VAR_3, VAR_4;

    if ( VAR_2.isNaN || VAR_2.isInf ) return VAR_2;
    VAR_3 = 112 - VAR_2.exp;
    if ( VAR_3 <= 0 ) return VAR_2;
    if ( 119 < VAR_3 ) {
        VAR_2.exp = 112;
        VAR_2.sig.a1 = ! VAR_2.isZero;
        VAR_2.sig.a0 = 0;
    }
    else {
        while ( 0 < VAR_3 ) {
            VAR_2.sig = FUNC_1( VAR_2.sig, 1 );
            ++VAR_2.exp;
            --VAR_3;
        }
    }
    VAR_2 = FUNC_0( VAR_0, VAR_2 );
    if ( ( VAR_2.sig.a0 == 0 ) && ( VAR_2.sig.a1 == 0 ) ) VAR_2.isZero = VAR_1;
    return VAR_2;

}
