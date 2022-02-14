
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_s {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int qboolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int,int ,int ,void*,int) ;

int FUNC_5( int VAR_6, struct sockaddr_s *VAR_7 ){
 socklen_t VAR_8 = sizeof( struct sockaddr_s );
 int VAR_9;
 qboolean VAR_10 = 1;

 VAR_9 = FUNC_3( VAR_6, (struct sockaddr *)VAR_7, &VAR_8 );
 if ( VAR_9 == VAR_1 ) {
  if ( VAR_5 == VAR_0 ) {
   return -1;
  }
  FUNC_2( "WINS_Accept: %s\n", FUNC_0( FUNC_1() ) );
  return -1;
 }

 if ( FUNC_4( VAR_9, VAR_2, VAR_4, (void *) &VAR_10, sizeof( int ) ) == VAR_3 ) {
  FUNC_2( "WINS_Accept: %s\n", FUNC_0( FUNC_1() ) );
  FUNC_2( "setsockopt error\n" );
 }
 return VAR_9;
}
