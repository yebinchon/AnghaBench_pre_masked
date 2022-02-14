
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cat_ver; int cat_mask; int fr_tree; } ;
typedef TYPE_1__ user_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1 (user_t *VAR_0, int VAR_1, int VAR_2) {
  if (!VAR_0 || VAR_1 <= 0 || VAR_1 >= 32) {
    return -1;
  }
  FUNC_0 (VAR_0->fr_tree, ~(1 << VAR_1));
  if (VAR_2) {
    VAR_0->cat_ver[VAR_1] += 0x100;
    VAR_0->cat_mask &= ~(1 << VAR_1);
  }
  return 1;
}
