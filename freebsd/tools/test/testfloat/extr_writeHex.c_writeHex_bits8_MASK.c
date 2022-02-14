
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;
typedef int FILE ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1( bits8 VAR_0, FILE *VAR_1 )
{
    int VAR_2;

    VAR_2 = ( VAR_0>>4 ) & 0xF;
    if ( 9 < VAR_2 ) VAR_2 += 'A' - ( '0' + 10 );
    FUNC_0( '0' + VAR_2, VAR_1 );
    VAR_2 = VAR_0 & 0xF;
    if ( 9 < VAR_2 ) VAR_2 += 'A' - ( '0' + 10 );
    FUNC_0( '0' + VAR_2, VAR_1 );

}
