
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ word; struct TYPE_9__* right; struct TYPE_9__* left; TYPE_1__* item; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_10__ {scalar_t__ item_id; } ;
typedef TYPE_3__ item_t ;
typedef scalar_t__ hash_t ;
struct TYPE_8__ {scalar_t__ item_id; } ;



__attribute__((used)) static void FUNC_0 (tree_t **VAR_0, tree_t **VAR_1, tree_t *VAR_2, hash_t VAR_3, item_t *VAR_4) {
  if (!VAR_2) { *VAR_0 = *VAR_1 = 0; return; }
  if (VAR_3 < VAR_2->word || (VAR_3 == VAR_2->word && VAR_4->item_id < VAR_2->item->item_id)) {
    *VAR_1 = VAR_2;
    FUNC_0 (VAR_0, &VAR_2->left, VAR_2->left, VAR_3, VAR_4);
  } else {
    *VAR_0 = VAR_2;
    FUNC_0 (&VAR_2->right, VAR_1, VAR_2->right, VAR_3, VAR_4);
  }
}
