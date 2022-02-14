
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct sockaddr_s {int dummy; } ;
struct sockaddr_in {int sin_port; } ;


 int FUNC_0 (int ) ;

int FUNC_1( struct sockaddr_s *VAR_0, int VAR_1 ){
 ( (struct sockaddr_in *)VAR_0 )->sin_port = FUNC_0( (u_short)VAR_1 );
 return 0;
}
