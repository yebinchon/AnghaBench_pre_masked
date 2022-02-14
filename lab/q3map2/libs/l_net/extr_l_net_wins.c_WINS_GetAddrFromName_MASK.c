
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct sockaddr_s {int sa_family; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; } ;
struct hostent {scalar_t__* h_addr_list; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sockaddr_s*) ;
 struct hostent* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;

int FUNC_3( char *VAR_2, struct sockaddr_s *VAR_3 ){
 struct hostent *VAR_4;

 if ( VAR_2[0] >= '0' && VAR_2[0] <= '9' ) {
  return FUNC_0( VAR_2, VAR_3 );
 }

 VAR_4 = FUNC_1( VAR_2 );
 if ( !VAR_4 ) {
  return -1;
 }

 VAR_3->sa_family = VAR_0;
 ( (struct sockaddr_in *)VAR_3 )->sin_port = FUNC_2( (u_short)VAR_1 );
 ( (struct sockaddr_in *)VAR_3 )->sin_addr.s_addr = *(int *)VAR_4->h_addr_list[0];

 return 0;
}
