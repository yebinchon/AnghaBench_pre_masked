
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int exception; } ;
typedef scalar_t__ sbits64 ;
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
 int FUNC_4 (int,int,int*,int*) ;
 int FUNC_5 (int,int*,int*) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct roundingData*,int,int,int) ;

float64 FUNC_9( struct roundingData *VAR_2, float64 VAR_3, float64 VAR_4 )
{
    flag VAR_5, VAR_6, VAR_7;
    int16 VAR_8, VAR_9, VAR_10;
    bits64 VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_11 = FUNC_2( VAR_3 );
    VAR_8 = FUNC_1( VAR_3 );
    VAR_5 = FUNC_3( VAR_3 );
    VAR_12 = FUNC_2( VAR_4 );
    VAR_9 = FUNC_1( VAR_4 );
    VAR_6 = FUNC_3( VAR_4 );
    VAR_7 = VAR_5 ^ VAR_6;
    if ( VAR_8 == 0x7FF ) {
        if ( VAR_11 || ( ( VAR_9 == 0x7FF ) && VAR_12 ) ) {
            return FUNC_7( VAR_3, VAR_4 );
        }
        if ( ( VAR_9 | VAR_12 ) == 0 ) {
            VAR_2->exception |= VAR_1;
            return VAR_0;
        }
        return FUNC_6( VAR_7, 0x7FF, 0 );
    }
    if ( VAR_9 == 0x7FF ) {
        if ( VAR_12 ) return FUNC_7( VAR_3, VAR_4 );
        if ( ( VAR_8 | VAR_11 ) == 0 ) {
            VAR_2->exception |= VAR_1;
            return VAR_0;
        }
        return FUNC_6( VAR_7, 0x7FF, 0 );
    }
    if ( VAR_8 == 0 ) {
        if ( VAR_11 == 0 ) return FUNC_6( VAR_7, 0, 0 );
        FUNC_5( VAR_11, &VAR_8, &VAR_11 );
    }
    if ( VAR_9 == 0 ) {
        if ( VAR_12 == 0 ) return FUNC_6( VAR_7, 0, 0 );
        FUNC_5( VAR_12, &VAR_9, &VAR_12 );
    }
    VAR_10 = VAR_8 + VAR_9 - 0x3FF;
    VAR_11 = ( VAR_11 | FUNC_0( 0x0010000000000000 ) )<<10;
    VAR_12 = ( VAR_12 | FUNC_0( 0x0010000000000000 ) )<<11;
    FUNC_4( VAR_11, VAR_12, &VAR_13, &VAR_14 );
    VAR_13 |= ( VAR_14 != 0 );
    if ( 0 <= (sbits64) ( VAR_13<<1 ) ) {
        VAR_13 <<= 1;
        --VAR_10;
    }
    return FUNC_8( VAR_2, VAR_7, VAR_10, VAR_13 );

}
