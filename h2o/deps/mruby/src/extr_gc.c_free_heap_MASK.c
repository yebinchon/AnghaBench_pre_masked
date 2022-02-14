
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_12__ {struct TYPE_12__* next; } ;
typedef TYPE_3__ mrb_heap_page ;
struct TYPE_13__ {TYPE_3__* heaps; } ;
typedef TYPE_4__ mrb_gc ;
struct TYPE_10__ {scalar_t__ tt; } ;
struct TYPE_11__ {int basic; TYPE_1__ free; } ;
struct TYPE_14__ {TYPE_2__ as; } ;
typedef TYPE_5__ RVALUE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,int *,int ) ;
 TYPE_5__* FUNC_2 (TYPE_3__*) ;

void
FUNC_3(mrb_state *VAR_3, mrb_gc *VAR_4)
{
  mrb_heap_page *VAR_5 = VAR_4->heaps;
  mrb_heap_page *VAR_6;
  RVALUE *VAR_7, *VAR_8;

  while (VAR_5) {
    VAR_6 = VAR_5;
    VAR_5 = VAR_5->next;
    for (VAR_7 = FUNC_2(VAR_6), VAR_8=VAR_7+VAR_0; VAR_7<VAR_8; VAR_7++) {
      if (VAR_7->as.free.tt != VAR_1)
        FUNC_1(VAR_3, &VAR_7->as.basic, VAR_2);
    }
    FUNC_0(VAR_3, VAR_6);
  }
}
