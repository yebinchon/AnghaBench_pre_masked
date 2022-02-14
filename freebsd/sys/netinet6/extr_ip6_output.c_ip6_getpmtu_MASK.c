
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_long ;
typedef int u_int ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; int sin6_family; } ;
struct route_in6 {TYPE_1__* ro_rt; scalar_t__ ro_mtu; int ro_dst; } ;
struct nhop6_basic {scalar_t__ nh_mtu; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {scalar_t__ rt_mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*,struct in6_addr const*) ;
 int FUNC_1 (struct sockaddr_in6*,int) ;
 scalar_t__ FUNC_2 (int ,struct in6_addr*,int ,int ,int ,struct nhop6_basic*) ;
 int FUNC_3 (struct in6_addr const*,struct in6_addr*,int *) ;
 int FUNC_4 (struct ifnet*,struct in6_addr const*,scalar_t__,scalar_t__*,int*,int ) ;

__attribute__((used)) static int
FUNC_5(struct route_in6 *VAR_1, int VAR_2,
    struct ifnet *VAR_3, const struct in6_addr *VAR_4, u_long *VAR_5,
    int *VAR_6, u_int VAR_7, u_int VAR_8)
{
 struct nhop6_basic VAR_9;
 struct in6_addr VAR_10;
 uint32_t VAR_11;
 struct sockaddr_in6 *VAR_12;
 u_long VAR_13;

 VAR_13 = 0;
 if (VAR_2) {






  VAR_12 = (struct sockaddr_in6 *)&VAR_1->ro_dst;
  if (!FUNC_0(&VAR_12->sin6_addr, VAR_4))
   VAR_1->ro_mtu = 0;

  if (VAR_1->ro_mtu == 0) {
   FUNC_1(VAR_12, sizeof(*VAR_12));
   VAR_12->sin6_family = VAR_0;
   VAR_12->sin6_len = sizeof(struct sockaddr_in6);
   VAR_12->sin6_addr = *VAR_4;

   FUNC_3(VAR_4, &VAR_10, &VAR_11);
   if (FUNC_2(VAR_7, &VAR_10, VAR_11, 0, 0,
       &VAR_9) == 0)
    VAR_1->ro_mtu = VAR_9;
  }

  VAR_13 = VAR_1->ro_mtu;
 }

 if (VAR_1->ro_rt)
  VAR_13 = VAR_1->ro_rt->rt_mtu;

 return (FUNC_4(VAR_3, VAR_4, VAR_13, VAR_5, VAR_6, VAR_8));
}
