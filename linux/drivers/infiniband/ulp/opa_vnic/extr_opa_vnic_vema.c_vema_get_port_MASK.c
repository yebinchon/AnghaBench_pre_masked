
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opa_vnic_vema_port {int dummy; } ;
struct opa_vnic_ctrl_port {int num_ports; } ;



__attribute__((used)) static struct opa_vnic_vema_port *
FUNC_0(struct opa_vnic_ctrl_port *VAR_0, u8 VAR_1)
{
 struct opa_vnic_vema_port *VAR_2 = (void *)VAR_0 + sizeof(*VAR_0);

 if (VAR_1 > VAR_0->num_ports)
  return ((void*)0);

 return VAR_2 + (VAR_1 - 1);
}
