
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct sockaddr_s {int sa_family; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3( char *VAR_3, struct sockaddr_s *VAR_4 ){
 char VAR_5[256];
 char *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5[0] = '.';
 VAR_6 = VAR_5;
 FUNC_2( VAR_5 + 1, VAR_3 );
 if ( VAR_5[1] == '.' ) {
  VAR_6++;
 }

 VAR_7 = 0;
 VAR_9 = -1;
 while ( *VAR_6 == '.' )
 {
  VAR_8 = 0;
  if ( *++VAR_6 < '0' || *VAR_6 > '9' ) {
   return -1;
  }
  while ( !( *VAR_6 < '0' || *VAR_6 > '9' ) )
   VAR_8 = VAR_8 * 10 + *( VAR_6++ ) - '0';
  VAR_9 <<= 8;
  VAR_7 = ( VAR_7 << 8 ) + VAR_8;
 }

 VAR_4->sa_family = VAR_0;
 ( (struct sockaddr_in *)VAR_4 )->sin_port = FUNC_1( (u_short)VAR_2 );
 ( (struct sockaddr_in *)VAR_4 )->sin_addr.s_addr = ( VAR_1 & FUNC_0( VAR_9 ) ) | FUNC_0( VAR_7 );

 return 0;
}
