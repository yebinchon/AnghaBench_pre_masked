
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct rtentry {struct net_device* rt_ifp; } ;
struct net_device {int if_vnet; } ;
typedef int src_tmp ;
typedef scalar_t__ __be32 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 struct rtentry* FUNC_9 (struct sockaddr*,int,int ) ;

__attribute__((used)) static bool FUNC_10(struct net_device *VAR_0,
      const struct sockaddr_in *VAR_1,
      const struct sockaddr_in *VAR_2)
{
 return 0;

}
