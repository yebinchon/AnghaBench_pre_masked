
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct datalink {int state; struct datalink* name; int physical; struct datalink* next; TYPE_1__ dial; int chat; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct datalink*) ;
 int FUNC_3 (struct datalink*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

struct datalink *
FUNC_7(struct datalink *VAR_2)
{
  struct datalink *VAR_3;

  if (VAR_2->state != VAR_0) {
    FUNC_4(VAR_1, "Oops, destroying a datalink in state %s\n",
              FUNC_2(VAR_2));
    switch (VAR_2->state) {
      case 129:
      case 130:
      case 128:
        FUNC_1(&VAR_2->chat);
        break;
    }
  }

  FUNC_0(&VAR_2->chat);
  FUNC_6(&VAR_2->dial.timer);
  VAR_3 = VAR_2->next;
  FUNC_5(VAR_2->physical);
  FUNC_3(VAR_2->name);
  FUNC_3(VAR_2);

  return VAR_3;
}
