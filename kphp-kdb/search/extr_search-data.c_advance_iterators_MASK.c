
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ item_id; int op; int priority; int cur; struct TYPE_5__* right; struct TYPE_5__* left; TYPE_2__* iter; } ;
typedef TYPE_1__ query_node_t ;
struct TYPE_6__ {int cur_y; long long item_id; int cur; } ;
typedef TYPE_2__ iheap_en_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,long long) ;






 int VAR_1 ;

long long FUNC_2 (query_node_t *VAR_2, long long VAR_3) {
  iheap_en_t *VAR_4;
  query_node_t *VAR_5, *VAR_6;
  if (VAR_2->item_id == VAR_0) {
    return VAR_2->item_id;
  }
  switch (VAR_2->op) {
    case 132:
      VAR_2->cur = 0;
      return VAR_0;
    case 129:
    case 128:
      VAR_4 = VAR_2->iter;
      if (!FUNC_1 (VAR_4, VAR_3)) {
        VAR_2->op = 132;
        VAR_2->priority = 0;
        VAR_1++;
        VAR_2->cur = 0;
        return VAR_2->item_id = VAR_0;
      }
      VAR_2->priority = VAR_4->cur_y & 1;
      VAR_2->cur = VAR_4->cur;
      return VAR_2->item_id = VAR_4->item_id;
    case 133:
      VAR_5 = VAR_2->left; VAR_6 = VAR_2->right;
      if (VAR_5->item_id < VAR_3) {
        if (VAR_0 == FUNC_2 (VAR_5, VAR_3)) { return VAR_2->item_id = VAR_0; }
      }

      while (VAR_5->item_id != VAR_6->item_id) {
        if (VAR_5->item_id < VAR_6->item_id) {
          if (VAR_0 == FUNC_2 (VAR_5, VAR_6->item_id)) { return VAR_2->item_id = VAR_0; }
        } else {
          if (VAR_0 == FUNC_2 (VAR_6, VAR_5->item_id)) { return VAR_2->item_id = VAR_0; }
        }
      }
      VAR_2->cur = VAR_5->cur;
      VAR_2->priority = VAR_5->priority + VAR_6->priority;
      return VAR_2->item_id = VAR_5->item_id;
    case 130:
      VAR_5 = VAR_2->left; VAR_6 = VAR_2->right;
      if (VAR_5->item_id < VAR_3) {
        FUNC_2 (VAR_5, VAR_3);
      }
      if (VAR_6->item_id < VAR_3) {
        FUNC_2 (VAR_6, VAR_3);
      }
      if (VAR_5->item_id < VAR_6->item_id) {
        VAR_2->priority = VAR_5->priority;
        VAR_2->cur = VAR_5->cur;
        return VAR_2->item_id = VAR_5->item_id;
      } else if (VAR_5->item_id > VAR_6->item_id) {
        VAR_2->priority = VAR_6->priority;
        VAR_2->cur = VAR_6->cur;
        return VAR_2->item_id = VAR_6->item_id;
      }
      VAR_2->cur = VAR_5->cur;
      VAR_2->priority = VAR_5->priority + VAR_6->priority;
      return VAR_2->item_id = VAR_5->item_id;
    case 131:
      VAR_5 = VAR_2->left; VAR_6 = VAR_2->right;
      if (VAR_5->item_id < VAR_3) {
        if (VAR_0 == FUNC_2 (VAR_5, VAR_3)) { return VAR_2->item_id = VAR_0; }
      }

      if (VAR_5->item_id > VAR_6->item_id) {
        FUNC_2 (VAR_6, VAR_5->item_id);
      }
      while (VAR_5->item_id == VAR_6->item_id && VAR_5->item_id < VAR_0) {
        if (VAR_0 == FUNC_2 (VAR_5, VAR_5->item_id + 1)) {
          return VAR_2->item_id = VAR_0;
        }
        FUNC_2 (VAR_6, VAR_5->item_id);
      }
      VAR_2->priority = VAR_5->priority;
      VAR_2->cur = VAR_5->cur;
      return VAR_2->item_id = VAR_5->item_id;
    default:
      FUNC_0 (0);
  }
}
