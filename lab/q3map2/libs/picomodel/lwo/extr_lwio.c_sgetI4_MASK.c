
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,unsigned char*,int) ;
 int FUNC_1 (int*,int,int) ;

int FUNC_2( unsigned char **VAR_2 ){
 int VAR_3;

 if ( VAR_1 == VAR_0 ) {
  return 0;
 }
 FUNC_0( &VAR_3, *VAR_2, 4 );
 FUNC_1( &VAR_3, 4, 1 );
 VAR_1 += 4;
 *VAR_2 += 4;
 return VAR_3;
}
