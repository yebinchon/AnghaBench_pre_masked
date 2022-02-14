
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int exception; } ;
typedef scalar_t__ sbits32 ;
typedef int int16 ;
typedef int float32 ;
typedef int flag ;
typedef int bits64 ;
typedef int bits32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int,int*,int*) ;
 int FUNC_6 (struct roundingData*,int,int,int) ;
 int FUNC_7 (int ,int ) ;

float32 FUNC_8( struct roundingData *VAR_2, float32 VAR_3, float32 VAR_4 )
{
    flag VAR_5, VAR_6, VAR_7;
    int16 VAR_8, VAR_9, VAR_10;
    bits32 VAR_11, VAR_12;
    bits32 VAR_13;
    bits64 VAR_14, VAR_15, VAR_16;
    bits32 VAR_17;
    sbits32 VAR_18;

    VAR_11 = FUNC_3( VAR_3 );
    VAR_8 = FUNC_2( VAR_3 );
    VAR_5 = FUNC_4( VAR_3 );
    VAR_12 = FUNC_3( VAR_4 );
    VAR_9 = FUNC_2( VAR_4 );
    VAR_6 = FUNC_4( VAR_4 );
    if ( VAR_8 == 0xFF ) {
        if ( VAR_11 || ( ( VAR_9 == 0xFF ) && VAR_12 ) ) {
            return FUNC_7( VAR_3, VAR_4 );
        }
        VAR_2->exception |= VAR_1;
        return VAR_0;
    }
    if ( VAR_9 == 0xFF ) {
        if ( VAR_12 ) return FUNC_7( VAR_3, VAR_4 );
        return VAR_3;
    }
    if ( VAR_9 == 0 ) {
        if ( VAR_12 == 0 ) {
            VAR_2->exception |= VAR_1;
            return VAR_0;
        }
        FUNC_5( VAR_12, &VAR_9, &VAR_12 );
    }
    if ( VAR_8 == 0 ) {
        if ( VAR_11 == 0 ) return VAR_3;
        FUNC_5( VAR_11, &VAR_8, &VAR_11 );
    }
    VAR_10 = VAR_8 - VAR_9;
    VAR_11 |= 0x00800000;
    VAR_12 |= 0x00800000;
    if ( VAR_10 < 32 ) {
        VAR_11 <<= 8;
        VAR_12 <<= 8;
        if ( VAR_10 < 0 ) {
            if ( VAR_10 < -1 ) return VAR_3;
            VAR_11 >>= 1;
        }
        VAR_13 = ( VAR_12 <= VAR_11 );
        if ( VAR_13 ) VAR_11 -= VAR_12;
        if ( 0 < VAR_10 ) {
            bits64 VAR_19 = ( (bits64) VAR_11 )<<32;
            FUNC_0( VAR_19, VAR_12 );
            VAR_13 = VAR_19;
            VAR_13 >>= 32 - VAR_10;
            VAR_12 >>= 2;
            VAR_11 = ( ( VAR_11>>1 )<<( VAR_10 - 1 ) ) - VAR_12 * VAR_13;
        }
        else {
            VAR_11 >>= 2;
            VAR_12 >>= 2;
        }
    }
    else {
        if ( VAR_12 <= VAR_11 ) VAR_11 -= VAR_12;
        VAR_14 = ( (bits64) VAR_11 )<<40;
        VAR_15 = ( (bits64) VAR_12 )<<40;
        VAR_10 -= 64;
        while ( 0 < VAR_10 ) {
            VAR_16 = FUNC_1( VAR_14, 0, VAR_15 );
            VAR_16 = ( 2 < VAR_16 ) ? VAR_16 - 2 : 0;
            VAR_14 = - ( ( VAR_12 * VAR_16 )<<38 );
            VAR_10 -= 62;
        }
        VAR_10 += 64;
        VAR_16 = FUNC_1( VAR_14, 0, VAR_15 );
        VAR_16 = ( 2 < VAR_16 ) ? VAR_16 - 2 : 0;
        VAR_13 = VAR_16>>( 64 - VAR_10 );
        VAR_12 <<= 6;
        VAR_11 = ( ( VAR_14>>33 )<<( VAR_10 - 1 ) ) - VAR_12 * VAR_13;
    }
    do {
        VAR_17 = VAR_11;
        ++VAR_13;
        VAR_11 -= VAR_12;
    } while ( 0 <= (sbits32) VAR_11 );
    VAR_18 = VAR_11 + VAR_17;
    if ( ( VAR_18 < 0 ) || ( ( VAR_18 == 0 ) && ( VAR_13 & 1 ) ) ) {
        VAR_11 = VAR_17;
    }
    VAR_7 = ( (sbits32) VAR_11 < 0 );
    if ( VAR_7 ) VAR_11 = - VAR_11;
    return FUNC_6( VAR_2, VAR_5 ^ VAR_7, VAR_9, VAR_11 );

}
