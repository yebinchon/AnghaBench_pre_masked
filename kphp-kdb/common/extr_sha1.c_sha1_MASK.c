
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sha1_context ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;

void FUNC_4( unsigned char *VAR_0, int VAR_1, unsigned char VAR_2[20] )
{
    sha1_context VAR_3;

    FUNC_2( &VAR_3 );
    FUNC_3( &VAR_3, VAR_0, VAR_1 );
    FUNC_1( &VAR_3, VAR_2 );

    FUNC_0( &VAR_3, 0, sizeof( sha1_context ) );
}
