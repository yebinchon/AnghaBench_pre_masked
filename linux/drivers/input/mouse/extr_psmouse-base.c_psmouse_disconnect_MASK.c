
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int kobj; } ;
struct serio {struct serio* parent; TYPE_2__ id; TYPE_1__ dev; } ;
struct psmouse {scalar_t__ dev; int (* pt_deactivate ) (struct psmouse*) ;int (* disconnect ) (struct psmouse*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct psmouse*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct psmouse*) ;
 int VAR_4 ;
 int FUNC_6 (struct psmouse*) ;
 int VAR_5 ;
 int FUNC_7 (struct psmouse*,int ) ;
 int FUNC_8 (struct serio*) ;
 struct psmouse* FUNC_9 (struct serio*) ;
 int FUNC_10 (struct serio*,int *) ;
 int FUNC_11 (struct psmouse*) ;
 int FUNC_12 (struct psmouse*) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static void FUNC_14(struct serio *VAR_6)
{
 struct psmouse *VAR_7 = FUNC_9(VAR_6);
 struct psmouse *VAR_8 = ((void*)0);

 FUNC_13(&VAR_6->dev.kobj, &VAR_4);

 FUNC_3(&VAR_5);

 FUNC_7(VAR_7, VAR_0);


 FUNC_4(&VAR_5);
 FUNC_0(VAR_3);
 FUNC_3(&VAR_5);

 if (VAR_6->parent && VAR_6->id.type == VAR_2) {
  VAR_8 = FUNC_9(VAR_6->parent);
  FUNC_6(VAR_8);
 }

 if (VAR_7->disconnect)
  VAR_7->disconnect(VAR_7);

 if (VAR_8 && VAR_8->pt_deactivate)
  VAR_8->pt_deactivate(VAR_8);

 FUNC_7(VAR_7, VAR_1);

 FUNC_8(VAR_6);
 FUNC_10(VAR_6, ((void*)0));

 if (VAR_7->dev)
  FUNC_1(VAR_7->dev);

 FUNC_2(VAR_7);

 if (VAR_8)
  FUNC_5(VAR_8);

 FUNC_4(&VAR_5);
}
