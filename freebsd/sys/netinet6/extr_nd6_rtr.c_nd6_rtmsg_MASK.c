
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtentry {int rt_fibnum; int rt_flags; TYPE_1__* rt_ifa; struct ifnet* rt_ifp; int rt_gateway; } ;
struct rt_addrinfo {int * rti_info; } ;
struct ifnet {int if_addrhead; } ;
struct ifaddr {int ifa_addr; } ;
struct epoch_tracker {int dummy; } ;
typedef int info ;
typedef int caddr_t ;
struct TYPE_2__ {int ifa_addr; } ;


 struct ifaddr* FUNC_0 (int *) ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct epoch_tracker) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ifaddr*) ;
 int FUNC_5 (struct ifaddr*) ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (struct rtentry*) ;
 int FUNC_8 (int,struct rt_addrinfo*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(int VAR_5, struct rtentry *VAR_6)
{
 struct rt_addrinfo VAR_7;
 struct ifnet *VAR_8;
 struct ifaddr *VAR_9;

 FUNC_3((caddr_t)&VAR_7, sizeof(VAR_7));
 VAR_7.rti_info[VAR_0] = FUNC_6(VAR_6);
 VAR_7.rti_info[VAR_1] = VAR_6->rt_gateway;
 VAR_7.rti_info[VAR_4] = FUNC_7(VAR_6);
 VAR_8 = VAR_6->rt_ifp;
 if (VAR_8 != ((void*)0)) {
  struct epoch_tracker VAR_10;

  FUNC_1(VAR_10);
  VAR_9 = FUNC_0(&VAR_8->if_addrhead);
  VAR_7.rti_info[VAR_3] = VAR_9->ifa_addr;
  FUNC_5(VAR_9);
  FUNC_2(VAR_10);
  VAR_7.rti_info[VAR_2] = VAR_6->rt_ifa->ifa_addr;
 } else
  VAR_9 = ((void*)0);

 FUNC_8(VAR_5, &VAR_7, VAR_6->rt_flags, 0, VAR_6->rt_fibnum);
 if (VAR_9 != ((void*)0))
  FUNC_4(VAR_9);
}
