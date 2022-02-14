
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {struct ifnet* ifa_ifp; } ;
struct in6_ifaddr {int ia_prefixmask; int ia_addr; TYPE_1__ ia_ifa; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,int ,struct sockaddr*) ;
 int FUNC_2 (int ,struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_3 (struct sockaddr_in6*,int *,int) ;

void
FUNC_4(struct in6_ifaddr *VAR_3, int VAR_4)
{
 struct sockaddr_in6 VAR_5, VAR_6;
 struct sockaddr *VAR_7, *VAR_8;
 struct ifnet *VAR_9;

 VAR_9 = VAR_3->ia_ifa.ifa_ifp;
 FUNC_3(&VAR_6, &VAR_3->ia_addr, sizeof(VAR_3->ia_addr));
 FUNC_3(&VAR_5, &VAR_3->ia_prefixmask, sizeof(VAR_3->ia_prefixmask));
 VAR_7 = (struct sockaddr *)&VAR_6;
 VAR_8 = (struct sockaddr *)&VAR_5;

 if (VAR_4 != 0)
  FUNC_2(VAR_0, VAR_7, VAR_8, VAR_2);
 else
  FUNC_1(FUNC_0(VAR_9), VAR_1, VAR_7);
}
