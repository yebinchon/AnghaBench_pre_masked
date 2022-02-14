
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t current; int expanded; TYPE_1__* module; } ;
struct TYPE_3__ {int scroll; int offset; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  int *VAR_1, *VAR_2;

  VAR_1 = &VAR_0.module[VAR_0.current].scroll;
  VAR_2 = &VAR_0.module[VAR_0.current].offset;

  if (!VAR_0.expanded)
    return;
  if (*VAR_1 <= 0)
    return;
  --(*VAR_1);
  if (*VAR_1 < *VAR_2)
    --(*VAR_2);
}
