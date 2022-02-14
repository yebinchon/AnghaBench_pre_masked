
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md5_context ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (unsigned char*,int,int,int *) ;
 int FUNC_4 (int *,unsigned char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (int *,int ,int) ;

int FUNC_8( char *VAR_0, unsigned char VAR_1[16] )
{
    FILE *VAR_2;
    size_t VAR_3;
    md5_context VAR_4;
    unsigned char VAR_5[1024];

    if( ( VAR_2 = FUNC_2( VAR_0, "rb" ) ) == ((void*)0) )
        return( 1 );

    FUNC_5( &VAR_4 );

    while( ( VAR_3 = FUNC_3( VAR_5, 1, sizeof( VAR_5 ), VAR_2 ) ) > 0 )
        FUNC_6( &VAR_4, VAR_5, (int) VAR_3 );

    FUNC_4( &VAR_4, VAR_1 );

    FUNC_7( &VAR_4, 0, sizeof( md5_context ) );

    if( FUNC_1( VAR_2 ) != 0 )
    {
        FUNC_0( VAR_2 );
        return( 2 );
    }

    FUNC_0( VAR_2 );
    return( 0 );
}
