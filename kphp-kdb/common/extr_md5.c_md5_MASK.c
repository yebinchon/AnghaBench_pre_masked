
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md5_context ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4( unsigned char *VAR_0, int VAR_1, unsigned char VAR_2[16] )
{
    md5_context VAR_3;

    FUNC_1( &VAR_3 );
    FUNC_2( &VAR_3, VAR_0, VAR_1 );
    FUNC_0( &VAR_3, VAR_2 );

    FUNC_3( &VAR_3, 0, sizeof( md5_context ) );
}
