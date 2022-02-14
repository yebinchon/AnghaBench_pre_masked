
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int load; char* name; struct datalink* arg; int func; } ;
struct TYPE_4__ {TYPE_2__ timer; } ;
struct datalink {scalar_t__ state; int name; TYPE_1__ dial; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(struct datalink *VAR_5, int VAR_6)
{
  int VAR_7 = VAR_6;

  FUNC_3(&VAR_5->dial.timer);
  if (VAR_6 < 0)
    VAR_7 = (FUNC_1() % VAR_1) + 1;
  VAR_5->dial.timer.load = VAR_7 ? VAR_7 * VAR_3 : 1;
  VAR_5->dial.timer.func = VAR_4;
  VAR_5->dial.timer.name = "dial";
  VAR_5->dial.timer.arg = VAR_5;
  FUNC_2(&VAR_5->dial.timer);
  if (VAR_5->state == VAR_0)
    FUNC_0(VAR_2, "%s: Enter pause (%d) for redialing.\n",
               VAR_5->name, VAR_7);
  return VAR_7;
}
