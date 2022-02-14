
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_5__ {int a1; int a0; } ;
struct TYPE_6__ {int exp; TYPE_1__ sig; int sign; } ;
typedef TYPE_2__ floatX ;
typedef scalar_t__ flag ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static floatX FUNC_1( flag VAR_4, floatX VAR_5 )
{
    int64 VAR_6;

    VAR_6 = VAR_5.sig.a1 & FUNC_0( 0x00FFFFFFFFFFFFFF );
    VAR_5.sig.a1 -= VAR_6;
    if ( VAR_6 ) {
        VAR_2 |= VAR_0;
        if ( VAR_4 ) VAR_2 |= VAR_1;
        switch ( VAR_3 ) {
         case 130:
            if ( VAR_6 < FUNC_0( 0x0080000000000000 ) ) goto noIncrement;
            if ( ( VAR_6 == FUNC_0( 0x0080000000000000 ) )
                 && ! ( VAR_5.sig.a1 & FUNC_0( 0x0100000000000000 ) ) ) {
                goto noIncrement;
            }
            break;
         case 129:
            goto noIncrement;
         case 131:
            if ( ! VAR_5.sign ) goto noIncrement;
            break;
         case 128:
            if ( VAR_5.sign ) goto noIncrement;
            break;
        }
        VAR_5.sig.a1 += FUNC_0( 0x0100000000000000 );
        VAR_5.sig.a0 += ( VAR_5.sig.a1 == 0 );
        if ( VAR_5.sig.a0 == FUNC_0( 0x0100000000000000 ) ) {
            VAR_5.sig.a0 = FUNC_0( 0x0080000000000000 );
            ++VAR_5.exp;
        }
    }
 noIncrement:
    return VAR_5;

}
