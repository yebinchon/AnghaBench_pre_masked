
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct opa_vnic_vema_port {int dummy; } ;
struct TYPE_2__ {int status; } ;
struct opa_vnic_vema_mad {scalar_t__ data; TYPE_1__ mad_hdr; } ;
struct opa_vnic_adapter {int dummy; } ;
struct opa_veswport_iface_macs {scalar_t__ num_macs_in_msg; int start_idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct opa_vnic_adapter*,struct opa_veswport_iface_macs*) ;
 int FUNC_2 (struct opa_vnic_adapter*,struct opa_veswport_iface_macs*) ;
 struct opa_vnic_adapter* FUNC_3 (struct opa_vnic_vema_mad*,struct opa_vnic_vema_port*) ;

__attribute__((used)) static void FUNC_4(struct opa_vnic_vema_port *VAR_4,
         struct opa_vnic_vema_mad *VAR_5,
         struct opa_vnic_vema_mad *VAR_6,
         u16 VAR_7)
{
 struct opa_veswport_iface_macs *VAR_8, *VAR_9;
 int VAR_10 = (VAR_2 - sizeof(*VAR_9)) / VAR_0;
 struct opa_vnic_adapter *VAR_11;

 VAR_11 = FUNC_3(VAR_5, VAR_4);
 if (!VAR_11) {
  VAR_6->mad_hdr.status = VAR_3;
  return;
 }

 VAR_8 = (struct opa_veswport_iface_macs *)VAR_5->data;
 VAR_9 = (struct opa_veswport_iface_macs *)VAR_6->data;

 VAR_9->start_idx = VAR_8->start_idx;
 if (VAR_8->num_macs_in_msg)
  VAR_9->num_macs_in_msg = VAR_8->num_macs_in_msg;
 else
  VAR_9->num_macs_in_msg = FUNC_0(VAR_10);

 if (VAR_7 == VAR_1)
  FUNC_1(VAR_11, VAR_9);
 else
  FUNC_2(VAR_11, VAR_9);
}
