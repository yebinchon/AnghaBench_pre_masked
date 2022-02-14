
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {int dev; struct i8042_port* port_data; } ;
struct i8042_port {int exists; } ;
struct TYPE_2__ {struct serio* serio; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct serio *VAR_3)
{
 struct i8042_port *VAR_4 = VAR_3->port_data;

 FUNC_0(&VAR_3->dev, 1);
 if (FUNC_2() &&
     VAR_3 == VAR_2[VAR_0].serio) {
  FUNC_1(&VAR_3->dev, 1);
 }

 FUNC_3(&VAR_1);
 VAR_4->exists = 1;
 FUNC_4(&VAR_1);

 return 0;
}
