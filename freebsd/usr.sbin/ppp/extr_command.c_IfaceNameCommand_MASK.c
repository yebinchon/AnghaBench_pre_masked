
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmdargs {int argn; int argc; TYPE_1__* bundle; int * argv; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {TYPE_2__* iface; int unit; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct cmdargs const *VAR_0)
{
  int VAR_1 = VAR_0->argn;

  if (VAR_0->argc != VAR_1 + 1)
    return -1;

  if (!FUNC_0(VAR_0->bundle->iface, VAR_0->argv[VAR_1]))
    return 1;

  FUNC_1(VAR_0->bundle->unit, VAR_0->bundle->iface->name);
  return 0;
}
