
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct net_device {int dummy; } ;




 int FUNC_0 (struct net_device*,struct sockaddr_in const*,struct sockaddr_in const*) ;
 int FUNC_1 (struct net_device*,struct sockaddr_in6 const*,struct sockaddr_in6 const*) ;

__attribute__((used)) static bool FUNC_2(struct net_device *VAR_0,
        const struct sockaddr *VAR_1,
        const struct sockaddr *VAR_2)
{
 const struct sockaddr_in *VAR_3 = (const struct sockaddr_in *)VAR_1;
 const struct sockaddr_in *VAR_4 = (const struct sockaddr_in *)VAR_2;
 const struct sockaddr_in6 *VAR_5 = (const struct sockaddr_in6 *)VAR_1;
 const struct sockaddr_in6 *VAR_6 = (const struct sockaddr_in6 *)VAR_2;

 switch (VAR_1->sa_family) {
 case 129:
  return VAR_2->sa_family == 129 &&
         FUNC_0(VAR_0, VAR_3, VAR_4);

 case 128:
  return VAR_2->sa_family == 128 &&
         FUNC_1(VAR_0, VAR_5, VAR_6);

 default:
  return 0;
 }
}
