
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_s {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,int,int,int,int) ;

char *FUNC_3( struct sockaddr_s *VAR_0 ){
 static char VAR_1[22];
 int VAR_2;

 VAR_2 = FUNC_0( ( (struct sockaddr_in *)VAR_0 )->sin_addr.s_addr );
 FUNC_2( VAR_1, "%d.%d.%d.%d:%d", ( VAR_2 >> 24 ) & 0xff, ( VAR_2 >> 16 ) & 0xff, ( VAR_2 >> 8 ) & 0xff, VAR_2 & 0xff, FUNC_1( ( (struct sockaddr_in *)VAR_0 )->sin_port ) );
 return VAR_1;
}
