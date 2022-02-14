
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
typedef int u_int ;
struct nhop6_extended {int nh_mtu; struct ifnet* nh_ifp; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct nhop6_extended*) ;
 scalar_t__ FUNC_1 (int ,struct in6_addr*,int ,int ,int ,struct nhop6_extended*) ;
 int FUNC_2 (struct in6_addr const*,struct in6_addr*,int *) ;
 int FUNC_3 (struct ifnet*,struct in6_addr const*,int ,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_4(u_int VAR_2, const struct in6_addr *VAR_3, u_long *VAR_4)
{
 struct nhop6_extended VAR_5;
 struct in6_addr VAR_6;
 uint32_t VAR_7;
 struct ifnet *VAR_8;
 u_long VAR_9;
 int VAR_10;

 FUNC_2(VAR_3, &VAR_6, &VAR_7);
 if (FUNC_1(VAR_2, &VAR_6, VAR_7, VAR_1, 0, &VAR_5) != 0)
  return (VAR_0);

 VAR_8 = VAR_5;
 VAR_9 = VAR_5;

 VAR_10 = FUNC_3(VAR_8, VAR_3, VAR_9, VAR_4, ((void*)0), 0);
 FUNC_0(VAR_2, &VAR_5);

 return (VAR_10);
}
