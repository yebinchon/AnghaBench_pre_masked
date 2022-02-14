
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int dummy; } ;
typedef int int32 ;
typedef scalar_t__ int16 ;
typedef int float64 ;
typedef scalar_t__ flag ;
typedef int bits64 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct roundingData*,scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__,int *) ;

int32 FUNC_5( struct roundingData *VAR_0, float64 VAR_1 )
{
    flag VAR_2;
    int16 VAR_3, VAR_4;
    bits64 VAR_5;

    VAR_5 = FUNC_2( VAR_1 );
    VAR_3 = FUNC_1( VAR_1 );
    VAR_2 = 0;

    if ( VAR_3 ) VAR_5 |= FUNC_0( 0x0010000000000000 );
    VAR_4 = 0x42C - VAR_3;
    if ( 0 < VAR_4 ) FUNC_4( VAR_5, VAR_4, &VAR_5 );
    return FUNC_3( VAR_0, VAR_2, VAR_5 );
}
