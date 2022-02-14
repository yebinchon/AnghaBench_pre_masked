
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,unsigned char*,int) ;
 int FUNC_2 (char*) ;

char *FUNC_3( unsigned char **VAR_2 ){
 char *VAR_3;
 unsigned char *VAR_4 = *VAR_2;
 int VAR_5;

 if ( VAR_1 == VAR_0 ) {
  return ((void*)0);
 }

 VAR_5 = FUNC_2( (char *) VAR_4 ) + 1;
 if ( VAR_5 == 1 ) {
  VAR_1 += 2;
  *VAR_2 += 2;
  return ((void*)0);
 }
 VAR_5 += VAR_5 & 1;
 VAR_3 = FUNC_0( VAR_5 );
 if ( !VAR_3 ) {
  VAR_1 = VAR_0;
  return ((void*)0);
 }

 FUNC_1( VAR_3, VAR_4, VAR_5 );
 VAR_1 += VAR_5;
 *VAR_2 += VAR_5;
 return VAR_3;
}
