
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* serio; } ;
struct psmouse {TYPE_2__ ps2dev; } ;
struct TYPE_3__ {int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (struct psmouse*,int ) ;
 int FUNC_2 (struct psmouse*,char*,int ,int) ;

int FUNC_3(struct psmouse *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->ps2dev, ((void*)0), VAR_0);
 if (VAR_3) {
  FUNC_2(VAR_2, "Failed to deactivate mouse on %s: %d\n",
        VAR_2->ps2dev.serio->phys, VAR_3);
  return VAR_3;
 }

 FUNC_1(VAR_2, VAR_1);
 return 0;
}
