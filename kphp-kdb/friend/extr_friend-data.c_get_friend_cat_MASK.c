
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fr_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_6__ {int cat; } ;
typedef TYPE_2__ tree_t ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ,int) ;

int FUNC_2 (int VAR_0, int VAR_1) {
  user_t *VAR_2 = FUNC_0 (VAR_0);
  if (!VAR_2 || VAR_1 <= 0) {
    return -1;
  }
  tree_t *VAR_3 = FUNC_1 (VAR_2->fr_tree, VAR_1);
  return VAR_3 ? VAR_3->cat : -1;
}
