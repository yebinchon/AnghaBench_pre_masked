
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opa_vnic_vema_port {int dummy; } ;
struct opa_vnic_ctrl_port {int num_ports; struct ib_device* ibdev; } ;
struct ib_device {int phys_port_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ib_device*,int *,struct opa_vnic_ctrl_port*) ;
 struct opa_vnic_ctrl_port* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct opa_vnic_ctrl_port*,int) ;
 int FUNC_4 (struct ib_device*) ;
 int FUNC_5 (struct opa_vnic_ctrl_port*) ;

__attribute__((used)) static void FUNC_6(struct ib_device *VAR_2)
{
 struct opa_vnic_ctrl_port *VAR_3;
 int VAR_4, VAR_5 = sizeof(*VAR_3);

 if (!FUNC_4(VAR_2))
  return;

 VAR_5 += VAR_2->phys_port_cnt * sizeof(struct opa_vnic_vema_port);
 VAR_3 = FUNC_2(VAR_5, VAR_0);
 if (!VAR_3)
  return;

 VAR_3->num_ports = VAR_2->phys_port_cnt;
 VAR_3->ibdev = VAR_2;


 VAR_4 = FUNC_5(VAR_3);
 if (!VAR_4)
  FUNC_0("VNIC client initialized\n");

 FUNC_1(VAR_2, &VAR_1, VAR_3);
 FUNC_3(VAR_3, 1);
}
