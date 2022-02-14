
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sbits64 ;
typedef int bits64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,int*,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int*,int*) ;
 int FUNC_4 (int,int,int,int,int*,int*) ;

__attribute__((used)) static bits64 FUNC_5( bits64 VAR_0, bits64 VAR_1, bits64 VAR_2 )
{
    bits64 VAR_3, VAR_4;
    bits64 VAR_5, VAR_6, VAR_7, VAR_8;
    bits64 VAR_9;
    if ( VAR_2 <= VAR_0 ) return FUNC_0( 0xFFFFFFFFFFFFFFFF );
    VAR_3 = VAR_2>>32;
    if ( VAR_3<<32 <= VAR_0 ) {
        VAR_9 = FUNC_0( 0xFFFFFFFF00000000 );
    } else {
        VAR_9 = VAR_0;
        FUNC_2( VAR_9, VAR_3 );
        VAR_9 <<= 32;
    }
    FUNC_3( VAR_2, VAR_9, &VAR_7, &VAR_8 );
    FUNC_4( VAR_0, VAR_1, VAR_7, VAR_8, &VAR_5, &VAR_6 );
    while ( ( (sbits64) VAR_5 ) < 0 ) {
        VAR_9 -= FUNC_0( 0x100000000 );
        VAR_4 = VAR_2<<32;
        FUNC_1( VAR_5, VAR_6, VAR_3, VAR_4, &VAR_5, &VAR_6 );
    }
    VAR_5 = ( VAR_5<<32 ) | ( VAR_6>>32 );
    if ( VAR_3<<32 <= VAR_5 ) {
        VAR_9 |= 0xFFFFFFFF;
    } else {
        FUNC_2( VAR_5, VAR_3 );
        VAR_9 |= VAR_5;
    }
    return VAR_9;

}
