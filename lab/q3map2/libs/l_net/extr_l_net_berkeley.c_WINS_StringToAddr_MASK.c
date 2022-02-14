
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct sockaddr_s {int sa_family; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int*,int*,int*,int*,int*) ;

int FUNC_3( char *VAR_1, struct sockaddr_s *VAR_2 ){
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 FUNC_2( VAR_1, "%d.%d.%d.%d:%d", &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7 );
 VAR_8 = ( VAR_3 << 24 ) | ( VAR_4 << 16 ) | ( VAR_5 << 8 ) | VAR_6;

 VAR_2->sa_family = VAR_0;
 ( (struct sockaddr_in *)VAR_2 )->sin_addr.s_addr = FUNC_0( VAR_8 );
 ( (struct sockaddr_in *)VAR_2 )->sin_port = FUNC_1( (u_short)VAR_7 );
 return 0;
}
