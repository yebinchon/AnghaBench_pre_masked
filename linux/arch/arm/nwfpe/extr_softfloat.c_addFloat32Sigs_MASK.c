
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int dummy; } ;
typedef scalar_t__ sbits32 ;
typedef int int16 ;
typedef int float32 ;
typedef int flag ;
typedef int bits32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct roundingData*,int ,int,int) ;
 int FUNC_5 (int,int,int*) ;

__attribute__((used)) static float32 FUNC_6( struct roundingData *VAR_0, float32 VAR_1, float32 VAR_2, flag VAR_3 )
{
    int16 VAR_4, VAR_5, VAR_6;
    bits32 VAR_7, VAR_8, VAR_9;
    int16 VAR_10;

    VAR_7 = FUNC_1( VAR_1 );
    VAR_4 = FUNC_0( VAR_1 );
    VAR_8 = FUNC_1( VAR_2 );
    VAR_5 = FUNC_0( VAR_2 );
    VAR_10 = VAR_4 - VAR_5;
    VAR_7 <<= 6;
    VAR_8 <<= 6;
    if ( 0 < VAR_10 ) {
        if ( VAR_4 == 0xFF ) {
            if ( VAR_7 ) return FUNC_3( VAR_1, VAR_2 );
            return VAR_1;
        }
        if ( VAR_5 == 0 ) {
            --VAR_10;
        }
        else {
            VAR_8 |= 0x20000000;
        }
        FUNC_5( VAR_8, VAR_10, &VAR_8 );
        VAR_6 = VAR_4;
    }
    else if ( VAR_10 < 0 ) {
        if ( VAR_5 == 0xFF ) {
            if ( VAR_8 ) return FUNC_3( VAR_1, VAR_2 );
            return FUNC_2( VAR_3, 0xFF, 0 );
        }
        if ( VAR_4 == 0 ) {
            ++VAR_10;
        }
        else {
            VAR_7 |= 0x20000000;
        }
        FUNC_5( VAR_7, - VAR_10, &VAR_7 );
        VAR_6 = VAR_5;
    }
    else {
        if ( VAR_4 == 0xFF ) {
            if ( VAR_7 | VAR_8 ) return FUNC_3( VAR_1, VAR_2 );
            return VAR_1;
        }
        if ( VAR_4 == 0 ) return FUNC_2( VAR_3, 0, ( VAR_7 + VAR_8 )>>6 );
        VAR_9 = 0x40000000 + VAR_7 + VAR_8;
        VAR_6 = VAR_4;
        goto roundAndPack;
    }
    VAR_7 |= 0x20000000;
    VAR_9 = ( VAR_7 + VAR_8 )<<1;
    --VAR_6;
    if ( (sbits32) VAR_9 < 0 ) {
        VAR_9 = VAR_7 + VAR_8;
        ++VAR_6;
    }
 roundAndPack:
    return FUNC_4( VAR_0, VAR_3, VAR_6, VAR_9 );

}
