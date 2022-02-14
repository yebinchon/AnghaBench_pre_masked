
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_ifaddr {int ia_ifa; } ;
struct in6_aliasreq {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct in6_ifaddr* FUNC_1 (struct ifnet*,struct in6_aliasreq*,int) ;
 int FUNC_2 (struct ifnet*,struct in6_aliasreq*,struct in6_ifaddr*,int) ;
 int FUNC_3 (struct in6_ifaddr*,struct ifnet*) ;
 int FUNC_4 (struct ifnet*,struct in6_aliasreq*,struct in6_ifaddr*,int,int) ;
 int FUNC_5 (struct ifnet*,struct in6_aliasreq*,struct in6_ifaddr*,int) ;

int
FUNC_6(struct ifnet *VAR_1, struct in6_aliasreq *VAR_2,
    struct in6_ifaddr *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 if ((VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4)) != 0)
  return (VAR_5);

 if (VAR_3 == ((void*)0)) {
  VAR_6 = 1;
  if ((VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_4)) == ((void*)0))
   return (VAR_0);
 }

 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_6, VAR_4);
 if (VAR_5 != 0) {
  if (VAR_6 != 0) {
   FUNC_3(VAR_3, VAR_1);
   FUNC_0(&VAR_3->ia_ifa);
  }
  return (VAR_5);
 }

 if (VAR_6)
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

 return (VAR_5);
}
