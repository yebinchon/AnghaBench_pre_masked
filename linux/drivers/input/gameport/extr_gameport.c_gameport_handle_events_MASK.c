
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct gameport_event {int type; int object; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gameport_event*) ;
 struct gameport_event* FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (struct gameport_event*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_1)
{
 struct gameport_event *VAR_2;

 FUNC_5(&VAR_0);







 if ((VAR_2 = FUNC_3())) {

  switch (VAR_2->type) {

  case 128:
   FUNC_0(VAR_2->object);
   break;

  case 129:
   FUNC_1(VAR_2->object);
   break;
  }

  FUNC_4(VAR_2);
  FUNC_2(VAR_2);
 }

 FUNC_6(&VAR_0);
}
