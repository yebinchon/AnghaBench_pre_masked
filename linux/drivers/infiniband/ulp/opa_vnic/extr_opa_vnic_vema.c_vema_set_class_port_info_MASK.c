
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opa_vnic_vema_port {int class_port_info; } ;
struct opa_vnic_vema_mad {int data; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;

__attribute__((used)) static void FUNC_2(struct opa_vnic_vema_port *VAR_0,
         struct opa_vnic_vema_mad *VAR_1,
         struct opa_vnic_vema_mad *VAR_2)
{
 FUNC_0(&VAR_0->class_port_info, VAR_1->data,
        sizeof(VAR_0->class_port_info));

 FUNC_1(VAR_0, VAR_1, VAR_2);
}
