
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_pattern {scalar_t__ flag_on_heap; struct tr_pattern* next; } ;
typedef int mrb_state ;


 int FUNC_0 (int *,struct tr_pattern*) ;

__attribute__((used)) static inline void
FUNC_1(mrb_state *VAR_0, struct tr_pattern *VAR_1)
{
  while (VAR_1) {
    struct tr_pattern *VAR_2 = VAR_1->next;
    if (VAR_1->flag_on_heap) {
      FUNC_0(VAR_0, VAR_1);
    }
    VAR_1 = VAR_2;
  }
}
