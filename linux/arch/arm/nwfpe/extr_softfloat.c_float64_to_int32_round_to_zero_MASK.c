
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int int16 ;
typedef int float64 ;
typedef int flag ;
typedef int bits64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

int32 FUNC_5( float64 VAR_2 )
{
    flag VAR_3;
    int16 VAR_4, VAR_5;
    bits64 VAR_6, VAR_7;
    int32 VAR_8;

    VAR_6 = FUNC_2( VAR_2 );
    VAR_4 = FUNC_1( VAR_2 );
    VAR_3 = FUNC_3( VAR_2 );
    VAR_5 = 0x433 - VAR_4;
    if ( VAR_5 < 21 ) {
        if ( ( VAR_4 == 0x7FF ) && VAR_6 ) VAR_3 = 0;
        goto invalid;
    }
    else if ( 52 < VAR_5 ) {
        if ( VAR_4 || VAR_6 ) FUNC_4( VAR_0 );
        return 0;
    }
    VAR_6 |= FUNC_0( 0x0010000000000000 );
    VAR_7 = VAR_6;
    VAR_6 >>= VAR_5;
    VAR_8 = VAR_6;
    if ( VAR_3 ) VAR_8 = - VAR_8;
    if ( ( VAR_8 < 0 ) ^ VAR_3 ) {
 invalid:
        FUNC_4( VAR_1 );
        return VAR_3 ? 0x80000000 : 0x7FFFFFFF;
    }
    if ( ( VAR_6<<VAR_5 ) != VAR_7 ) {
        FUNC_4( VAR_0 );
    }
    return VAR_8;

}
