
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opa_vnic_vema_port {int dummy; } ;
struct opa_vnic_vema_mad {scalar_t__ data; } ;
struct opa_vnic_adapter {int dummy; } ;
struct opa_veswport_info {int vport; int vesw; } ;


 int FUNC_0 (struct opa_veswport_info*,int ,int) ;
 int FUNC_1 (struct opa_vnic_adapter*,int *) ;
 int FUNC_2 (struct opa_vnic_adapter*,int *) ;
 int FUNC_3 (struct opa_veswport_info*) ;
 struct opa_vnic_adapter* FUNC_4 (struct opa_vnic_vema_mad*,struct opa_vnic_vema_port*) ;

__attribute__((used)) static void FUNC_5(struct opa_vnic_vema_port *VAR_0,
       struct opa_vnic_vema_mad *VAR_1,
       struct opa_vnic_vema_mad *VAR_2)
{
 struct opa_veswport_info *VAR_3 =
      (struct opa_veswport_info *)VAR_2->data;
 struct opa_vnic_adapter *VAR_4;

 VAR_4 = FUNC_4(VAR_1, VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_3, 0, sizeof(*VAR_3));
  FUNC_2(VAR_4, &VAR_3->vesw);
  FUNC_1(VAR_4,
            &VAR_3->vport);
 } else {
  FUNC_3(VAR_3);
 }
}
