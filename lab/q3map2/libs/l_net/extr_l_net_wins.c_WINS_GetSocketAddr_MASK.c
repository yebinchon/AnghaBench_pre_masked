
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_s {int dummy; } ;
struct TYPE_2__ {unsigned int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int,struct sockaddr*,int*) ;
 unsigned int FUNC_1 (char*) ;
 int FUNC_2 (struct sockaddr_s*,int ,int) ;
 unsigned int VAR_0 ;

int FUNC_3( int VAR_1, struct sockaddr_s *VAR_2 ){
 int VAR_3 = sizeof( struct sockaddr_s );
 unsigned int VAR_4;

 FUNC_2( VAR_2, 0, sizeof( struct sockaddr_s ) );
 FUNC_0( VAR_1, (struct sockaddr *)VAR_2, &VAR_3 );
 VAR_4 = ( (struct sockaddr_in *)VAR_2 )->sin_addr.s_addr;
 if ( VAR_4 == 0 || VAR_4 == FUNC_1( "127.0.0.1" ) ) {
  ( (struct sockaddr_in *)VAR_2 )->sin_addr.s_addr = VAR_0;
 }

 return 0;
}
