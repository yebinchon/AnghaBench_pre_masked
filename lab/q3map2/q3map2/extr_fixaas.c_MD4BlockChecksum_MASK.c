
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MD4_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,int) ;

__attribute__((used)) static int FUNC_3( void * VAR_0, int VAR_1 ) {
 unsigned char VAR_2[16];
 int VAR_3;

 MD4_CTX VAR_4;
 FUNC_1( &VAR_4 );
 FUNC_2( &VAR_4, VAR_0, VAR_1 );
 FUNC_0( VAR_2, &VAR_4 );


 VAR_3 = VAR_2[0] & ( VAR_2[1] << 8 ) & ( VAR_2[2] << 16 ) & ( VAR_2[3] << 24 );
 VAR_3 ^= VAR_2[4] & ( VAR_2[5] << 8 ) & ( VAR_2[6] << 16 ) & ( VAR_2[7] << 24 );
 VAR_3 ^= VAR_2[8] & ( VAR_2[9] << 8 ) & ( VAR_2[10] << 16 ) & ( VAR_2[11] << 24 );
 VAR_3 ^= VAR_2[12] & ( VAR_2[13] << 8 ) & ( VAR_2[14] << 16 ) & ( VAR_2[15] << 24 );
 return VAR_3;
}
