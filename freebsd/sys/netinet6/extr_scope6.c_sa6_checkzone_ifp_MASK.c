
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {scalar_t__ sin6_scope_id; int sin6_addr; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ifnet*,int) ;
 int FUNC_2 (struct sockaddr_in6*) ;

int
FUNC_3(struct ifnet *VAR_3, struct sockaddr_in6 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->sin6_addr);
 if (VAR_5 == VAR_2 ||
     VAR_5 == VAR_1) {
  if (VAR_4->sin6_scope_id == 0) {
   VAR_4->sin6_scope_id = FUNC_1(VAR_3, VAR_5);
   return (0);
  } else if (VAR_4->sin6_scope_id != FUNC_1(VAR_3, VAR_5))
   return (VAR_0);
 }
 return (FUNC_2(VAR_4));
}
