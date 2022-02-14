
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;
typedef int gentity_t ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4( gentity_t *VAR_0, int VAR_1, qboolean VAR_2 ) {
 char *VAR_3;

 if ( FUNC_3 () < 2 && !VAR_2 ) {
  return;
 }

 if (VAR_2)
 {
  VAR_3 = FUNC_0( 0 );
 }
 else
 {
  VAR_3 = FUNC_0( 1 );
 }

 FUNC_2( VAR_3 );

 FUNC_1( VAR_0, ((void*)0), VAR_1, VAR_3 );
}
