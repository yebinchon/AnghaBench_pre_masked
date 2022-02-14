
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_s {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,int *,int,int ) ;
 int FUNC_4 (int,int *,int,int ,struct sockaddr*,int*) ;

int FUNC_5( int VAR_4, byte *VAR_5, int VAR_6, struct sockaddr_s *VAR_7 ){
 socklen_t VAR_8 = sizeof( struct sockaddr_s );
 int VAR_9;

 if ( VAR_7 ) {
  VAR_9 = FUNC_4( VAR_4, VAR_5, VAR_6, 0, (struct sockaddr *)VAR_7, &VAR_8 );
  if ( VAR_9 == -1 ) {


   if ( VAR_3 == VAR_0 || VAR_3 == VAR_1 ) {
    return 0;
   }
  }
 }
 else
 {
  VAR_9 = FUNC_3( VAR_4, VAR_5, VAR_6, 0 );



  if ( VAR_9 == 0 ) {
   return -1;
  }
  if ( VAR_9 == VAR_2 ) {


   if ( VAR_3 == VAR_0 || VAR_3 == VAR_1 ) {
    return 0;
   }
  }
 }
 if ( VAR_9 == VAR_2 ) {
  FUNC_2( "WINS_Read: %s\n", FUNC_0( FUNC_1() ) );
 }
 return VAR_9;
}
