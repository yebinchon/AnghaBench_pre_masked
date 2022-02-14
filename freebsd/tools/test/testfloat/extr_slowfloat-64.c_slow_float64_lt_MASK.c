
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ isNaN; } ;
typedef TYPE_1__ floatX ;
typedef int float64 ;
typedef int flag ;


 TYPE_1__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;

flag FUNC_2( float64 VAR_2, float64 VAR_3 )
{
    floatX VAR_4, VAR_5;

    VAR_4 = FUNC_0( VAR_2 );
    VAR_5 = FUNC_0( VAR_3 );
    if ( VAR_4.isNaN || VAR_5.isNaN ) {
        VAR_1 |= VAR_0;
    }
    return FUNC_1( VAR_4, VAR_5 );

}
