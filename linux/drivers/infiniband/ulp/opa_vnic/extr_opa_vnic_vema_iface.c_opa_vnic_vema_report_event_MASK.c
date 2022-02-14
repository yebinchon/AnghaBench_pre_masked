
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int encap_slid; int port_num; } ;
struct TYPE_4__ {int vesw_id; int fabric_id; } ;
struct __opa_veswport_info {TYPE_1__ vport; TYPE_2__ vesw; } ;
struct opa_vnic_adapter {int vport_num; int port_num; struct __opa_veswport_info info; } ;
struct __opa_veswport_trap {int opcode; int veswportindex; int opaportnum; int veswportnum; int veswid; int fabric_id; } ;


 int FUNC_0 (struct opa_vnic_adapter*,struct __opa_veswport_trap*,int ) ;

void FUNC_1(struct opa_vnic_adapter *VAR_0, u8 VAR_1)
{
 struct __opa_veswport_info *VAR_2 = &VAR_0->info;
 struct __opa_veswport_trap VAR_3;

 VAR_3.fabric_id = VAR_2->vesw.fabric_id;
 VAR_3.veswid = VAR_2->vesw.vesw_id;
 VAR_3.veswportnum = VAR_2->vport.port_num;
 VAR_3.opaportnum = VAR_0->port_num;
 VAR_3.veswportindex = VAR_0->vport_num;
 VAR_3.opcode = VAR_1;

 FUNC_0(VAR_0, &VAR_3, VAR_2->vport.encap_slid);
}
