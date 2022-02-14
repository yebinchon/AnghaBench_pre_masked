
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dmac; } ;
struct rdma_ah_attr {TYPE_1__ roce; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {scalar_t__ raw; } ;
struct ib_global_route {int hop_limit; TYPE_2__ dgid; struct ib_gid_attr* sgid_attr; } ;
struct ib_gid_attr {scalar_t__ gid_type; int gid; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ,struct ib_gid_attr const*,int*) ;
 struct ib_global_route* FUNC_1 (struct rdma_ah_attr*) ;
 int FUNC_2 (struct in6_addr*,int ) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_1,
           struct rdma_ah_attr *VAR_2)
{
 struct ib_global_route *VAR_3 = FUNC_1(VAR_2);
 const struct ib_gid_attr *VAR_4 = VAR_3->sgid_attr;
 int VAR_5 = 0xff;
 int VAR_6 = 0;




 if (FUNC_3((struct in6_addr *)VAR_3->dgid.raw) &&
     VAR_4->gid_type == VAR_0) {
  FUNC_2((struct in6_addr *)VAR_3->dgid.raw,
    VAR_2->roce.dmac);
  return VAR_6;
 }

 VAR_6 = FUNC_0(&VAR_4->gid, &VAR_3->dgid,
        VAR_2->roce.dmac,
        VAR_4, &VAR_5);

 VAR_3->hop_limit = VAR_5;
 return VAR_6;
}
