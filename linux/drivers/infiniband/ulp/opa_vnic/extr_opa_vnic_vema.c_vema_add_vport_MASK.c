
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opa_vnic_vema_port {int vports; int port_num; struct opa_vnic_ctrl_port* cport; } ;
struct opa_vnic_ctrl_port {int ibdev; } ;
struct opa_vnic_adapter {struct opa_vnic_ctrl_port* cport; } ;


 struct opa_vnic_adapter* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct opa_vnic_adapter*) ;
 struct opa_vnic_adapter* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct opa_vnic_adapter*) ;
 int FUNC_4 (int *,int ,struct opa_vnic_adapter*,int ) ;

__attribute__((used)) static struct opa_vnic_adapter *FUNC_5(struct opa_vnic_vema_port *VAR_1,
            u8 VAR_2)
{
 struct opa_vnic_ctrl_port *VAR_3 = VAR_1->cport;
 struct opa_vnic_adapter *VAR_4;

 VAR_4 = FUNC_2(VAR_3->ibdev, VAR_1->port_num, VAR_2);
 if (!FUNC_1(VAR_4)) {
  int VAR_5;

  VAR_4->cport = VAR_3;
  VAR_5 = FUNC_4(&VAR_1->vports, VAR_2, VAR_4, VAR_0);
  if (VAR_5 < 0) {
   FUNC_3(VAR_4);
   VAR_4 = FUNC_0(VAR_5);
  }
 }

 return VAR_4;
}
