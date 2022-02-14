
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t idx; int size; size_t h; size_t start; TYPE_1__* items; int multiple; } ;
struct TYPE_5__ {int checked; } ;
typedef TYPE_2__ GMenu ;





 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1 (GMenu * VAR_0, int VAR_1)
{
  int VAR_2;

  switch (VAR_1) {
  case 130:
    if (VAR_0->idx >= VAR_0->size - 1)
      break;
    ++VAR_0->idx;
    if (VAR_0->idx >= VAR_0->h && VAR_0->idx >= VAR_0->start + VAR_0->h)
      VAR_0->start++;
    FUNC_0 (VAR_0);
    break;
  case 128:
    if (VAR_0->idx <= 0)
      break;
    --VAR_0->idx;
    if (VAR_0->idx < VAR_0->start)
      --VAR_0->start;
    FUNC_0 (VAR_0);
    break;
  case 129:
    if (!VAR_0->multiple) {
      for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++)
        VAR_0->items[VAR_2].checked = 0;
    }
    if (VAR_0->items[VAR_0->idx].checked)
      VAR_0->items[VAR_0->idx].checked = 0;
    else
      VAR_0->items[VAR_0->idx].checked = 1;
    FUNC_0 (VAR_0);
    break;
  }
}
