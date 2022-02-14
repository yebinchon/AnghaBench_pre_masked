
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdargs {scalar_t__ argc; scalar_t__ argn; TYPE_1__* cx; int bundle; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct cmdargs const *VAR_2)
{
  if (VAR_2->argc != VAR_2->argn)
    return -1;

  if (VAR_2->cx->state != VAR_0) {
    FUNC_1(VAR_1, "remove: Cannot delete links that aren't closed\n");
    return 2;
  }

  FUNC_0(VAR_2->bundle, VAR_2->cx);
  return 0;
}
