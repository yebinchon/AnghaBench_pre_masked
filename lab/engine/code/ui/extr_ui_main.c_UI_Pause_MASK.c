
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(qboolean VAR_1) {
 if (VAR_1) {

   FUNC_0( "cl_paused", "1" );
  FUNC_3( VAR_0 );
 } else {

  FUNC_3( FUNC_2() & ~VAR_0 );
  FUNC_1();
  FUNC_0( "cl_paused", "0" );
 }
}
