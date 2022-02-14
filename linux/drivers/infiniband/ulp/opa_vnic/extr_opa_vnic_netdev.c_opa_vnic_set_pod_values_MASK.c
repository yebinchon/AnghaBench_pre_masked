
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int eth_mtu; } ;
struct TYPE_4__ {int eth_link_status; int config_state; int max_smac_ent; int max_mac_tbl_ent; } ;
struct TYPE_5__ {TYPE_3__ vesw; TYPE_1__ vport; } ;
struct opa_vnic_adapter {TYPE_2__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(struct opa_vnic_adapter *VAR_5)
{
 VAR_5->info.vport.max_mac_tbl_ent = VAR_2;
 VAR_5->info.vport.max_smac_ent = VAR_3;
 VAR_5->info.vport.config_state = VAR_4;
 VAR_5->info.vport.eth_link_status = VAR_1;
 VAR_5->info.vesw.eth_mtu = VAR_0;
}
