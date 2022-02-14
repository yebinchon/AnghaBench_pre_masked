
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_attribute {int dummy; } ;
struct ib_port_attr {int phys_state; } ;
struct ib_port {int port_num; int ibdev; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,int ,struct ib_port_attr*) ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct ib_port *VAR_0, struct port_attribute *VAR_1,
          char *VAR_2)
{
 struct ib_port_attr VAR_3;

 ssize_t VAR_4;

 VAR_4 = FUNC_0(VAR_0->ibdev, VAR_0->port_num, &VAR_3);
 if (VAR_4)
  return VAR_4;

 switch (VAR_3.phys_state) {
 case 1: return FUNC_1(VAR_2, "1: Sleep\n");
 case 2: return FUNC_1(VAR_2, "2: Polling\n");
 case 3: return FUNC_1(VAR_2, "3: Disabled\n");
 case 4: return FUNC_1(VAR_2, "4: PortConfigurationTraining\n");
 case 5: return FUNC_1(VAR_2, "5: LinkUp\n");
 case 6: return FUNC_1(VAR_2, "6: LinkErrorRecovery\n");
 case 7: return FUNC_1(VAR_2, "7: Phy Test\n");
 default: return FUNC_1(VAR_2, "%d: <unknown>\n", VAR_3.phys_state);
 }
}
