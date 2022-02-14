
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ word; scalar_t__ y; struct TYPE_9__* left; struct TYPE_9__* right; TYPE_1__* item; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_10__ {long long item_id; } ;
typedef TYPE_3__ item_t ;
typedef scalar_t__ hash_t ;
struct TYPE_8__ {long long const item_id; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static tree_t *FUNC_1 (tree_t *VAR_0, hash_t VAR_1, item_t *VAR_2) {
  tree_t *VAR_3 = VAR_0, **VAR_4 = &VAR_3, *VAR_5, *VAR_6;
  const long long VAR_7 = VAR_2->item_id;
  while (VAR_1 != VAR_0->word || VAR_7 != VAR_0->item->item_id) {
    VAR_4 = (VAR_1 < VAR_0->word || (VAR_1 == VAR_0->word && VAR_7 < VAR_0->item->item_id)) ? &VAR_0->left : &VAR_0->right;
    VAR_0 = *VAR_4;
    if (!VAR_0) { return VAR_3; }
  }

  VAR_5 = VAR_0->left;
  VAR_6 = VAR_0->right;
  FUNC_0 (VAR_0);
  while (VAR_5 && VAR_6) {
    if (VAR_5->y > VAR_6->y) {
      *VAR_4 = VAR_5;
      VAR_4 = &VAR_5->right;
      VAR_5 = *VAR_4;
    } else {
      *VAR_4 = VAR_6;
      VAR_4 = &VAR_6->left;
      VAR_6 = *VAR_4;
    }
  }
  *VAR_4 = VAR_5 ? VAR_5 : VAR_6;
  return VAR_3;
}
