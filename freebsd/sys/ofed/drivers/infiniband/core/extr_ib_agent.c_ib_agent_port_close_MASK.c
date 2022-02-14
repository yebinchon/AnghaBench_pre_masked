
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dev; } ;
struct ib_agent_port_private {scalar_t__* agent; int port_list; } ;


 int VAR_0 ;
 struct ib_agent_port_private* FUNC_0 (struct ib_device*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ib_agent_port_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct ib_device *VAR_2, int VAR_3)
{
 struct ib_agent_port_private *VAR_4;
 unsigned long VAR_5;

 FUNC_5(&VAR_1, VAR_5);
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_6(&VAR_1, VAR_5);
  FUNC_1(&VAR_2->dev, "Port %d not found\n", VAR_3);
  return -VAR_0;
 }
 FUNC_4(&VAR_4->port_list);
 FUNC_6(&VAR_1, VAR_5);

 FUNC_2(VAR_4->agent[1]);
 if (VAR_4->agent[0])
  FUNC_2(VAR_4->agent[0]);

 FUNC_3(VAR_4);
 return 0;
}
