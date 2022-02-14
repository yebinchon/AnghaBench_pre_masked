
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int int8 ;
typedef int int32 ;
typedef int float64 ;
typedef int flag ;
typedef int bits64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;

float64 FUNC_2( int32 VAR_0 )
{
    flag VAR_1;
    uint32 VAR_2;
    int8 VAR_3;
    bits64 VAR_4;

    if ( VAR_0 == 0 ) return 0;
    VAR_1 = ( VAR_0 < 0 );
    VAR_2 = VAR_1 ? - VAR_0 : VAR_0;
    VAR_3 = FUNC_0( VAR_2 ) + 21;
    VAR_4 = VAR_2;
    return FUNC_1( VAR_1, 0x432 - VAR_3, VAR_4<<VAR_3 );

}
