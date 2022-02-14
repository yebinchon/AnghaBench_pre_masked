
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in_device {int dummy; } ;
typedef int __be32 ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct net* FUNC_1 (struct net_device*) ;
 struct in_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct in_device*) ;
 int FUNC_4 (struct net*,struct in_device*,int ,int ,int ) ;
 int FUNC_5 (struct net*,int *,struct net_device*,int) ;

__attribute__((used)) static bool FUNC_6(const struct sockaddr *VAR_2,
     struct net_device *VAR_3)
{
 struct net *VAR_4 = FUNC_1(VAR_3);
 struct in_device *VAR_5;
 struct sockaddr_in *VAR_6 = (struct sockaddr_in *)VAR_2;
 struct sockaddr_in6 *VAR_7 = (struct sockaddr_in6 *)VAR_2;
 __be32 VAR_8;

 switch (VAR_2->sa_family) {
 case 129:
  VAR_5 = FUNC_2(VAR_3);
  if (!VAR_5)
   return 0;

  VAR_8 = FUNC_4(VAR_4, VAR_5, 0,
          VAR_6->sin_addr.s_addr,
          VAR_1);
  FUNC_3(VAR_5);
  if (VAR_8)
   return 1;

  break;
 case 128:
  if (FUNC_0(VAR_0) &&
      FUNC_5(VAR_4, &VAR_7->sin6_addr, VAR_3, 1))
   return 1;

  break;
 }
 return 0;
}
