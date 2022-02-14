
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct serio {struct serio* parent; TYPE_1__ id; } ;
struct TYPE_6__ {TYPE_2__* serio; } ;
struct psmouse {int (* pt_deactivate ) (struct psmouse*) ;TYPE_3__ ps2dev; int (* cleanup ) (struct psmouse*) ;} ;
struct TYPE_5__ {int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int ) ;
 int FUNC_3 (struct psmouse*) ;
 int FUNC_4 (struct psmouse*) ;
 int VAR_5 ;
 int FUNC_5 (struct psmouse*,int ) ;
 int FUNC_6 (struct psmouse*,char*,int ) ;
 struct psmouse* FUNC_7 (struct serio*) ;
 int FUNC_8 (struct psmouse*) ;
 int FUNC_9 (struct psmouse*) ;

__attribute__((used)) static void FUNC_10(struct serio *VAR_6)
{
 struct psmouse *VAR_7 = FUNC_7(VAR_6);
 struct psmouse *VAR_8 = ((void*)0);

 FUNC_0(&VAR_5);

 if (VAR_6->parent && VAR_6->id.type == VAR_4) {
  VAR_8 = FUNC_7(VAR_6->parent);
  FUNC_4(VAR_8);
 }

 FUNC_5(VAR_7, VAR_3);




 if (FUNC_2(&VAR_7->ps2dev, ((void*)0), VAR_0))
  FUNC_6(VAR_7, "Failed to disable mouse on %s\n",
        VAR_7->ps2dev.serio->phys);

 if (VAR_7->cleanup)
  VAR_7->cleanup(VAR_7);




 FUNC_2(&VAR_7->ps2dev, ((void*)0), VAR_2);





 FUNC_2(&VAR_7->ps2dev, ((void*)0), VAR_1);

 if (VAR_8) {
  if (VAR_8->pt_deactivate)
   VAR_8->pt_deactivate(VAR_8);

  FUNC_3(VAR_8);
 }

 FUNC_1(&VAR_5);
}
