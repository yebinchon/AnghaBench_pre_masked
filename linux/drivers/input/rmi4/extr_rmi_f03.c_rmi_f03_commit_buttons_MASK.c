
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {TYPE_1__* drv; } ;
struct rmi_function {int dev; } ;
struct f03_data {int overwrite_buttons; struct serio* serio; } ;
struct TYPE_2__ {int (* interrupt ) (struct serio*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct f03_data* FUNC_0 (int *) ;
 int FUNC_1 (struct serio*) ;
 int FUNC_2 (struct serio*) ;
 int FUNC_3 (struct serio*,int ,int ) ;
 int FUNC_4 (struct serio*,int ,int ) ;

void FUNC_5(struct rmi_function *VAR_2)
{
 struct f03_data *VAR_3 = FUNC_0(&VAR_2->dev);
 struct serio *VAR_4 = VAR_3->serio;

 FUNC_2(VAR_4);
 if (VAR_4->drv) {
  VAR_4->drv->interrupt(VAR_4, VAR_0,
          VAR_1);
  VAR_4->drv->interrupt(VAR_4, VAR_3->overwrite_buttons,
          VAR_1);
 }
 FUNC_1(VAR_4);
}
