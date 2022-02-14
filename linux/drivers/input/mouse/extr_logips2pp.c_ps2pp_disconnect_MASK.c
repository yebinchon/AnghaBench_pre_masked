
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* serio; } ;
struct psmouse {TYPE_2__ ps2dev; } ;
struct TYPE_6__ {int dattr; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_1)
{
 FUNC_0(&VAR_1->ps2dev.serio->dev,
      &VAR_0.dattr);
}
