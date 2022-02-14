
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ item_id; scalar_t__ op; int priority; TYPE_3__* iter; int cur; int word; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ query_node_t ;
struct TYPE_6__ {int sp; scalar_t__ item_id; int cur_y; int cur; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_1 (query_node_t *VAR_10) {
  int VAR_11;
  if (!VAR_10) {
    return 0;
  }
  if (FUNC_1 (VAR_10->left) < 0 ||
      FUNC_1 (VAR_10->right) < 0) {
    return -1;
  }
  VAR_10->item_id = (VAR_10->op == VAR_5 ? VAR_1 : VAR_3);
  VAR_10->priority = 0;
  if (VAR_10->op == VAR_6 && !VAR_10->word) {
    VAR_10->word = VAR_9;
  } else if (VAR_10->op != VAR_7 || VAR_10->iter) {
    return 0;
  }







  if (VAR_4 >= VAR_2) {
    return -1;
  }
  VAR_11 = VAR_4++;
  VAR_0[VAR_11].sp = -2;

  if (VAR_0[VAR_11].sp == -2) {
    FUNC_0 (VAR_0+VAR_11, VAR_10->word, 0, 0);
  }
  VAR_10->iter = &VAR_0[VAR_11];
  VAR_10->item_id = VAR_10->iter->item_id;
  VAR_10->cur = VAR_10->iter->cur;
  if (VAR_10->item_id == VAR_1) {
    VAR_8++;
    VAR_10->op = VAR_5;
  }
  VAR_10->priority = VAR_10->iter->cur_y & 1;
  return 1;
}
