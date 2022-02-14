
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdma_ah_attr {int type; } ;
struct ocrdma_grh {int * dgid; int tclass_flow; int pdid_hoplimit; } ;
struct ocrdma_eth_vlan {int dummy; } ;
struct ocrdma_eth_basic {int dummy; } ;
struct TYPE_2__ {int vlan_tag; } ;
struct ocrdma_av {int valid; TYPE_1__ eth_hdr; } ;
struct ocrdma_ah {int sgid_index; struct ocrdma_av* av; } ;
struct ib_ah {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ocrdma_ah* FUNC_2 (struct ib_ah*) ;
 int FUNC_3 (struct rdma_ah_attr*,int *) ;
 int FUNC_4 (struct rdma_ah_attr*,int *,int,int ,int,int) ;
 int FUNC_5 (struct rdma_ah_attr*,int) ;

int FUNC_6(struct ib_ah *VAR_1, struct rdma_ah_attr *VAR_2)
{
 struct ocrdma_ah *VAR_3 = FUNC_2(VAR_1);
 struct ocrdma_av *VAR_4 = VAR_3->av;
 struct ocrdma_grh *VAR_5;

 VAR_2->type = VAR_1->type;
 if (VAR_3->av->valid & VAR_0) {
  VAR_5 = (struct ocrdma_grh *)((u8 *)VAR_3->av +
    sizeof(struct ocrdma_eth_vlan));
  FUNC_5(VAR_2, FUNC_0(VAR_4->eth_hdr.vlan_tag) >> 13);
 } else {
  VAR_5 = (struct ocrdma_grh *)((u8 *)VAR_3->av +
     sizeof(struct ocrdma_eth_basic));
  FUNC_5(VAR_2, 0);
 }
 FUNC_4(VAR_2, ((void*)0),
   FUNC_1(VAR_5->tclass_flow) & 0xffffffff,
   VAR_3->sgid_index,
   FUNC_1(VAR_5->pdid_hoplimit) & 0xff,
   FUNC_1(VAR_5->tclass_flow) >> 24);
 FUNC_3(VAR_2, &VAR_5->dgid[0]);
 return 0;
}
