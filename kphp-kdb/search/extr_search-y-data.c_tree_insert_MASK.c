
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* word; int* positions; int y; struct TYPE_11__* right; struct TYPE_11__* left; TYPE_2__* item; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_12__ {scalar_t__ item_id; } ;
typedef TYPE_2__ item_t ;
typedef void* hash_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__**,TYPE_1__*,void*,TYPE_2__*) ;

__attribute__((used)) static tree_t *FUNC_2 (tree_t *VAR_0, hash_t VAR_1, item_t *VAR_2, int VAR_3, int *VAR_4) {
  tree_t *VAR_5;
  if (!VAR_0) {
    VAR_5 = FUNC_0 (VAR_3);
    VAR_5->word = VAR_1;
    VAR_5->item = VAR_2;
    VAR_5->positions = VAR_4;
    return VAR_5;
  }
  if (VAR_0->y >= VAR_3) {
    if (VAR_1 < VAR_0->word || (VAR_1 == VAR_0->word && VAR_2->item_id < VAR_0->item->item_id)) {
      VAR_0->left = FUNC_2 (VAR_0->left, VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
      VAR_0->right = FUNC_2 (VAR_0->right, VAR_1, VAR_2, VAR_3, VAR_4);
    }
    return VAR_0;
  }
  VAR_5 = FUNC_0 (VAR_3);
  VAR_5->word = VAR_1;
  VAR_5->item = VAR_2;
  VAR_5->positions = VAR_4;
  FUNC_1 (&VAR_5->left, &VAR_5->right, VAR_0, VAR_1, VAR_2);
  return VAR_5;
}
