
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct __opa_per_veswport_info {int rsvd3; int rsvd2; int non_vlan_vl_mc; int non_vlan_sc_mc; int non_vlan_vl_uc; int non_vlan_sc_uc; int pcp_to_vl_mc; int pcp_to_sc_mc; int pcp_to_vl_uc; int pcp_to_sc_uc; void* encap_slid; int rsvd1; int config_state; int base_mac_addr; int rsvd0; void* port_num; } ;
struct TYPE_2__ {struct __opa_per_veswport_info vport; } ;
struct opa_vnic_adapter {TYPE_1__ info; } ;
struct opa_per_veswport_info {int rsvd3; int rsvd2; int non_vlan_vl_mc; int non_vlan_sc_mc; int non_vlan_vl_uc; int non_vlan_sc_uc; int pcp_to_vl_mc; int pcp_to_sc_mc; int pcp_to_vl_uc; int pcp_to_sc_uc; int encap_slid; int rsvd1; int config_state; int base_mac_addr; int rsvd0; int port_num; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct opa_vnic_adapter *VAR_0,
        struct opa_per_veswport_info *VAR_1)
{
 struct __opa_per_veswport_info *VAR_2 = &VAR_0->info.vport;

 VAR_2->port_num = FUNC_1(VAR_1->port_num);
 FUNC_2(VAR_2->rsvd0, VAR_1->rsvd0, FUNC_0(VAR_1->rsvd0));

 FUNC_2(VAR_2->base_mac_addr, VAR_1->base_mac_addr,
        FUNC_0(VAR_2->base_mac_addr));
 VAR_2->config_state = VAR_1->config_state;
 FUNC_2(VAR_2->rsvd1, VAR_1->rsvd1, FUNC_0(VAR_1->rsvd1));

 VAR_2->encap_slid = FUNC_1(VAR_1->encap_slid);
 FUNC_2(VAR_2->pcp_to_sc_uc, VAR_1->pcp_to_sc_uc,
        FUNC_0(VAR_2->pcp_to_sc_uc));
 FUNC_2(VAR_2->pcp_to_vl_uc, VAR_1->pcp_to_vl_uc,
        FUNC_0(VAR_2->pcp_to_vl_uc));
 FUNC_2(VAR_2->pcp_to_sc_mc, VAR_1->pcp_to_sc_mc,
        FUNC_0(VAR_2->pcp_to_sc_mc));
 FUNC_2(VAR_2->pcp_to_vl_mc, VAR_1->pcp_to_vl_mc,
        FUNC_0(VAR_2->pcp_to_vl_mc));
 VAR_2->non_vlan_sc_uc = VAR_1->non_vlan_sc_uc;
 VAR_2->non_vlan_vl_uc = VAR_1->non_vlan_vl_uc;
 VAR_2->non_vlan_sc_mc = VAR_1->non_vlan_sc_mc;
 VAR_2->non_vlan_vl_mc = VAR_1->non_vlan_vl_mc;
 FUNC_2(VAR_2->rsvd2, VAR_1->rsvd2, FUNC_0(VAR_1->rsvd2));
 FUNC_2(VAR_2->rsvd3, VAR_1->rsvd3, FUNC_0(VAR_1->rsvd3));
}
