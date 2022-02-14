
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2( char *VAR_1, char *VAR_2[VAR_0], int VAR_3 ) {
 int VAR_4;

 if ( VAR_3 == VAR_0 - 1 ) {
  return VAR_3;
 }
 for ( VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4++ ) {
  if ( !FUNC_1( VAR_1, VAR_2[VAR_4] ) ) {
   return VAR_3;
  }
 }
 VAR_2[VAR_3] = FUNC_0( VAR_1 );
 VAR_3++;

 return VAR_3;
}
