
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int name; int phys; int dev; int (* start ) (struct serio*) ;int node; int children; int child_node; struct serio* parent; } ;


 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct serio*) ;
 int VAR_0 ;
 int FUNC_4 (struct serio*) ;
 int FUNC_5 (struct serio*) ;

__attribute__((used)) static void FUNC_6(struct serio *VAR_1)
{
 struct serio *VAR_2 = VAR_1->parent;
 int VAR_3;

 if (VAR_2) {
  FUNC_4(VAR_2);
  FUNC_2(&VAR_1->child_node, &VAR_2->children);
  FUNC_3(VAR_2);
 }

 FUNC_2(&VAR_1->node, &VAR_0);

 if (VAR_1->start)
  VAR_1->start(VAR_1);

 VAR_3 = FUNC_1(&VAR_1->dev);
 if (VAR_3)
  FUNC_0(&VAR_1->dev,
   "device_add() failed for %s (%s), error: %d\n",
   VAR_1->phys, VAR_1->name, VAR_3);
}
