
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct rdma_id_private {int afonly; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {int ip6; TYPE_2__ ip4; } ;
struct cma_hdr {TYPE_3__ dst_addr; } ;
typedef int ip6_addr ;
typedef int __be32 ;





 scalar_t__ FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (struct cma_hdr const*) ;
 struct sockaddr* FUNC_2 (struct rdma_id_private*) ;
 int FUNC_3 (int *,struct in6_addr*,int) ;

__attribute__((used)) static bool FUNC_4(struct rdma_id_private *VAR_0,
       const struct cma_hdr *VAR_1)
{
 struct sockaddr *VAR_2 = FUNC_2(VAR_0);
 __be32 VAR_3;
 struct in6_addr VAR_4;

 if (FUNC_0(VAR_2) && !VAR_0->afonly)
  return 1;

 switch (VAR_2->sa_family) {
 case 129:
  VAR_3 = ((struct sockaddr_in *)VAR_2)->sin_addr.s_addr;
  if (FUNC_1(VAR_1) != 4)
   return 0;
  if (!FUNC_0(VAR_2) &&
      VAR_1->dst_addr.ip4.addr != VAR_3)
   return 0;
  break;
 case 128:
  VAR_4 = ((struct sockaddr_in6 *)VAR_2)->sin6_addr;
  if (FUNC_1(VAR_1) != 6)
   return 0;
  if (!FUNC_0(VAR_2) &&
      FUNC_3(&VAR_1->dst_addr.ip6, &VAR_4, sizeof(VAR_4)))
   return 0;
  break;
 case 130:
  return 1;
 default:
  return 0;
 }

 return 1;
}
