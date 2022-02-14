
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_attribute {int dummy; } ;
struct ib_port_attr {size_t state; } ;
struct ib_port {int port_num; int ibdev; } ;
typedef scalar_t__ ssize_t ;


 size_t FUNC_0 (char const**) ;






 scalar_t__ FUNC_1 (int ,int ,struct ib_port_attr*) ;
 scalar_t__ FUNC_2 (char*,char*,size_t,char const*) ;

__attribute__((used)) static ssize_t FUNC_3(struct ib_port *VAR_0, struct port_attribute *VAR_1,
     char *VAR_2)
{
 struct ib_port_attr VAR_3;
 ssize_t VAR_4;

 static const char *VAR_5[] = {
  [128] = "NOP",
  [130] = "DOWN",
  [129] = "INIT",
  [131] = "ARMED",
  [133] = "ACTIVE",
  [132] = "ACTIVE_DEFER"
 };

 VAR_4 = FUNC_1(VAR_0->ibdev, VAR_0->port_num, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_2(VAR_2, "%d: %s\n", VAR_3.state,
         VAR_3.state >= 0 && VAR_3.state < FUNC_0(VAR_5) ?
         VAR_5[VAR_3.state] : "UNKNOWN");
}
