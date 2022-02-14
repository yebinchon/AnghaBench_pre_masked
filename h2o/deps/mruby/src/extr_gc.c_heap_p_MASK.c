
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct RBasic {int dummy; } ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ mrb_heap_page ;
struct TYPE_10__ {TYPE_2__* heaps; } ;
typedef TYPE_3__ mrb_gc ;
typedef int mrb_bool ;
struct TYPE_8__ {struct RBasic basic; } ;
struct TYPE_11__ {TYPE_1__ as; } ;
typedef TYPE_4__ RVALUE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static mrb_bool
FUNC_1(mrb_gc *VAR_3, struct RBasic *VAR_4)
{
  mrb_heap_page* VAR_5;

  VAR_5 = VAR_3->heaps;
  while (VAR_5) {
    RVALUE *VAR_6;

    VAR_6 = FUNC_0(VAR_5);
    if (&VAR_6[0].as.basic <= VAR_4 && VAR_4 <= &VAR_6[VAR_1].as.basic) {
      return VAR_2;
    }
    VAR_5 = VAR_5->next;
  }
  return VAR_0;
}
