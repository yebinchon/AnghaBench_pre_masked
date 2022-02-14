
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct __opa_vesw_info {int rsvd4; void* eth_mtu; int rsvd3; void* rc; void** u_ucast_dlid; void* u_mcast_dlid; int rsvd2; void* pkey; int rsvd1; void* def_port_mask; int rsvd0; void* vesw_id; void* fabric_id; } ;
struct TYPE_2__ {struct __opa_vesw_info vesw; } ;
struct opa_vnic_adapter {TYPE_1__ info; } ;
struct opa_vesw_info {int rsvd4; int eth_mtu; int rsvd3; int rc; int * u_ucast_dlid; int u_mcast_dlid; int rsvd2; int pkey; int rsvd1; int def_port_mask; int rsvd0; int vesw_id; int fabric_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct opa_vnic_adapter *VAR_1,
       struct opa_vesw_info *VAR_2)
{
 struct __opa_vesw_info *VAR_3 = &VAR_1->info.vesw;
 int VAR_4;

 VAR_3->fabric_id = FUNC_1(VAR_2->fabric_id);
 VAR_3->vesw_id = FUNC_1(VAR_2->vesw_id);
 FUNC_3(VAR_3->rsvd0, VAR_2->rsvd0, FUNC_0(VAR_2->rsvd0));
 VAR_3->def_port_mask = FUNC_1(VAR_2->def_port_mask);
 FUNC_3(VAR_3->rsvd1, VAR_2->rsvd1, FUNC_0(VAR_2->rsvd1));
 VAR_3->pkey = FUNC_1(VAR_2->pkey);

 FUNC_3(VAR_3->rsvd2, VAR_2->rsvd2, FUNC_0(VAR_2->rsvd2));
 VAR_3->u_mcast_dlid = FUNC_2(VAR_2->u_mcast_dlid);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->u_ucast_dlid[VAR_4] = FUNC_2(VAR_2->u_ucast_dlid[VAR_4]);

 VAR_3->rc = FUNC_2(VAR_2->rc);

 FUNC_3(VAR_3->rsvd3, VAR_2->rsvd3, FUNC_0(VAR_2->rsvd3));
 VAR_3->eth_mtu = FUNC_1(VAR_2->eth_mtu);
 FUNC_3(VAR_3->rsvd4, VAR_2->rsvd4, FUNC_0(VAR_2->rsvd4));
}
