
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdargs {int argc; int argn; int * argv; TYPE_1__* cx; int bundle; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct cmdargs const *VAR_1)
{
  if (VAR_1->argc != VAR_1->argn + 1)
    return -1;

  if (FUNC_0(VAR_1->bundle, VAR_1->cx, VAR_1->argv[VAR_1->argn]))
    return 0;

  FUNC_1(VAR_0, "%s -> %s: target name already exists\n",
             VAR_1->cx->name, VAR_1->argv[VAR_1->argn]);
  return 1;
}
