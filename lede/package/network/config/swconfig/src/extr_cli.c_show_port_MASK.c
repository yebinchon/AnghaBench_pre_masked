
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {int port_vlan; } ;
struct switch_dev {int port_ops; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct switch_dev*,int ,struct switch_val*) ;

__attribute__((used)) static void
FUNC_2(struct switch_dev *VAR_0, int VAR_1)
{
 struct switch_val VAR_2;

 FUNC_0("Port %d:\n", VAR_1);
 VAR_2.port_vlan = VAR_1;
 FUNC_1(VAR_0, VAR_0->port_ops, &VAR_2);
}
