
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct i8042_port* port_data; } ;
struct i8042_port {int exists; int * serio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct serio *VAR_3)
{
 struct i8042_port *VAR_4 = VAR_3->port_data;

 FUNC_0(&VAR_2);
 VAR_4->exists = 0;
 VAR_4->serio = ((void*)0);
 FUNC_1(&VAR_2);
 FUNC_2(VAR_0);
 FUNC_2(VAR_1);
}
