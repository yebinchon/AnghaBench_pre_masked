
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmpbuf ;
struct TYPE_6__ {unsigned char* opad; } ;
typedef TYPE_1__ md5_context ;


 int FUNC_0 (TYPE_1__*,unsigned char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;

void FUNC_4( md5_context *VAR_0, unsigned char VAR_1[16] )
{
    unsigned char VAR_2[16];

    FUNC_0( VAR_0, VAR_2 );
    FUNC_1( VAR_0 );
    FUNC_2( VAR_0, VAR_0->opad, 64 );
    FUNC_2( VAR_0, VAR_2, 16 );
    FUNC_0( VAR_0, VAR_1 );

    FUNC_3( VAR_2, 0, sizeof( VAR_2 ) );
}
