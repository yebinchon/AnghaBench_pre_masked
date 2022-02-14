
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opa_vnic_ctrl_port {int dummy; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct opa_vnic_ctrl_port*) ;
 int FUNC_2 (struct opa_vnic_ctrl_port*,int) ;
 int FUNC_3 (struct opa_vnic_ctrl_port*) ;

__attribute__((used)) static void FUNC_4(struct ib_device *VAR_0,
      void *VAR_1)
{
 struct opa_vnic_ctrl_port *VAR_2 = VAR_1;

 if (!VAR_2)
  return;

 FUNC_0("removing VNIC client\n");
 FUNC_2(VAR_2, 0);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
}
