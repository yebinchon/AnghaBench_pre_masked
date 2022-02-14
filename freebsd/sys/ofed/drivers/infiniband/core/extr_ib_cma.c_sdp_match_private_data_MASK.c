
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {int ip6; TYPE_1__ ip4; } ;
struct sdp_hh {TYPE_2__ dst_addr; } ;
struct rdma_id_private {int dummy; } ;
typedef int ip6_addr ;
typedef int __be32 ;





 int FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (int *,struct in6_addr*,int) ;
 int FUNC_3 (struct sdp_hh const*) ;

__attribute__((used)) static bool FUNC_4(struct rdma_id_private *VAR_0,
       const struct sdp_hh *VAR_1,
       struct sockaddr *VAR_2)
{
 __be32 VAR_3;
 struct in6_addr VAR_4;

 switch (VAR_2->sa_family) {
 case 129:
  VAR_3 = ((struct sockaddr_in *)VAR_2)->sin_addr.s_addr;
  if (FUNC_3(VAR_1) != 4)
   return 0;
  if (!FUNC_0(VAR_2) &&
      VAR_1->dst_addr.ip4.addr != VAR_3)
   return 0;
  break;
 case 128:
  VAR_4 = ((struct sockaddr_in6 *)VAR_2)->sin6_addr;
  if (FUNC_3(VAR_1) != 6)
   return 0;
  FUNC_1(&VAR_4);
  if (!FUNC_0(VAR_2) &&
      FUNC_2(&VAR_1->dst_addr.ip6, &VAR_4, sizeof(VAR_4)))
   return 0;
  break;
 case 130:
  return 1;
 default:
  return 0;
 }

 return 1;
}
