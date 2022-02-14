
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
 int FUNC_1 (int,int,int ,int,int*,int*) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int,int,int*,int*) ;
 int FUNC_7 (int,int*,int*) ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct roundingData*,int,int,int) ;
 int FUNC_11 (int,int ,int,int,int*,int*) ;

float64 FUNC_12( struct roundingData *VAR_3, float64 VAR_4, float64 VAR_5 )
{
    flag VAR_6, VAR_7, VAR_8;
    int16 VAR_9, VAR_10, VAR_11;
    bits64 VAR_12, VAR_13, VAR_14;
    bits64 VAR_15, VAR_16;
    bits64 VAR_17, VAR_18;

    VAR_12 = FUNC_4( VAR_4 );
    VAR_9 = FUNC_3( VAR_4 );
    VAR_6 = FUNC_5( VAR_4 );
    VAR_13 = FUNC_4( VAR_5 );
    VAR_10 = FUNC_3( VAR_5 );
    VAR_7 = FUNC_5( VAR_5 );
    VAR_8 = VAR_6 ^ VAR_7;
    if ( VAR_9 == 0x7FF ) {
        if ( VAR_12 ) return FUNC_9( VAR_4, VAR_5 );
        if ( VAR_10 == 0x7FF ) {
            if ( VAR_13 ) return FUNC_9( VAR_4, VAR_5 );
            VAR_3->exception |= VAR_2;
            return VAR_0;
        }
        return FUNC_8( VAR_8, 0x7FF, 0 );
    }
    if ( VAR_10 == 0x7FF ) {
        if ( VAR_13 ) return FUNC_9( VAR_4, VAR_5 );
        return FUNC_8( VAR_8, 0, 0 );
    }
    if ( VAR_10 == 0 ) {
        if ( VAR_13 == 0 ) {
            if ( ( VAR_9 | VAR_12 ) == 0 ) {
                VAR_3->exception |= VAR_2;
                return VAR_0;
            }
            VAR_3->exception |= VAR_1;
            return FUNC_8( VAR_8, 0x7FF, 0 );
        }
        FUNC_7( VAR_13, &VAR_10, &VAR_13 );
    }
    if ( VAR_9 == 0 ) {
        if ( VAR_12 == 0 ) return FUNC_8( VAR_8, 0, 0 );
        FUNC_7( VAR_12, &VAR_9, &VAR_12 );
    }
    VAR_11 = VAR_9 - VAR_10 + 0x3FD;
    VAR_12 = ( VAR_12 | FUNC_0( 0x0010000000000000 ) )<<10;
    VAR_13 = ( VAR_13 | FUNC_0( 0x0010000000000000 ) )<<11;
    if ( VAR_13 <= ( VAR_12 + VAR_12 ) ) {
        VAR_12 >>= 1;
        ++VAR_11;
    }
    VAR_14 = FUNC_2( VAR_12, 0, VAR_13 );
    if ( ( VAR_14 & 0x1FF ) <= 2 ) {
        FUNC_6( VAR_13, VAR_14, &VAR_17, &VAR_18 );
        FUNC_11( VAR_12, 0, VAR_17, VAR_18, &VAR_15, &VAR_16 );
        while ( (sbits64) VAR_15 < 0 ) {
            --VAR_14;
            FUNC_1( VAR_15, VAR_16, 0, VAR_13, &VAR_15, &VAR_16 );
        }
        VAR_14 |= ( VAR_16 != 0 );
    }
    return FUNC_10( VAR_3, VAR_8, VAR_11, VAR_14 );

}
