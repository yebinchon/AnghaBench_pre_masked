
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int user_id; int topmsg_tree; TYPE_1__* Sublists; int persistent_ts; int last_local_id; struct file_user_list_entry* dir_entry; int last_pq; int first_pq; int last_q; int first_q; } ;
typedef TYPE_2__ user_t ;
struct file_user_list_entry_search_history {int user_history_max_ts; } ;
struct file_user_list_entry {int user_last_local_id; int * user_sublists_size; } ;
typedef int listree_t ;
struct TYPE_9__ {void* root; int last_A; int N; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__** VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 struct file_user_list_entry* FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_5 (int) ;

user_t *FUNC_6 (int VAR_9) {
  int VAR_10 = FUNC_2 (VAR_9);
  user_t *VAR_11;
  if (VAR_10 < 0) { return 0; }
  VAR_11 = VAR_2[VAR_10];
  if (VAR_11) { return VAR_11; }

  int VAR_12 = sizeof (user_t) + VAR_7 * sizeof (listree_t);
  VAR_11 = FUNC_5 (VAR_12);
  FUNC_4 (VAR_11, 0, VAR_12);
  VAR_11->user_id = VAR_9;
  VAR_2[VAR_10] = VAR_11;
  if (VAR_10 > VAR_4) { VAR_4 = VAR_10; }
  if (VAR_10 < VAR_5) { VAR_5 = VAR_10; }
  VAR_8++;

  VAR_11->first_q = VAR_11->last_q = FUNC_0 (VAR_11);
  VAR_11->first_pq = VAR_11->last_pq = FUNC_1 (VAR_11);

  struct file_user_list_entry *VAR_13 = FUNC_3 (VAR_9);
  VAR_11->dir_entry = VAR_13;
  if (VAR_13) {
    VAR_11->last_local_id = VAR_13->user_last_local_id;
    if (VAR_6) {
      VAR_11->persistent_ts = ((struct file_user_list_entry_search_history *) VAR_13)->user_history_max_ts;
    }
    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
      VAR_11->Sublists[VAR_10].root = VAR_0;
      VAR_11->Sublists[VAR_10].N = VAR_13->user_sublists_size[VAR_3+VAR_10];
      VAR_11->Sublists[VAR_10].last_A = VAR_13->user_last_local_id;
    }
  } else {
    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
      VAR_11->Sublists[VAR_10].root = VAR_0;
    }
  }

  VAR_11->topmsg_tree = VAR_1;

  return VAR_11;
}
