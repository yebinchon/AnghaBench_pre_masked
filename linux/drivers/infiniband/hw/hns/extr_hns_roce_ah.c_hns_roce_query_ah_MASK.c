
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_ah_attr {int dummy; } ;
struct ib_ah {int dummy; } ;
struct TYPE_2__ {int dgid; int tclass; int hop_limit; int gid_index; int flowlabel; int stat_rate; int port; int sl; } ;
struct hns_roce_ah {TYPE_1__ av; } ;


 int FUNC_0 (struct rdma_ah_attr*,int ,int) ;
 int FUNC_1 (struct rdma_ah_attr*,int ) ;
 int FUNC_2 (struct rdma_ah_attr*,int *,int ,int ,int ,int ) ;
 int FUNC_3 (struct rdma_ah_attr*,int ) ;
 int FUNC_4 (struct rdma_ah_attr*,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,int ) ;
 struct hns_roce_ah* FUNC_6 (struct ib_ah*) ;

int FUNC_7(struct ib_ah *VAR_0, struct rdma_ah_attr *VAR_1)
{
 struct hns_roce_ah *VAR_2 = FUNC_6(VAR_0);

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 FUNC_4(VAR_1, VAR_2->av.sl);
 FUNC_3(VAR_1, VAR_2->av.port);
 FUNC_5(VAR_1, VAR_2->av.stat_rate);
 FUNC_2(VAR_1, ((void*)0), VAR_2->av.flowlabel,
   VAR_2->av.gid_index, VAR_2->av.hop_limit, VAR_2->av.tclass);
 FUNC_1(VAR_1, VAR_2->av.dgid);

 return 0;
}
