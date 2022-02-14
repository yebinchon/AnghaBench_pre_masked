
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_s {int dummy; } ;
struct sockaddr_in {int sin_port; } ;


 int FUNC_0 (int ) ;

int FUNC_1( struct sockaddr_s *VAR_0 ){
 return FUNC_0( ( (struct sockaddr_in *)VAR_0 )->sin_port );
}
