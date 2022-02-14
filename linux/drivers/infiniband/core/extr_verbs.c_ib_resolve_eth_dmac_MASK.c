
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dmac; } ;
struct TYPE_6__ {scalar_t__ raw; } ;
struct TYPE_5__ {TYPE_3__ dgid; } ;
struct rdma_ah_attr {TYPE_1__ roce; TYPE_2__ grh; } ;
struct in6_addr {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct ib_device*,struct rdma_ah_attr*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct in6_addr*) ;
 int FUNC_3 (struct in6_addr*,char*) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct in6_addr*) ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_0,
          struct rdma_ah_attr *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_5((struct in6_addr *)VAR_1->grh.dgid.raw)) {
  if (FUNC_2((struct in6_addr *)VAR_1->grh.dgid.raw)) {
   __be32 VAR_3 = 0;

   FUNC_4(&VAR_3, VAR_1->grh.dgid.raw + 12, 4);
   FUNC_1(VAR_3, (char *)VAR_1->roce.dmac);
  } else {
   FUNC_3((struct in6_addr *)VAR_1->grh.dgid.raw,
     (char *)VAR_1->roce.dmac);
  }
 } else {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 }
 return VAR_2;
}
