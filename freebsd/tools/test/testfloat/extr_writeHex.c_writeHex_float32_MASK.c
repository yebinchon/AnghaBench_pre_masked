
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sbits32 ;
typedef int float32 ;
typedef int FILE ;


 int FUNC_0 (char,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;

void FUNC_3( float32 VAR_0, FILE *VAR_1 )
{

    FUNC_0( ( ( (sbits32) VAR_0 ) < 0 ) ? '8' : '0', VAR_1 );
    FUNC_2( VAR_0>>23, VAR_1 );
    FUNC_0( '.', VAR_1 );
    FUNC_2( ( VAR_0>>16 ) & 0x7F, VAR_1 );
    FUNC_1( VAR_0, VAR_1 );

}
