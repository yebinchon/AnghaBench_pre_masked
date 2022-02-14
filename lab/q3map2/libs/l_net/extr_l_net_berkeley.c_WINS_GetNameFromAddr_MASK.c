
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_s {int dummy; } ;
struct sockaddr_in {int sin_addr; } ;
struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr_s*) ;
 struct hostent* FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*,scalar_t__) ;

int FUNC_4( struct sockaddr_s *VAR_2, char *VAR_3 ){
 struct hostent *VAR_4;

 VAR_4 = FUNC_1( (char *)&( (struct sockaddr_in *)VAR_2 )->sin_addr, sizeof( struct in_addr ), VAR_0 );
 if ( VAR_4 ) {
  FUNC_3( VAR_3, (char *)VAR_4->h_name, VAR_1 - 1 );
  return 0;
 }

 FUNC_2( VAR_3, FUNC_0( VAR_2 ) );
 return 0;
}
