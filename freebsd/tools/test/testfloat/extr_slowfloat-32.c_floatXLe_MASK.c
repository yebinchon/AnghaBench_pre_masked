
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sign; scalar_t__ exp; int sig; scalar_t__ isZero; scalar_t__ isInf; scalar_t__ isNaN; } ;
typedef TYPE_1__ floatX ;
typedef scalar_t__ flag ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static flag FUNC_1( floatX VAR_2, floatX VAR_3 )
{

    if ( VAR_2.isNaN || VAR_3.isNaN ) return VAR_0;
    if ( VAR_2.isZero && VAR_3.isZero ) return VAR_1;
    if ( VAR_2.sign != VAR_3.sign ) return VAR_2.sign;
    if ( VAR_2.sign ) {
        if ( VAR_2.isInf || VAR_3.isZero ) return VAR_1;
        if ( VAR_3.isInf || VAR_2.isZero ) return VAR_0;
        if ( VAR_3.exp < VAR_2.exp ) return VAR_1;
        if ( VAR_2.exp < VAR_3.exp ) return VAR_0;
        return FUNC_0( VAR_3.sig, VAR_2.sig );
    }
    else {
        if ( VAR_3.isInf || VAR_2.isZero ) return VAR_1;
        if ( VAR_2.isInf || VAR_3.isZero ) return VAR_0;
        if ( VAR_2.exp < VAR_3.exp ) return VAR_1;
        if ( VAR_3.exp < VAR_2.exp ) return VAR_0;
        return FUNC_0( VAR_2.sig, VAR_3.sig );
    }

}
