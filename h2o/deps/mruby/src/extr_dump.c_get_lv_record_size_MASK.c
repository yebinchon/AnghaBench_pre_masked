
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int mrb_state ;
struct TYPE_3__ {int nlocals; int rlen; struct TYPE_3__** reps; } ;
typedef TYPE_1__ mrb_irep ;



__attribute__((used)) static size_t
FUNC_0(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  size_t VAR_2 = 0;
  int VAR_3;

  VAR_2 += (sizeof(uint16_t) + sizeof(uint16_t)) * (VAR_1->nlocals - 1);

  for (VAR_3 = 0; VAR_3 < VAR_1->rlen; ++VAR_3) {
    VAR_2 += FUNC_0(VAR_0, VAR_1->reps[VAR_3]);
  }

  return VAR_2;
}
