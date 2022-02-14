
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ word; struct TYPE_8__* right; TYPE_1__* item; struct TYPE_8__* left; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_9__ {scalar_t__ item_id; } ;
typedef TYPE_3__ item_t ;
typedef scalar_t__ hash_t ;
struct TYPE_7__ {scalar_t__ item_id; } ;



__attribute__((used)) static tree_t *FUNC_0 (tree_t *VAR_0, hash_t VAR_1, item_t *VAR_2) {
  while (VAR_0) {
    if (VAR_1 < VAR_0->word) {
      VAR_0 = VAR_0->left;
    } else if (VAR_1 > VAR_0->word) {
      VAR_0 = VAR_0->right;
    } else if (VAR_2->item_id < VAR_0->item->item_id) {
      VAR_0 = VAR_0->left;
    } else if (VAR_2->item_id > VAR_0->item->item_id) {
      VAR_0 = VAR_0->right;
    } else {
      return VAR_0;
    }
  }
  return VAR_0;
}
