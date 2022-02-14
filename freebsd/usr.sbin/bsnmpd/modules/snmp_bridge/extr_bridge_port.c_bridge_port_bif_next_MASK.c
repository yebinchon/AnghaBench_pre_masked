
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_port {scalar_t__ sysindex; } ;


 struct bridge_port* FUNC_0 (struct bridge_port*,int ) ;
 int VAR_0 ;

struct bridge_port *
FUNC_1(struct bridge_port *VAR_1)
{
 struct bridge_port *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1, VAR_0)) == ((void*)0) ||
     VAR_2->sysindex != VAR_1->sysindex)
  return (((void*)0));

 return (VAR_2);
}
