
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int uchar ;
typedef int sha1_context ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4( uchar *VAR_0, uint VAR_1, uchar *VAR_2, uint VAR_3,
                uchar VAR_4[20] )
{
    uint VAR_5;
    sha1_context VAR_6;
    uchar VAR_7[64];
    uchar VAR_8[64];
    uchar VAR_9[20];

    FUNC_0( VAR_7, 0x36, 64 );
    FUNC_0( VAR_8, 0x5C, 64 );

    for( VAR_5 = 0; VAR_5 < VAR_1; VAR_5++ )
    {
        if( VAR_5 >= 64 ) break;

        VAR_7[VAR_5] ^= VAR_0[VAR_5];
        VAR_8[VAR_5] ^= VAR_0[VAR_5];
    }

    FUNC_2( &VAR_6 );
    FUNC_3( &VAR_6, VAR_7, 64 );
    FUNC_3( &VAR_6, VAR_2, VAR_3 );
    FUNC_1( &VAR_6, VAR_9 );

    FUNC_2( &VAR_6 );
    FUNC_3( &VAR_6, VAR_8, 64 );
    FUNC_3( &VAR_6, VAR_9, 20 );
    FUNC_1( &VAR_6, VAR_4 );

    FUNC_0( VAR_7, 0, 64 );
    FUNC_0( VAR_8, 0, 64 );
    FUNC_0( VAR_9, 0, 20 );
    FUNC_0( &VAR_6, 0, sizeof( sha1_context ) );
}
