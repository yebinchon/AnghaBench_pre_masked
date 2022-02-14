
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ segment ;
typedef int mrb_state ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ last_len; TYPE_1__* rootseg; } ;
typedef TYPE_2__ iv_tbl ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t
FUNC_0(mrb_state *VAR_1, iv_tbl *VAR_2)
{
  segment *VAR_3;
  size_t VAR_4 = 0;

  if (VAR_2 == ((void*)0)) return 0;
  if (VAR_2->size > 0) return VAR_2->size;
  VAR_3 = VAR_2->rootseg;
  while (VAR_3) {
    if (VAR_3->next == ((void*)0)) {
      VAR_4 += VAR_2->last_len;
      return VAR_4;
    }
    VAR_3 = VAR_3->next;
    VAR_4 += VAR_0;
  }

  return 0;
}
