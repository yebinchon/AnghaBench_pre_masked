
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct llentry {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct llentry*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct sockaddr_in6 const*,struct ifnet*) ;
 struct llentry* FUNC_4 (int *,int ,struct ifnet*) ;

int
FUNC_5(const struct sockaddr_in6 *VAR_0, struct ifnet *VAR_1)
{
 struct llentry *VAR_2;
 int VAR_3 = 0;

 FUNC_2();
 FUNC_0(VAR_1);
 if (FUNC_3(VAR_0, VAR_1))
  return (1);





 if ((VAR_2 = FUNC_4(&VAR_0->sin6_addr, 0, VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_2);
  VAR_3 = 1;
 }
 return (VAR_3);
}
