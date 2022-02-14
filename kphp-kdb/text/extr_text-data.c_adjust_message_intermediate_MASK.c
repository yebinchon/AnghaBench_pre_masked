
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int last_local_id; int delayed_tree; int msg_tree; int delayed_value_tree; struct file_user_list_entry* dir_entry; } ;
typedef TYPE_1__ user_t ;
struct TYPE_11__ {int y; int flags; int clear_mask; int set_mask; } ;
typedef TYPE_2__ tree_t ;
struct file_user_list_entry {int user_last_local_id; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 TYPE_1__* FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 struct file_user_list_entry* FUNC_7 (int) ;
 int FUNC_8 () ;
 int VAR_2 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int,int ,void*) ;
 TYPE_2__* FUNC_11 (int ,int) ;
 int FUNC_12 (TYPE_1__*,int,int,int) ;
 int VAR_3 ;

int FUNC_13 (int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  user_t *VAR_8;
  struct file_user_list_entry *VAR_9;
  tree_t *VAR_10;
  int VAR_11;

  FUNC_2 (VAR_5 > 0);

  VAR_8 = FUNC_4 (VAR_4);

  if (!VAR_8) {
    VAR_9 = FUNC_7 (VAR_4);
    if (!VAR_9) {
      return 0;
    }
    if (VAR_5 > VAR_9->user_last_local_id) {
      return 0;
    }
    VAR_8 = FUNC_5 (VAR_4);
  } else {
    VAR_9 = VAR_8->dir_entry;
    if (VAR_5 > VAR_8->last_local_id) {
      return 0;
    }
  }

  if (VAR_6 < 0) {
    FUNC_12 (VAR_8, VAR_5, 0, 0);

    VAR_8->delayed_value_tree = FUNC_9 (VAR_8->delayed_value_tree, VAR_5);
  } else if ((VAR_6 | VAR_7) == 0xffff) {
    FUNC_12 (VAR_8, VAR_5, VAR_7, 1);
  } else {
    if (VAR_6) {
      FUNC_12 (VAR_8, VAR_5, VAR_6, 3);
    }
    if (VAR_7) {
      FUNC_12 (VAR_8, VAR_5, VAR_7, 2);
    }
  }

  VAR_10 = FUNC_11 (VAR_8->msg_tree, VAR_5);

  if (VAR_10 || !VAR_9 || VAR_5 > VAR_9->user_last_local_id || FUNC_6 (VAR_8)) {
    if (VAR_10 && ((VAR_10->y & 7) == VAR_0 || (VAR_10->y & 7) == VAR_1) && !FUNC_6 (VAR_8)) {
      if (VAR_3 > 1) {
        FUNC_3 (VAR_2, "warning: interesting situation for message %d:%d : have ZERO node (type=%d) in memory, no metafile loaded; creating delayed flags operation node.\n", VAR_4, VAR_5, VAR_10->y & 7);
      }
    } else {
      return FUNC_1 (VAR_8, VAR_10, VAR_5, VAR_6, VAR_7);
    }
  }

  if (!VAR_6 && !VAR_7) {
    return 2;
  }

  VAR_10 = FUNC_11 (VAR_8->delayed_tree, VAR_5);
  if (!VAR_10) {
    VAR_11 = (VAR_6 < 0 ? -1 : FUNC_0 (VAR_6, VAR_7));
    VAR_8->delayed_tree = FUNC_10 (VAR_8->delayed_tree, VAR_5, FUNC_8 (), (void *) (long) VAR_11);



    return 3;
  }

  if (VAR_10->flags == -1) {
    return 0;
  }

  if (VAR_6 < 0) {
    VAR_10->flags = -1;
    return 3;
  }

  VAR_11 = FUNC_0 ((VAR_10->clear_mask | VAR_6) & ~VAR_7, (VAR_10->set_mask | VAR_7) & ~VAR_6);

  if (VAR_10->flags == VAR_11) {
    return 2;
  }

  VAR_10->flags = VAR_11;
  return 3;
}
