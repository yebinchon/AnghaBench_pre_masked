
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_scope_id; } ;
struct sockaddr {int dummy; } ;
struct rtentry {struct net_device* rt_ifp; } ;
struct net_device {int if_index; int if_vnet; } ;
typedef int src_tmp ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 struct rtentry* FUNC_6 (struct sockaddr*,int,int ) ;
 int FUNC_7 (struct sockaddr_in6*,int ) ;

__attribute__((used)) static bool FUNC_8(struct net_device *VAR_0,
      const struct sockaddr_in6 *VAR_1,
      const struct sockaddr_in6 *VAR_2)
{
 return 0;

}
