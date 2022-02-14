
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rdma_ah_attr {int dummy; } ;
struct TYPE_6__ {int interface_id; int subnet_prefix; } ;
struct TYPE_7__ {TYPE_2__ global; } ;
struct ib_global_route {int hop_limit; TYPE_3__ dgid; scalar_t__ sgid_index; } ;
struct TYPE_5__ {int gid_prefix; } ;
struct hfi1_ibport {TYPE_1__ rvp; } ;
struct TYPE_8__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct hfi1_ibport*) ;
 struct ib_global_route* FUNC_3 (struct rdma_ah_attr*) ;
 int FUNC_4 (struct rdma_ah_attr*,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,scalar_t__) ;
 int FUNC_6 (struct rdma_ah_attr*,int ) ;

__attribute__((used)) static void FUNC_7(struct hfi1_ibport *VAR_2,
       struct rdma_ah_attr *VAR_3, u32 VAR_4)
{
 FUNC_5(VAR_3, VAR_4);
 FUNC_6(VAR_3, FUNC_2(VAR_2)->port);
 if (VAR_4 >= FUNC_1(VAR_1)) {
  struct ib_global_route *VAR_5 = FUNC_3(VAR_3);

  FUNC_4(VAR_3, VAR_0);
  VAR_5->sgid_index = 0;
  VAR_5->hop_limit = 1;
  VAR_5->dgid.global.subnet_prefix =
   VAR_2->rvp.gid_prefix;
  VAR_5->dgid.global.interface_id = FUNC_0(VAR_4);
 }
}
