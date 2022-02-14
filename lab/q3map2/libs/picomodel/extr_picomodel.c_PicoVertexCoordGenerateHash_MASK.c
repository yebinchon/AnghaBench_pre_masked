
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* picoVec3_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,int ,float*) ;
 scalar_t__ FUNC_1 (float) ;

unsigned int FUNC_2( picoVec3_t VAR_2 ){
 unsigned int VAR_3 = 0;


 VAR_3 += ~( *( (unsigned int*) &VAR_2[ 0 ] ) << 15 );
 VAR_3 ^= ( *( (unsigned int*) &VAR_2[ 0 ] ) >> 10 );
 VAR_3 += ( *( (unsigned int*) &VAR_2[ 1 ] ) << 3 );
 VAR_3 ^= ( *( (unsigned int*) &VAR_2[ 1 ] ) >> 6 );
 VAR_3 += ~( *( (unsigned int*) &VAR_2[ 2 ] ) << 11 );
 VAR_3 ^= ( *( (unsigned int*) &VAR_2[ 2 ] ) >> 16 );
 VAR_3 = VAR_3 % ( VAR_0 );
 return VAR_3;
}
