
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_s {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_4 (int,int ,int ,void*,int) ;

int FUNC_5( int VAR_5, struct sockaddr_s *VAR_6 ){
 int VAR_7 = sizeof( struct sockaddr_s );
 int VAR_8;
 BOOL VAR_9 = 1;

 VAR_8 = FUNC_3( VAR_5, (struct sockaddr *)VAR_6, &VAR_7 );
 if ( VAR_8 == VAR_0 ) {
  if ( FUNC_1() == VAR_4 ) {
   return -1;
  }
  FUNC_2( "WINS_Accept: %s\n", FUNC_0( FUNC_1() ) );
  return -1;
 }

 if ( FUNC_4( VAR_8, VAR_1, VAR_3, (void *) &VAR_9, sizeof( int ) ) == VAR_2 ) {
  FUNC_2( "WINS_Accept: %s\n", FUNC_0( FUNC_1() ) );
  FUNC_2( "setsockopt error\n" );
 }
 return VAR_8;
}
