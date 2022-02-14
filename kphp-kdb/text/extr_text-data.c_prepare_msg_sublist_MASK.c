
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ delayed_tree; int * Sublists; struct file_user_list_entry* dir_entry; } ;
typedef TYPE_1__ user_t ;
struct file_user_list_entry {int* user_sublists_size; } ;
typedef int listree_t ;
struct TYPE_6__ {int and_mask; int xor_mask; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 struct file_user_list_entry* FUNC_5 (int) ;
 int VAR_2 ;

int FUNC_6 (int VAR_3, int VAR_4, int VAR_5, listree_t **VAR_6, int VAR_7, int VAR_8) {
  user_t *VAR_9;
  struct file_user_list_entry *VAR_10;
  int VAR_11;
  int VAR_12;



  if (FUNC_1 (VAR_3) < 0 || !VAR_4) {
    return -1;
  }

  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
    if (VAR_0[VAR_12].and_mask == VAR_4 && VAR_0[VAR_12].xor_mask == VAR_5) {
      break;
    }
  }

  if (VAR_12 == VAR_2) {
    return -3;
  }

  VAR_9 = FUNC_2 (VAR_3);
  *VAR_6 = 0;
  VAR_11 = 0;

  if (VAR_9) {
    VAR_10 = VAR_9->dir_entry;
    *VAR_6 = VAR_9->Sublists + VAR_12;
    if (VAR_9->delayed_tree) {

      if (!FUNC_4 (VAR_3)) {
        return -2;
      }
    }
  } else {
    VAR_10 = FUNC_5 (VAR_3);
  }

  if (!*VAR_6 && !VAR_10) {
    return 0;
  }

  if (!*VAR_6) {
    VAR_11 = (VAR_10 ? VAR_10->user_sublists_size[VAR_1+VAR_12] : 0);
    if (!VAR_7 || !VAR_8 || !VAR_11) {
      return VAR_11;
    }
    if ((VAR_7 < -VAR_11 || VAR_7 > VAR_11) && (VAR_8 < -VAR_11 || VAR_8 > VAR_11)) {
      return VAR_11;
    }

    if (!FUNC_4 (VAR_3)) {
      return -2;
    }

    VAR_9 = FUNC_2 (VAR_3);
    FUNC_0 (VAR_9 && FUNC_3 (VAR_9));
    *VAR_6 = VAR_9->Sublists + VAR_12;
  }

  FUNC_0 (!VAR_9 || !VAR_9->delayed_tree);
  return -4;
}
