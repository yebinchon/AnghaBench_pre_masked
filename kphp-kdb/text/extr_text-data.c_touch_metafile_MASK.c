
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; scalar_t__ aio; } ;
typedef TYPE_1__ core_mf_t ;
struct TYPE_7__ {TYPE_1__* last; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

inline core_mf_t *FUNC_1 (core_mf_t *VAR_1) {
  if (!VAR_1 || VAR_1->aio) {
    return 0;
  }
  FUNC_0 (VAR_1->next);

  VAR_1->prev->next = VAR_1->next;
  VAR_1->next->prev = VAR_1->prev;
  VAR_0.last->next = VAR_1;
  VAR_1->prev = VAR_0.last;
  VAR_1->next = (core_mf_t *) &VAR_0;
  VAR_0.last = VAR_1;

  return VAR_1;
}
