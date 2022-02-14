
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opa_vnic_vema_port {int dummy; } ;
struct TYPE_2__ {int status; } ;
struct opa_vnic_vema_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct opa_vnic_adapter {int dummy; } ;
struct opa_veswport_error_counters {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct opa_vnic_adapter*,struct opa_veswport_error_counters*) ;
 struct opa_vnic_adapter* FUNC_1 (struct opa_vnic_vema_mad*,struct opa_vnic_vema_port*) ;

__attribute__((used)) static void FUNC_2(struct opa_vnic_vema_port *VAR_1,
        struct opa_vnic_vema_mad *VAR_2,
        struct opa_vnic_vema_mad *VAR_3)
{
 struct opa_veswport_error_counters *VAR_4;
 struct opa_vnic_adapter *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5) {
  VAR_4 = (struct opa_veswport_error_counters *)VAR_3->data;
  FUNC_0(VAR_5, VAR_4);
 } else {
  VAR_3->mad_hdr.status = VAR_0;
 }
}
