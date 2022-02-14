
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start_pos; scalar_t__* ch; } ;
struct tr_pattern {scalar_t__ n; int type; struct tr_pattern* next; TYPE_1__ val; } ;
typedef scalar_t__ mrb_int ;






__attribute__((used)) static inline mrb_int
FUNC_0(const struct tr_pattern *VAR_0, const char *VAR_1, mrb_int VAR_2)
{
  mrb_int VAR_3 = 0;

  while (VAR_0 != ((void*)0)) {
    if (VAR_2 < (VAR_3 + VAR_0->n)) {
      mrb_int VAR_4 = (VAR_2 - VAR_3);

      switch (VAR_0->type) {
      case 130:
        return VAR_1[VAR_0->val.start_pos + VAR_4];
      case 129:
        return VAR_0->val.ch[0]+VAR_4;
      case 128:
        return -1;
      }
    }
    if (VAR_0->next == ((void*)0)) {
      switch (VAR_0->type) {
      case 130:
        return VAR_1[VAR_0->val.start_pos + VAR_0->n - 1];
      case 129:
        return VAR_0->val.ch[1];
      case 128:
        return -1;
      }
    }
    VAR_3 += VAR_0->n;
    VAR_0 = VAR_0->next;
  }

  return -1;
}
