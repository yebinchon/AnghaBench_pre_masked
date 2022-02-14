
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int exception; } ;
typedef scalar_t__ sbits64 ;
typedef int int16 ;
typedef int float64 ;
typedef scalar_t__ flag ;
typedef int bits64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,int*,int*) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int,int,int*,int*) ;
 int FUNC_8 (int,int*,int*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct roundingData*,int ,int,int) ;
 int FUNC_11 (int,int,int*) ;
 int FUNC_12 (int ,int,int,int*,int*) ;
 int FUNC_13 (int,int ,int,int,int*,int*) ;

float64 FUNC_14( struct roundingData *VAR_2, float64 VAR_3 )
{
    flag VAR_4;
    int16 VAR_5, VAR_6;
    bits64 VAR_7, VAR_8;
    bits64 VAR_9, VAR_10, VAR_11, VAR_12;


    VAR_7 = FUNC_5( VAR_3 );
    VAR_5 = FUNC_4( VAR_3 );
    VAR_4 = FUNC_6( VAR_3 );
    if ( VAR_5 == 0x7FF ) {
        if ( VAR_7 ) return FUNC_9( VAR_3, VAR_3 );
        if ( ! VAR_4 ) return VAR_3;
        VAR_2->exception |= VAR_1;
        return VAR_0;
    }
    if ( VAR_4 ) {
        if ( ( VAR_5 | VAR_7 ) == 0 ) return VAR_3;
        VAR_2->exception |= VAR_1;
        return VAR_0;
    }
    if ( VAR_5 == 0 ) {
        if ( VAR_7 == 0 ) return 0;
        FUNC_8( VAR_7, &VAR_5, &VAR_7 );
    }
    VAR_6 = ( ( VAR_5 - 0x3FF )>>1 ) + 0x3FE;
    VAR_7 |= FUNC_0( 0x0010000000000000 );
    VAR_8 = FUNC_3( VAR_5, VAR_7>>21 );
    VAR_8 <<= 31;
    VAR_7 <<= 9 - ( VAR_5 & 1 );
    VAR_8 = FUNC_2( VAR_7, 0, VAR_8 ) + VAR_8 + 2;
    if ( ( VAR_8 & 0x3FF ) <= 5 ) {
        if ( VAR_8 < 2 ) {
            VAR_8 = FUNC_0( 0xFFFFFFFFFFFFFFFF );
        }
        else {
            VAR_7 <<= 2;
            FUNC_7( VAR_8, VAR_8, &VAR_11, &VAR_12 );
            FUNC_13( VAR_7, 0, VAR_11, VAR_12, &VAR_9, &VAR_10 );
            while ( (sbits64) VAR_9 < 0 ) {
                --VAR_8;
                FUNC_12( 0, VAR_8, 1, &VAR_11, &VAR_12 );
                VAR_12 |= 1;
                FUNC_1( VAR_9, VAR_10, VAR_11, VAR_12, &VAR_9, &VAR_10 );
            }
            VAR_8 |= ( ( VAR_9 | VAR_10 ) != 0 );
        }
    }
    FUNC_11( VAR_8, 1, &VAR_8 );
    return FUNC_10( VAR_2, 0, VAR_6, VAR_8 );

}
