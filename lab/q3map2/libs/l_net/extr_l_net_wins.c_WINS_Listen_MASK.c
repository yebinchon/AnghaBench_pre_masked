
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int ,int*) ;
 scalar_t__ FUNC_4 (int,int ) ;

int FUNC_5( int VAR_3 ){
 u_long VAR_4 = 1;

 if ( FUNC_3( VAR_3, VAR_0, &VAR_4 ) == -1 ) {
  FUNC_2( "WINS_Listen: %s\n", FUNC_0( FUNC_1() ) );
  return -1;
 }
 if ( FUNC_4( VAR_3, VAR_2 ) == VAR_1 ) {
  FUNC_2( "WINS_Listen: %s\n", FUNC_0( FUNC_1() ) );
  return -1;
 }
 return 0;
}
