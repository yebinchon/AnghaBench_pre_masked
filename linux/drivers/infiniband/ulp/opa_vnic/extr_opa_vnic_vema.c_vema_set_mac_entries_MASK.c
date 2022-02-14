
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opa_vnic_vema_port {int dummy; } ;
struct TYPE_2__ {void* status; } ;
struct opa_vnic_vema_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct opa_vnic_adapter {int dummy; } ;
struct opa_veswport_mactable {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (struct opa_vnic_adapter*,struct opa_veswport_mactable*) ;
 int FUNC_1 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;
 struct opa_vnic_adapter* FUNC_2 (struct opa_vnic_vema_mad*,struct opa_vnic_vema_port*) ;
 scalar_t__ FUNC_3 (struct opa_veswport_mactable*) ;

__attribute__((used)) static void FUNC_4(struct opa_vnic_vema_port *VAR_2,
     struct opa_vnic_vema_mad *VAR_3,
     struct opa_vnic_vema_mad *VAR_4)
{
 struct opa_veswport_mactable *VAR_5;
 struct opa_vnic_adapter *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_6) {
  VAR_4->mad_hdr.status = VAR_0;
  return;
 }

 VAR_5 = (struct opa_veswport_mactable *)VAR_3->data;
 if (FUNC_3(VAR_5)) {
  if (FUNC_0(VAR_6, VAR_5))
   VAR_4->mad_hdr.status = VAR_1;
 } else {
  VAR_4->mad_hdr.status = VAR_1;
 }
 FUNC_1(VAR_2, VAR_3, VAR_4);
}
