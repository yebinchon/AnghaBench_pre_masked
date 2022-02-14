
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int msg_tree; struct msg_search_node* last; int edit_text_tree; } ;
typedef TYPE_3__ user_t ;
struct TYPE_12__ {int x; int y; TYPE_2__* msg; TYPE_1__* edit_text; } ;
typedef TYPE_4__ tree_t ;
typedef int tree_iterator_t ;
struct msg_search_node {int local_id; int words_num; int words; struct msg_search_node* prev; } ;
struct TYPE_10__ {int flags; scalar_t__ peer_id; scalar_t__ date; int len; scalar_t__ text; } ;
struct TYPE_9__ {struct msg_search_node* search_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_4__* FUNC_3 (int *,int ) ;
 TYPE_4__* FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int ,int) ;

int FUNC_6 (user_t *VAR_11, int VAR_12, int *VAR_13) {
  struct msg_search_node *VAR_14;
  int VAR_15 = VAR_0;
  int VAR_16 = 0;
  static tree_iterator_t VAR_17;
  tree_t *VAR_18 = FUNC_3 (&VAR_17, VAR_11->edit_text_tree);

  for (VAR_14 = VAR_11->last; VAR_14; VAR_14 = VAR_14->prev) {

    struct msg_search_node *VAR_19 = VAR_14;

    while (VAR_18 && VAR_18->x > VAR_14->local_id) {
      VAR_18 = FUNC_4 (&VAR_17);
    }

    if (VAR_18 && VAR_18->x == VAR_14->local_id) {
      VAR_19 = VAR_18->edit_text->search_node;
      VAR_18 = FUNC_4 (&VAR_17);
    }

    if (FUNC_2 (VAR_1, VAR_2, VAR_19->words, VAR_19->words_num)) {
      tree_t *VAR_20 = FUNC_5 (VAR_11->msg_tree, VAR_14->local_id);
      if (VAR_20) {
        FUNC_1 ((VAR_20->y & 7) == VAR_4);
        int VAR_21 = VAR_20->msg->flags;
        if (!((VAR_21 ^ VAR_9) & VAR_5) && (!VAR_8 || VAR_20->msg->peer_id == VAR_8) && VAR_20->msg->date >= VAR_7 && VAR_20->msg->date < VAR_6) {
          if (VAR_3) {
            if (!--VAR_15) {
              break;
            }
            if (!FUNC_0 (VAR_20->msg->text + VAR_10, VAR_20->msg->len)) {
              continue;
            }
          }
          VAR_13[VAR_16++] = VAR_14->local_id;
          if (VAR_16 >= VAR_12) {
            return VAR_16;
          }
        }
      }
    }
  }

  return VAR_16;
}
