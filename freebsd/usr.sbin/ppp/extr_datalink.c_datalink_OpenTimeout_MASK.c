
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct datalink {scalar_t__ state; int name; TYPE_1__ dial; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
  struct datalink *VAR_3 = (struct datalink *)VAR_2;

  FUNC_1(&VAR_3->dial.timer);
  if (VAR_3->state == VAR_0)
    FUNC_0(VAR_1, "%s: Redial timer expired.\n", VAR_3->name);
}
