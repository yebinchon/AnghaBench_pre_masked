
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_s {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int *,int,int ) ;
 int FUNC_4 (int,int *,int,int ,struct sockaddr*,int*) ;

int FUNC_5( int VAR_3, byte *VAR_4, int VAR_5, struct sockaddr_s *VAR_6 ){
 int VAR_7 = sizeof( struct sockaddr_s );
 int VAR_8, VAR_9;

 if ( VAR_6 ) {
  VAR_8 = FUNC_4( VAR_3, VAR_4, VAR_5, 0, (struct sockaddr *)VAR_6, &VAR_7 );
  if ( VAR_8 == -1 ) {
   VAR_9 = FUNC_1();

   if ( VAR_9 == VAR_2 || VAR_9 == VAR_1 ) {
    return 0;
   }
  }
 }
 else
 {
  VAR_8 = FUNC_3( VAR_3, VAR_4, VAR_5, 0 );
  if ( VAR_8 == VAR_0 ) {
   VAR_9 = FUNC_1();

   if ( VAR_9 == VAR_2 || VAR_9 == VAR_1 ) {
    return 0;
   }
  }
 }
 if ( VAR_8 == VAR_0 ) {
  FUNC_2( "WINS_Read: %s\n", FUNC_0( FUNC_1() ) );
 }
 return VAR_8;
}
