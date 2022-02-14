
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rlen; struct TYPE_3__** reps; scalar_t__ lv; } ;
typedef TYPE_1__ mrb_irep ;
typedef scalar_t__ mrb_bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static mrb_bool
FUNC_0(mrb_irep *VAR_2)
{
  int VAR_3;

  if (VAR_2->lv) { return VAR_1; }

  for (VAR_3 = 0; VAR_3 < VAR_2->rlen; ++VAR_3) {
    if (FUNC_0(VAR_2->reps[VAR_3])) { return VAR_1; }
  }

  return VAR_0;
}
