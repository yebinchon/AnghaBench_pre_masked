
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int) ;

int FUNC_1( char *VAR_0, int VAR_1, char *VAR_2, int VAR_3 ){
 int VAR_4;


 if ( VAR_2 == ((void*)0) || VAR_3 < 1 ) {
  return -1;
 }
 FUNC_0( VAR_2,0,VAR_3 );


 if ( VAR_0 == ((void*)0) || VAR_1 < 1 ) {
  return -1;
 }


 for ( VAR_4 = 0; VAR_4 < VAR_1 && VAR_4 < VAR_3; VAR_4++ )
 {
  if ( VAR_0[VAR_4] == '\n' ) {
   VAR_4++; break;
  }
  VAR_2[VAR_4] = VAR_0[VAR_4];
 }

 VAR_2[VAR_4] = '\0';
 return VAR_4;
}
