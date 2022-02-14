
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct serio_event {int type; int object; } ;







 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct serio_event*) ;
 struct serio_event* FUNC_7 () ;
 int VAR_0 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void FUNC_11(struct work_struct *VAR_1)
{
 struct serio_event *VAR_2;

 FUNC_0(&VAR_0);

 while ((VAR_2 = FUNC_7())) {

  switch (VAR_2->type) {

  case 129:
   FUNC_2(VAR_2->object);
   break;

  case 131:
   FUNC_8(VAR_2->object);
   break;

  case 128:
   FUNC_4(VAR_2->object);
   FUNC_5(VAR_2->object);
   break;

  case 130:
   FUNC_9(VAR_2->object);
   break;

  case 132:
   FUNC_3(VAR_2->object);
   break;
  }

  FUNC_10(VAR_2->object, VAR_2->type);
  FUNC_6(VAR_2);
 }

 FUNC_1(&VAR_0);
}
