
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef TYPE_1__* cb_t ;
struct TYPE_4__ {char const* tail; char const* head; char const* in_head; char const* in_tail; int begin; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (char const*,char const*,scalar_t__) ;

int FUNC_2(cb_t VAR_0, const char *VAR_1, ssize_t VAR_2) {
  if (!VAR_1 || VAR_2 < 0) {
    return -1;
  }


  int VAR_3 = (!VAR_0->begin || VAR_0->tail == VAR_0->head);
  if (VAR_3) {
    VAR_0->in_head = VAR_1;
    VAR_0->in_tail = VAR_1 + VAR_2;
  } else {
    if (FUNC_0(VAR_0, VAR_2)) {
      return -1;
    }
    if (VAR_2 > 0) {
      FUNC_1(VAR_0->tail, VAR_1, VAR_2);
      VAR_0->tail += VAR_2;
    }
    VAR_0->in_head = VAR_0->head;
    VAR_0->in_tail = VAR_0->tail;
  }
  return 0;
}
