
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct opa_vnic_vema_port {struct opa_vnic_ctrl_port* cport; } ;
struct TYPE_2__ {int status; } ;
struct opa_vnic_vema_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct opa_vnic_ctrl_port {int dummy; } ;
struct opa_vnic_adapter {int dummy; } ;
struct opa_veswport_info {int vport; int vesw; } ;


 scalar_t__ FUNC_0 (struct opa_vnic_adapter*) ;
 int VAR_0 ;
 int FUNC_1 (struct opa_vnic_adapter*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct opa_vnic_adapter*) ;
 int FUNC_4 (struct opa_vnic_adapter*,int *) ;
 int FUNC_5 (struct opa_vnic_adapter*,int *) ;
 struct opa_vnic_adapter* FUNC_6 (struct opa_vnic_vema_port*,int ) ;
 int FUNC_7 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;
 struct opa_vnic_adapter* FUNC_8 (struct opa_vnic_vema_mad*,struct opa_vnic_vema_port*) ;
 int FUNC_9 (struct opa_vnic_vema_mad*) ;

__attribute__((used)) static void FUNC_10(struct opa_vnic_vema_port *VAR_1,
       struct opa_vnic_vema_mad *VAR_2,
       struct opa_vnic_vema_mad *VAR_3)
{
 struct opa_vnic_ctrl_port *VAR_4 = VAR_1->cport;
 struct opa_veswport_info *VAR_5;
 struct opa_vnic_adapter *VAR_6;
 u8 VAR_7;

 VAR_7 = FUNC_9(VAR_2);

 VAR_6 = FUNC_8(VAR_2, VAR_1);
 if (!VAR_6) {
  VAR_6 = FUNC_6(VAR_1, VAR_7);
  if (FUNC_0(VAR_6)) {
   FUNC_2("failed to add vport %d: %ld\n",
         VAR_7, FUNC_1(VAR_6));
   goto err_exit;
  }
 }

 VAR_5 = (struct opa_veswport_info *)VAR_2->data;
 FUNC_5(VAR_6, &VAR_5->vesw);
 FUNC_4(VAR_6, &VAR_5->vport);


 FUNC_3(VAR_6);

 FUNC_7(VAR_1, VAR_2, VAR_3);
 return;

err_exit:
 VAR_3->mad_hdr.status = VAR_0;
}
