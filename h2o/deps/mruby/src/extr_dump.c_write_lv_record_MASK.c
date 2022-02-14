
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int mrb_sym ;
typedef int mrb_state ;
struct TYPE_5__ {int nlocals; int rlen; struct TYPE_5__** reps; TYPE_1__* lv; } ;
typedef TYPE_2__ mrb_irep ;
struct TYPE_4__ {scalar_t__ name; int const r; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const*,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const,int *) ;

__attribute__((used)) static int
FUNC_3(mrb_state *VAR_2, const mrb_irep *VAR_3, uint8_t **VAR_4, mrb_sym const *VAR_5, uint32_t VAR_6)
{
  uint8_t *VAR_7 = *VAR_4;
  int VAR_8;

  for (VAR_8 = 0; VAR_8 + 1 < VAR_3->nlocals; ++VAR_8) {
    if (VAR_3->lv[VAR_8].name == 0) {
      VAR_7 += FUNC_2(VAR_1, VAR_7);
      VAR_7 += FUNC_2(0, VAR_7);
    }
    else {
      int const VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_3->lv[VAR_8].name);
      FUNC_1(VAR_9 != -1);

      VAR_7 += FUNC_2(VAR_9, VAR_7);
      VAR_7 += FUNC_2(VAR_3->lv[VAR_8].r, VAR_7);
    }
  }

  for (VAR_8 = 0; VAR_8 < VAR_3->rlen; ++VAR_8) {
    FUNC_3(VAR_2, VAR_3->reps[VAR_8], &VAR_7, VAR_5, VAR_6);
  }

  *VAR_4 = VAR_7;

  return VAR_0;
}
