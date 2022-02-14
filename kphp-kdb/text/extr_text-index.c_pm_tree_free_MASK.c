
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int left; int right; TYPE_1__* w; } ;
typedef TYPE_2__ pm_cell_t ;
struct TYPE_4__ {int code_len; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (pm_cell_t *VAR_0, int VAR_1) {
  FUNC_0 (VAR_1);
  if (VAR_1 < 0) {
    VAR_0[VAR_1].w->code_len++;

  } else {

    FUNC_1 (VAR_0, VAR_0[VAR_1].left);

    FUNC_1 (VAR_0, VAR_0[VAR_1].right);

    VAR_0[VAR_1].left = VAR_0[0].left;
    VAR_0[0].left = VAR_1;
  }
}
