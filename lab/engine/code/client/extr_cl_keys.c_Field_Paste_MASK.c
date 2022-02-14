
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int field_t ;


 int FUNC_0 (int *,char) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

void FUNC_4( field_t *VAR_0 ) {
 char *VAR_1;
 int VAR_2, VAR_3;

 VAR_1 = FUNC_1();

 if ( !VAR_1 ) {
  return;
 }


 VAR_2 = FUNC_3( VAR_1 );
 for ( VAR_3 = 0 ; VAR_3 < VAR_2 ; VAR_3++ ) {
  FUNC_0( VAR_0, VAR_1[VAR_3] );
 }

 FUNC_2( VAR_1 );
}
