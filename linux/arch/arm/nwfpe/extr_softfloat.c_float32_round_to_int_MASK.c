
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int mode; int exception; } ;
typedef int int8 ;
typedef int int16 ;
typedef int float32 ;
typedef int flag ;
typedef scalar_t__ bits32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;


 int VAR_1 ;

 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int,int) ;

float32 FUNC_5( struct roundingData *VAR_2, float32 VAR_3 )
{
    flag VAR_4;
    int16 VAR_5;
    bits32 VAR_6, VAR_7;
    int8 VAR_8;
    float32 VAR_9;

    VAR_5 = FUNC_0( VAR_3 );
    if ( 0x96 <= VAR_5 ) {
        if ( ( VAR_5 == 0xFF ) && FUNC_1( VAR_3 ) ) {
            return FUNC_4( VAR_3, VAR_3 );
        }
        return VAR_3;
    }
    VAR_8 = VAR_2->mode;
    if ( VAR_5 <= 0x7E ) {
        if ( (bits32) ( VAR_3<<1 ) == 0 ) return VAR_3;
        VAR_2->exception |= VAR_0;
        VAR_4 = FUNC_2( VAR_3 );
        switch ( VAR_8 ) {
         case 129:
            if ( ( VAR_5 == 0x7E ) && FUNC_1( VAR_3 ) ) {
                return FUNC_3( VAR_4, 0x7F, 0 );
            }
            break;
         case 130:
            return VAR_4 ? 0xBF800000 : 0;
         case 128:
            return VAR_4 ? 0x80000000 : 0x3F800000;
        }
        return FUNC_3( VAR_4, 0, 0 );
    }
    VAR_6 = 1;
    VAR_6 <<= 0x96 - VAR_5;
    VAR_7 = VAR_6 - 1;
    VAR_9 = VAR_3;
    if ( VAR_8 == 129 ) {
        VAR_9 += VAR_6>>1;
        if ( ( VAR_9 & VAR_7 ) == 0 ) VAR_9 &= ~ VAR_6;
    }
    else if ( VAR_8 != VAR_1 ) {
        if ( FUNC_2( VAR_9 ) ^ ( VAR_8 == 128 ) ) {
            VAR_9 += VAR_7;
        }
    }
    VAR_9 &= ~ VAR_7;
    if ( VAR_9 != VAR_3 ) VAR_2->exception |= VAR_0;
    return VAR_9;

}
