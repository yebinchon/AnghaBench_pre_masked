
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_attribute {int dummy; } ;
struct ib_port_attr {int sm_sl; } ;
struct ib_port {int port_num; int ibdev; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,int ,struct ib_port_attr*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct ib_port *VAR_0, struct port_attribute *VAR_1,
     char *VAR_2)
{
 struct ib_port_attr VAR_3;
 ssize_t VAR_4;

 VAR_4 = FUNC_0(VAR_0->ibdev, VAR_0->port_num, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2, "%d\n", VAR_3.sm_sl);
}
