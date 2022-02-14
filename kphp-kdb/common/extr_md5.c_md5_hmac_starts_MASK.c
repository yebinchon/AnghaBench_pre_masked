
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sum ;
struct TYPE_5__ {unsigned char* ipad; unsigned char* opad; } ;
typedef TYPE_1__ md5_context ;


 int FUNC_0 (unsigned char*,int,unsigned char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int,int) ;

void FUNC_4( md5_context *VAR_0, unsigned char *VAR_1, int VAR_2 )
{
    int VAR_3;
    unsigned char VAR_4[16];

    if( VAR_2 > 64 )
    {
        FUNC_0( VAR_1, VAR_2, VAR_4 );
        VAR_2 = 16;
        VAR_1 = VAR_4;
    }

    FUNC_3( VAR_0->ipad, 0x36, 64 );
    FUNC_3( VAR_0->opad, 0x5C, 64 );

    for( VAR_3 = 0; VAR_3 < VAR_2; VAR_3++ )
    {
        VAR_0->ipad[VAR_3] = (unsigned char)( VAR_0->ipad[VAR_3] ^ VAR_1[VAR_3] );
        VAR_0->opad[VAR_3] = (unsigned char)( VAR_0->opad[VAR_3] ^ VAR_1[VAR_3] );
    }

    FUNC_1( VAR_0 );
    FUNC_2( VAR_0, VAR_0->ipad, 64 );

    FUNC_3( VAR_4, 0, sizeof( VAR_4 ) );
}
