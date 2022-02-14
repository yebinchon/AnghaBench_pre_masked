
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct rtentry {int rt_flags; struct ifnet* rt_ifp; scalar_t__ rt_gateway; } ;
struct rt_addrinfo {int dummy; } ;
struct nd_defrouter {int installed; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int sin6_addr; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;


 TYPE_1__* FUNC_1 (int ) ;
 struct nd_defrouter* FUNC_2 (int *,struct ifnet*) ;
 int FUNC_3 (struct nd_defrouter*) ;
 int VAR_1 ;
 int FUNC_4 (struct rtentry*) ;

void
FUNC_5(int VAR_2, struct rtentry *VAR_3, struct rt_addrinfo *VAR_4)
{
 struct sockaddr_in6 *VAR_5;
 struct nd_defrouter *VAR_6;
 struct ifnet *VAR_7;

 VAR_5 = (struct sockaddr_in6 *)VAR_3->rt_gateway;
 VAR_7 = VAR_3->rt_ifp;

 switch (VAR_2) {
 case 129:
  break;

 case 128:
  if (!VAR_7)
   return;



  if ((VAR_3->rt_flags & VAR_0) == 0)
   return;



  if (FUNC_0(&VAR_1,
      &FUNC_1(FUNC_4(VAR_3))->sin6_addr)) {
   VAR_6 = FUNC_2(&VAR_5->sin6_addr, VAR_7);
   if (VAR_6 != ((void*)0)) {
    VAR_6->installed = 0;
    FUNC_3(VAR_6);
   }
  }
  break;
 }
}
