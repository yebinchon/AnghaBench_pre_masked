
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw {int dead; int kref; int node; int dev; } ;
struct serio {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct serio*) ;
 struct serio_raw* FUNC_6 (struct serio*) ;
 int VAR_0 ;
 int FUNC_7 (struct serio_raw*) ;
 int VAR_1 ;
 int FUNC_8 (struct serio*,int *) ;

__attribute__((used)) static void FUNC_9(struct serio *VAR_2)
{
 struct serio_raw *VAR_3 = FUNC_6(VAR_2);

 FUNC_2(&VAR_3->dev);

 FUNC_3(&VAR_1);
 VAR_3->dead = 1;
 FUNC_1(&VAR_3->node);
 FUNC_4(&VAR_1);

 FUNC_7(VAR_3);

 FUNC_5(VAR_2);
 FUNC_0(&VAR_3->kref, VAR_0);

 FUNC_8(VAR_2, ((void*)0));
}
