
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* serio; } ;
struct psmouse {struct elantech_data* private; TYPE_3__ ps2dev; } ;
struct elantech_data {scalar_t__ tp_dev; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct elantech_data*) ;
 int FUNC_2 (struct psmouse*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct psmouse *VAR_1)
{
 struct elantech_data *VAR_2 = VAR_1->private;





 FUNC_2(VAR_1);

 if (VAR_2->tp_dev)
  FUNC_0(VAR_2->tp_dev);
 FUNC_3(&VAR_1->ps2dev.serio->dev.kobj,
      &VAR_0);
 FUNC_1(VAR_1->private);
 VAR_1->private = ((void*)0);
}
