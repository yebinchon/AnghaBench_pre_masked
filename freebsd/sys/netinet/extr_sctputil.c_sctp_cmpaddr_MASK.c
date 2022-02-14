
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int FUNC_0 (struct sockaddr_in6*,struct sockaddr_in6*) ;

int
FUNC_1(struct sockaddr *VAR_0, struct sockaddr *VAR_1)
{


 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);


 if (VAR_0->sa_family != VAR_1->sa_family)
  return (0);

 switch (VAR_0->sa_family) {
 default:

  return (0);
 }
}
