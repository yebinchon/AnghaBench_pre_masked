
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_scope_id; int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct sockaddr *VAR_1)
{




 switch (VAR_1->sa_family) {
 default:
  FUNC_0("?\n");
  break;
 }
}
