
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dev; int node; int * parent; int child_node; int (* stop ) (struct serio*) ;} ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct serio* FUNC_5 (struct serio*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct serio*) ;
 int FUNC_8 (struct serio*) ;

__attribute__((used)) static void FUNC_9(struct serio *VAR_0)
{
 struct serio *VAR_1;

 while ((VAR_1 = FUNC_5(VAR_0)) != ((void*)0)) {
  FUNC_7(VAR_1);
  FUNC_3(&VAR_1->dev);
 }

 if (VAR_0->stop)
  VAR_0->stop(VAR_0);

 if (VAR_0->parent) {
  FUNC_6(VAR_0->parent);
  FUNC_2(&VAR_0->child_node);
  FUNC_4(VAR_0->parent);
  VAR_0->parent = ((void*)0);
 }

 if (FUNC_1(&VAR_0->dev))
  FUNC_0(&VAR_0->dev);

 FUNC_2(&VAR_0->node);
 FUNC_7(VAR_0);
 FUNC_3(&VAR_0->dev);
}
