
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rlen; struct TYPE_3__** reps; int debug_info; } ;
typedef TYPE_1__ mrb_irep ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static mrb_bool
FUNC_0(mrb_irep *VAR_2)
{
  int VAR_3;

  if (!VAR_2->debug_info) return VAR_0;
  for (VAR_3=0; VAR_3<VAR_2->rlen; VAR_3++) {
    if (!FUNC_0(VAR_2->reps[VAR_3])) return VAR_0;
  }
  return VAR_1;
}
