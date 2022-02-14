
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct llentry {int dummy; } ;
struct TYPE_2__ {int ifa_rtrequest; struct ifnet* ifa_ifp; } ;
struct in6_ifaddr {int ia_addr; TYPE_1__ ia_ifa; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct llentry*,int ) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct llentry*) ;
 int FUNC_4 (struct llentry*) ;
 int FUNC_5 (struct ifnet*) ;
 struct llentry* FUNC_6 (int ,int ,struct sockaddr*) ;
 int VAR_5 ;
 int FUNC_7 (struct llentry*) ;
 struct llentry* FUNC_8 (int ,int ,struct sockaddr*) ;
 int FUNC_9 (int ,struct llentry*) ;
 int FUNC_10 (int ,struct llentry*) ;
 scalar_t__ FUNC_11 (struct ifnet*) ;
 int VAR_6 ;

int
FUNC_12(struct in6_ifaddr *VAR_7)
{
 struct ifnet *VAR_8;
 struct llentry *VAR_9, *VAR_10;
 struct sockaddr *VAR_11;

 VAR_8 = VAR_7->ia_ifa.ifa_ifp;
 if (FUNC_11(VAR_8) == 0)
  return (0);

 VAR_7->ia_ifa.ifa_rtrequest = VAR_6;
 VAR_11 = (struct sockaddr *)&VAR_7->ia_addr;
 VAR_9 = FUNC_8(FUNC_5(VAR_8), VAR_4, VAR_11);
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_8);
 FUNC_3(VAR_9);

 VAR_10 = FUNC_6(FUNC_5(VAR_8), VAR_3, VAR_11);
 if (VAR_10 != ((void*)0))
  FUNC_10(FUNC_5(VAR_8), VAR_10);
 FUNC_9(FUNC_5(VAR_8), VAR_9);
 FUNC_2(VAR_8);

 if (VAR_10 != ((void*)0))
  FUNC_0(VAR_5, VAR_10, VAR_1);
 FUNC_0(VAR_5, VAR_9, VAR_2);

 FUNC_4(VAR_9);
 if (VAR_10 != ((void*)0))
  FUNC_7(VAR_10);

 return (0);
}
