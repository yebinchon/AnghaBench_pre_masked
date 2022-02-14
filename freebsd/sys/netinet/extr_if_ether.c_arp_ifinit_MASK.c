
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct ifnet {int dummy; } ;
struct ifaddr {struct sockaddr* ifa_addr; int * ifa_carp; } ;
struct epoch_tracker {int dummy; } ;


 int FUNC_0 (struct ifnet*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct epoch_tracker) ;
 int FUNC_3 (struct ifnet*,struct sockaddr const*) ;
 int FUNC_4 (struct ifnet*,TYPE_1__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct ifaddr*) ;
 scalar_t__ FUNC_6 (int ) ;

void
FUNC_7(struct ifnet *VAR_2, struct ifaddr *VAR_3)
{
 struct epoch_tracker VAR_4;
 const struct sockaddr_in *VAR_5;
 const struct sockaddr *VAR_6;

 if (VAR_3->ifa_carp != ((void*)0))
  return;

 VAR_6 = VAR_3->ifa_addr;
 VAR_5 = (const struct sockaddr_in *)VAR_6;

 if (FUNC_6(VAR_5->sin_addr.s_addr) == VAR_0)
  return;
 FUNC_1(VAR_4);
 FUNC_4(VAR_2, VAR_5->sin_addr, FUNC_0(VAR_2));
 FUNC_2(VAR_4);
 if (VAR_1 > 0) {
  FUNC_5(VAR_3);
 }

 FUNC_3(VAR_2, VAR_6);
}
