
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct ps2mult_port* port_data; int parent; } ;
struct ps2mult_port {int registered; } ;
struct ps2mult {int lock; } ;


 struct ps2mult* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_0)
{
 struct ps2mult *VAR_1 = FUNC_0(VAR_0->parent);
 struct ps2mult_port *VAR_2 = VAR_0->port_data;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_2->registered = 1;
 FUNC_2(&VAR_1->lock, VAR_3);

 return 0;
}
