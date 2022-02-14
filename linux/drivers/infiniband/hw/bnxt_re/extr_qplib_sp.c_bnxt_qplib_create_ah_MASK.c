
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct creq_create_ah_resp {int xid; } ;
struct cmdq_create_ah {void** dest_mac; int traffic_class; void* pd_id; void* dest_vlan_id_flow_label; void* sgid_index; int hop_limit; int type; void** dgid; } ;
struct TYPE_5__ {int* hw_id; } ;
struct bnxt_qplib_res {TYPE_2__ sgid_tbl; struct bnxt_qplib_rcfw* rcfw; } ;
struct bnxt_qplib_rcfw {int dummy; } ;
struct bnxt_qplib_gid {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct bnxt_qplib_ah {size_t sgid_index; int flow_label; int id; int dmac; int traffic_class; TYPE_3__* pd; int hop_limit; int nw_type; TYPE_1__ dgid; } ;
struct TYPE_6__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmdq_create_ah,int ,int) ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,void*,void*,int *,int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int ,int) ;

int FUNC_6(struct bnxt_qplib_res *VAR_3, struct bnxt_qplib_ah *VAR_4,
    bool VAR_5)
{
 struct bnxt_qplib_rcfw *VAR_6 = VAR_3->rcfw;
 struct cmdq_create_ah VAR_7;
 struct creq_create_ah_resp VAR_8;
 u16 VAR_9 = 0;
 u32 VAR_10[4];
 u16 VAR_11[3];
 int VAR_12;

 FUNC_0(VAR_7, VAR_2, VAR_9);

 FUNC_5(VAR_10, VAR_4->dgid.data, sizeof(struct bnxt_qplib_gid));
 VAR_7.dgid[0] = FUNC_3(VAR_10[0]);
 VAR_7.dgid[1] = FUNC_3(VAR_10[1]);
 VAR_7.dgid[2] = FUNC_3(VAR_10[2]);
 VAR_7.dgid[3] = FUNC_3(VAR_10[3]);

 VAR_7.type = VAR_4->nw_type;
 VAR_7.hop_limit = VAR_4->hop_limit;
 VAR_7.sgid_index = FUNC_2(VAR_3->sgid_tbl.hw_id[VAR_4->sgid_index]);
 VAR_7.dest_vlan_id_flow_label = FUNC_3((VAR_4->flow_label &
     VAR_1) |
     VAR_0);
 VAR_7.pd_id = FUNC_3(VAR_4->pd->id);
 VAR_7.traffic_class = VAR_4->traffic_class;


 FUNC_5(VAR_11, VAR_4->dmac, 6);
 VAR_7.dest_mac[0] = FUNC_2(VAR_11[0]);
 VAR_7.dest_mac[1] = FUNC_2(VAR_11[1]);
 VAR_7.dest_mac[2] = FUNC_2(VAR_11[2]);

 VAR_12 = FUNC_1(VAR_6, (void *)&VAR_7, (void *)&VAR_8,
       ((void*)0), VAR_5);
 if (VAR_12)
  return VAR_12;

 VAR_4->id = FUNC_4(VAR_8.xid);
 return 0;
}
