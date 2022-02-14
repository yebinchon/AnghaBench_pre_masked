
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* serio; } ;
struct psmouse {int * private; TYPE_2__ ps2dev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct psmouse *VAR_1)
{
 FUNC_0(&VAR_1->ps2dev.serio->dev,
       &VAR_0);

 FUNC_1(VAR_1->private);
 VAR_1->private = ((void*)0);
}
