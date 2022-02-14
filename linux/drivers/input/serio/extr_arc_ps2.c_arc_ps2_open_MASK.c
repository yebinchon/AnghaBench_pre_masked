
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct arc_ps2_port* port_data; } ;
struct arc_ps2_port {int status_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_1)
{
 struct arc_ps2_port *VAR_2 = VAR_1->port_data;

 FUNC_0(VAR_0, VAR_2->status_addr);

 return 0;
}
