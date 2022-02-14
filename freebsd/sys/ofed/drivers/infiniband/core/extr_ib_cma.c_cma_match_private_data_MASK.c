
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_5__ {scalar_t__ ps; } ;
struct rdma_id_private {TYPE_1__ id; int afonly; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {int ip6; TYPE_3__ ip4; } ;
struct cma_hdr {TYPE_4__ dst_addr; } ;
typedef int ip6_addr ;
typedef int __be32 ;





 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (struct cma_hdr const*) ;
 int FUNC_2 (struct in6_addr*) ;
 struct sockaddr* FUNC_3 (struct rdma_id_private*) ;
 int FUNC_4 (int *,struct in6_addr*,int) ;
 int FUNC_5 (struct rdma_id_private*,void const*,struct sockaddr*) ;

__attribute__((used)) static bool FUNC_6(struct rdma_id_private *VAR_1,
       const void *VAR_2)
{
 const struct cma_hdr *VAR_3 = VAR_2;
 struct sockaddr *VAR_4 = FUNC_3(VAR_1);
 __be32 VAR_5;
 struct in6_addr VAR_6;

 if (FUNC_0(VAR_4) && !VAR_1->afonly)
  return 1;

 if (VAR_1->id.ps == VAR_0)
  return FUNC_5(VAR_1, VAR_2, VAR_4);

 switch (VAR_4->sa_family) {
 case 129:
  VAR_5 = ((struct sockaddr_in *)VAR_4)->sin_addr.s_addr;
  if (FUNC_1(VAR_3) != 4)
   return 0;
  if (!FUNC_0(VAR_4) &&
      VAR_3->dst_addr.ip4.addr != VAR_5)
   return 0;
  break;
 case 128:
  VAR_6 = ((struct sockaddr_in6 *)VAR_4)->sin6_addr;
  if (FUNC_1(VAR_3) != 6)
   return 0;
  FUNC_2(&VAR_6);
  if (!FUNC_0(VAR_4) &&
      FUNC_4(&VAR_3->dst_addr.ip6, &VAR_6, sizeof(VAR_6)))
   return 0;
  break;
 case 130:
  return 1;
 default:
  return 0;
 }

 return 1;
}
