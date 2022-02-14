
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mrb_state ;
struct TYPE_4__ {int rlen; struct TYPE_4__** reps; } ;
typedef TYPE_1__ mrb_irep ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,TYPE_1__*,size_t*) ;

__attribute__((used)) static int
FUNC_1(mrb_state *VAR_1, const uint8_t *VAR_2, mrb_irep *VAR_3, size_t *VAR_4)
{
  int VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  int VAR_6;

  if (VAR_5 != VAR_0) return VAR_5;
  for (VAR_6 = 0; VAR_6 < VAR_3->rlen; VAR_6++) {
    size_t VAR_7;

    VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3->reps[VAR_6], &VAR_7);
    if (VAR_5 != VAR_0) break;
    VAR_2 += VAR_7;
    *VAR_4 += VAR_7;
  }
  return VAR_5;
}
