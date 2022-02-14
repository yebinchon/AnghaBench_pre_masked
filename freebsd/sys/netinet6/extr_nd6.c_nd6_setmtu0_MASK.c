
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct nd_ifinfo {scalar_t__ maxmtu; } ;
struct ifnet {scalar_t__ if_mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,unsigned long) ;

void
FUNC_3(struct ifnet *VAR_3, struct nd_ifinfo *VAR_4)
{
 u_int32_t VAR_5;

 VAR_5 = VAR_4->maxmtu;
 VAR_4->maxmtu = VAR_3->if_mtu;







 if (VAR_5 >= VAR_0 && VAR_4->maxmtu < VAR_0) {
  FUNC_2(VAR_1, "nd6_setmtu0: "
      "new link MTU on %s (%lu) is too small for IPv6\n",
      FUNC_0(VAR_3), (unsigned long)VAR_4->maxmtu);
 }

 if (VAR_4->maxmtu > VAR_2)
  FUNC_1();

}
