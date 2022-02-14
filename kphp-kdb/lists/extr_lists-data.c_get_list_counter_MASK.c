
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* o_tree; } ;
typedef TYPE_2__ list_t ;
typedef int list_id_t ;
struct TYPE_5__ {int delta; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4 (list_id_t VAR_3, int VAR_4) {
  if (VAR_2 && FUNC_2 (VAR_3, 1) < 0) {
    return -2;
  }
  list_t *VAR_5 = FUNC_0 (VAR_3, 2);
  if (!VAR_5) {
    return -1;
  }

  FUNC_3 (VAR_5);

  if ((unsigned) VAR_4 < VAR_1) {
    return FUNC_1 (VAR_4);
  } else {
    return VAR_0 + VAR_5->o_tree->delta;
  }
}
