
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int dummy; } ;
typedef int float64 ;
typedef scalar_t__ flag ;


 int FUNC_0 (struct roundingData*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct roundingData*,int ,int ,scalar_t__) ;

float64 FUNC_3( struct roundingData *VAR_0, float64 VAR_1, float64 VAR_2 )
{
    flag VAR_3, VAR_4;

    VAR_3 = FUNC_1( VAR_1 );
    VAR_4 = FUNC_1( VAR_2 );
    if ( VAR_3 == VAR_4 ) {
        return FUNC_2( VAR_0, VAR_1, VAR_2, VAR_3 );
    }
    else {
        return FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3 );
    }

}
