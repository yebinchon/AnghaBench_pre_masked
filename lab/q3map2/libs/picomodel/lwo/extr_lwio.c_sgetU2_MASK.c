
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

unsigned short FUNC_0( unsigned char **VAR_2 ){
 unsigned char *VAR_3 = *VAR_2;
 unsigned short VAR_4;

 if ( VAR_1 == VAR_0 ) {
  return 0;
 }
 VAR_4 = ( VAR_3[ 0 ] << 8 ) | VAR_3[ 1 ];
 VAR_1 += 2;
 *VAR_2 += 2;
 return VAR_4;
}
