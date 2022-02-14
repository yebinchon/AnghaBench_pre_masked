
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sha1_context ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;

void FUNC_4( const unsigned char *VAR_0, size_t VAR_1,
                const unsigned char *VAR_2, size_t VAR_3,
                unsigned char VAR_4[20] )
{
    sha1_context VAR_5;

    FUNC_2( &VAR_5, VAR_0, VAR_1 );
    FUNC_3( &VAR_5, VAR_2, VAR_3 );
    FUNC_1( &VAR_5, VAR_4 );

    FUNC_0( &VAR_5, 0, sizeof( sha1_context ) );
}
