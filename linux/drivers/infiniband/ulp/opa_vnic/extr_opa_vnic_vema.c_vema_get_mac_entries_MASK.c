
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opa_vnic_vema_port {int dummy; } ;
struct TYPE_2__ {void* status; } ;
struct opa_vnic_vema_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct opa_vnic_adapter {int dummy; } ;
struct opa_veswport_mactable {int num_entries; int offset; } ;


 void* VAR_0 ;
 int FUNC_0 (struct opa_vnic_adapter*,struct opa_veswport_mactable*) ;
 struct opa_vnic_adapter* FUNC_1 (struct opa_vnic_vema_mad*,struct opa_vnic_vema_port*) ;
 scalar_t__ FUNC_2 (struct opa_veswport_mactable*) ;

__attribute__((used)) static void FUNC_3(struct opa_vnic_vema_port *VAR_1,
     struct opa_vnic_vema_mad *VAR_2,
     struct opa_vnic_vema_mad *VAR_3)
{
 struct opa_veswport_mactable *VAR_4, *VAR_5;
 struct opa_vnic_adapter *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_6) {
  VAR_3->mad_hdr.status = VAR_0;
  return;
 }

 VAR_4 = (struct opa_veswport_mactable *)VAR_2->data;
 VAR_5 = (struct opa_veswport_mactable *)VAR_3->data;

 if (FUNC_2(VAR_4)) {
  VAR_5->offset = VAR_4->offset;
  VAR_5->num_entries = VAR_4->num_entries;
  FUNC_0(VAR_6, VAR_5);
 } else {
  VAR_3->mad_hdr.status = VAR_0;
 }
}
