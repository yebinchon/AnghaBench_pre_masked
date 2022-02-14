
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_7__ {void** dwords; void* ipv4_addr; int * bytes; } ;
struct qed_rdma_modify_qp_in_params {int vlan_id; TYPE_3__ dgid; TYPE_3__ sgid; int roce_mode; int modify_flags; } ;
struct ib_qp_attr {int ah_attr; } ;
struct ib_qp {int dummy; } ;
struct TYPE_6__ {struct TYPE_6__* raw; } ;
struct ib_global_route {TYPE_2__ dgid; struct ib_gid_attr* sgid_attr; } ;
struct TYPE_5__ {TYPE_2__* raw; } ;
struct ib_gid_attr {TYPE_1__ gid; } ;
typedef enum rdma_network_type { ____Placeholder_rdma_network_type } rdma_network_type ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (TYPE_2__*) ;
 struct ib_global_route* FUNC_5 (int *) ;
 int FUNC_6 (struct ib_gid_attr const*) ;
 int FUNC_7 (struct ib_gid_attr const*,int *,int *) ;

__attribute__((used)) static inline int FUNC_8(struct ib_qp *VAR_5,
       struct ib_qp_attr *VAR_6,
       int VAR_7,
       struct qed_rdma_modify_qp_in_params
       *VAR_8)
{
 const struct ib_gid_attr *VAR_9;
 enum rdma_network_type VAR_10;
 const struct ib_global_route *VAR_11 = FUNC_5(&VAR_6->ah_attr);
 u32 VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_9 = VAR_11->sgid_attr;
 VAR_13 = FUNC_7(VAR_9, &VAR_8->vlan_id, ((void*)0));
 if (VAR_13)
  return VAR_13;

 VAR_10 = FUNC_6(VAR_9);
 switch (VAR_10) {
 case 128:
  FUNC_1(&VAR_8->sgid.bytes[0], &VAR_9->gid.raw[0],
         sizeof(VAR_8->sgid));
  FUNC_1(&VAR_8->dgid.bytes[0],
         &VAR_11->dgid,
         sizeof(VAR_8->dgid));
  VAR_8->roce_mode = VAR_3;
  FUNC_0(VAR_8->modify_flags,
     VAR_0, 1);
  break;
 case 130:
  FUNC_1(&VAR_8->sgid.bytes[0], &VAR_9->gid.raw[0],
         sizeof(VAR_8->sgid));
  FUNC_1(&VAR_8->dgid.bytes[0],
         &VAR_11->dgid,
         sizeof(VAR_8->dgid));
  VAR_8->roce_mode = VAR_1;
  break;
 case 129:
  FUNC_2(&VAR_8->sgid, 0, sizeof(VAR_8->sgid));
  FUNC_2(&VAR_8->dgid, 0, sizeof(VAR_8->dgid));
  VAR_12 = FUNC_4(VAR_9->gid.raw);
  VAR_8->sgid.ipv4_addr = VAR_12;
  VAR_12 =
      FUNC_4(VAR_11->dgid.raw);
  VAR_8->dgid.ipv4_addr = VAR_12;
  FUNC_0(VAR_8->modify_flags,
     VAR_0, 1);
  VAR_8->roce_mode = VAR_2;
  break;
 }

 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  VAR_8->sgid.dwords[VAR_14] = FUNC_3(VAR_8->sgid.dwords[VAR_14]);
  VAR_8->dgid.dwords[VAR_14] = FUNC_3(VAR_8->dgid.dwords[VAR_14]);
 }

 if (VAR_8->vlan_id >= VAR_4)
  VAR_8->vlan_id = 0;

 return 0;
}
