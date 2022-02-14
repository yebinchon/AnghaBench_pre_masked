
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* o_tree; int metafile_index; } ;
typedef TYPE_2__ list_t ;
struct TYPE_6__ {scalar_t__ delta; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2 (list_t *VAR_3) {
  if (VAR_2) {
    if (VAR_3 == &VAR_0 || VAR_3->o_tree->delta == 0) {
      return 1;
    } else {
      FUNC_0 (VAR_3->metafile_index, -1);
      FUNC_1 (VAR_3);

      return (VAR_1 + VAR_3->o_tree->delta) > 0;
    }
  } else {
    return 1;
  }
}
