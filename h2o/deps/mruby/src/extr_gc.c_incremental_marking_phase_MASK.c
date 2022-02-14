
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_4__ {scalar_t__ gray_list; } ;
typedef TYPE_1__ mrb_gc ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static size_t
FUNC_1(mrb_state *VAR_0, mrb_gc *VAR_1, size_t VAR_2)
{
  size_t VAR_3 = 0;

  while (VAR_1->gray_list && VAR_3 < VAR_2) {
    VAR_3 += FUNC_0(VAR_0, VAR_1, VAR_1->gray_list);
  }

  return VAR_3;
}
