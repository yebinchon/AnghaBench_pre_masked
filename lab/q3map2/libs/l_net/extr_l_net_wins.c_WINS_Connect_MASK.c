
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sockaddr_s {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 int FUNC_4 (int,int ,int*) ;

int FUNC_5( int VAR_2, struct sockaddr_s *VAR_3 ){
 int VAR_4;
 u_long VAR_5 = 0xFFFFFFFF;

 VAR_4 = FUNC_3( VAR_2, (struct sockaddr *)VAR_3, sizeof( struct sockaddr_s ) );
 if ( VAR_4 == VAR_1 ) {
  FUNC_2( "WINS_Connect: %s\n", FUNC_0( FUNC_1() ) );
  return -1;
 }
 if ( FUNC_4( VAR_2, VAR_0, &VAR_5 ) == -1 ) {
  FUNC_2( "WINS_Connect: %s\n", FUNC_0( FUNC_1() ) );
  return -1;
 }
 return 0;
}
