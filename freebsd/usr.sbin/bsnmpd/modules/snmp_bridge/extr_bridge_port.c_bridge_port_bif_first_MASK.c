
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_port {int dummy; } ;
struct bridge_if {struct bridge_port* f_bp; } ;



struct bridge_port *
FUNC_0(struct bridge_if *VAR_0)
{
 return (VAR_0->f_bp);
}
