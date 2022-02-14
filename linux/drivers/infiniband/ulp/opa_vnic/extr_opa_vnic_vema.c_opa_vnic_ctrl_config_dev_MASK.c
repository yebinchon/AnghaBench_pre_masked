
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opa_vnic_ctrl_port {int num_ports; int ibdev; } ;
struct ib_port_modify {void* clr_port_cap_mask; void* set_port_cap_mask; int member_0; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int,int ,struct ib_port_modify*) ;

__attribute__((used)) static void FUNC_1(struct opa_vnic_ctrl_port *VAR_2, bool VAR_3)
{
 struct ib_port_modify VAR_4 = { 0 };
 int VAR_5;

 if (VAR_3)
  VAR_4.set_port_cap_mask = VAR_1;
 else
  VAR_4.clr_port_cap_mask = VAR_1;

 for (VAR_5 = 1; VAR_5 <= VAR_2->num_ports; VAR_5++)
  FUNC_0(VAR_2->ibdev, VAR_5, VAR_0, &VAR_4);
}
