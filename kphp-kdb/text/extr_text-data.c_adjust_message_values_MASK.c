
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int last_local_id; void* delayed_value_tree; void* msg_tree; struct file_user_list_entry* dir_entry; } ;
typedef TYPE_1__ user_t ;
struct TYPE_9__ {int y; int flags; struct value_data* value; } ;
typedef TYPE_2__ tree_t ;
struct value_data {int zero_mask; int fields_mask; int flags; } ;
struct file_user_list_entry {int user_last_local_id; } ;






 int FUNC_0 (TYPE_1__*,int,struct value_data*) ;
 struct value_data* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 struct value_data* FUNC_4 (struct value_data*,int ,int) ;
 int FUNC_5 (struct value_data*) ;
 TYPE_1__* FUNC_6 (int) ;
 TYPE_1__* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 struct file_user_list_entry* FUNC_9 (int) ;
 int FUNC_10 () ;
 void* FUNC_11 (struct value_data*,struct value_data*,int,int) ;
 int VAR_0 ;
 void* FUNC_12 (void*,int,int ,struct value_data*) ;
 TYPE_2__* FUNC_13 (void*,int) ;
 int VAR_1 ;

int FUNC_14 (int VAR_2, int VAR_3, struct value_data *VAR_4) {
  user_t *VAR_5;
  struct file_user_list_entry *VAR_6;
  tree_t *VAR_7, *VAR_8;
  struct value_data *VAR_9;
  int VAR_10;

  if (FUNC_3 (VAR_2) < 0 || VAR_3 <= 0) {
    FUNC_5 (VAR_4);
    return -1;
  }

  FUNC_2 (!(VAR_4->zero_mask & ~VAR_4->fields_mask) && !(VAR_4->fields_mask & ~VAR_1));

  if (!(VAR_4->fields_mask & VAR_0)) {

    FUNC_5 (VAR_4);
    return 3;
  }

  VAR_5 = FUNC_6 (VAR_2);

  if (!VAR_5) {
    VAR_6 = FUNC_9 (VAR_2);
    if (!VAR_6 || VAR_3 > VAR_6->user_last_local_id) {
      FUNC_5 (VAR_4);
      return 0;
    }
    VAR_5 = FUNC_7 (VAR_2);
  } else {
    VAR_6 = VAR_5->dir_entry;
    if (VAR_3 > VAR_5->last_local_id) {
      FUNC_5 (VAR_4);
      return 0;
    }
  }

  if (VAR_4->fields_mask & ~VAR_0) {
    VAR_4 = FUNC_4 (VAR_4, 0, VAR_0);
  }

  if (!VAR_6 || VAR_3 > VAR_6->user_last_local_id || FUNC_8 (VAR_5)) {
    return FUNC_0 (VAR_5, VAR_3, VAR_4);
  }

  VAR_7 = FUNC_13 (VAR_5->msg_tree, VAR_3);

  if (!VAR_7) {
    VAR_8 = FUNC_13 (VAR_5->delayed_value_tree, VAR_3);
    if (!VAR_8) {
      VAR_5->delayed_value_tree = FUNC_12 (VAR_5->delayed_value_tree, VAR_3, FUNC_10 (), VAR_4);
      return 3;
    }

    VAR_8->value = FUNC_11 (VAR_8->value, VAR_4, -1, 1);
    FUNC_5 (VAR_4);
    return 3;
  }



  switch (VAR_7->y & 7) {
  case 131:
    FUNC_5 (VAR_4);
    return 0;
  case 130:

    return FUNC_0 (VAR_5, VAR_3, VAR_4);
  case 129:
    if (!VAR_4->zero_mask) {
      VAR_8 = FUNC_13 (VAR_5->delayed_value_tree, VAR_3);


      if (!VAR_8) {
        VAR_5->delayed_value_tree = FUNC_12 (VAR_5->delayed_value_tree, VAR_3, FUNC_10 (), VAR_4);
        return 3;
      }
      VAR_8->value = FUNC_11 (VAR_8->value, VAR_4, -1, 1);
      FUNC_5 (VAR_4);
      return 3;
    }


    VAR_9 = FUNC_1 (VAR_4->zero_mask);
    VAR_9->flags = VAR_7->flags & 0xffff;
    VAR_7->y += 128 - 129;
    VAR_7->value = VAR_9;
  case 128:
    VAR_8 = FUNC_13 (VAR_5->delayed_value_tree, VAR_3);

    VAR_7->value = FUNC_11 (VAR_7->value, VAR_4, VAR_4->zero_mask | VAR_7->value->fields_mask, 0);

    VAR_10 = VAR_4->fields_mask & ~(VAR_4->zero_mask | VAR_7->value->fields_mask);
    if (VAR_10) {
      if (!VAR_8) {
        if (VAR_10 != VAR_4->fields_mask) {
          VAR_4 = FUNC_4 (VAR_4, 0, VAR_10);
        }
        VAR_5->delayed_value_tree = FUNC_12 (VAR_5->delayed_value_tree, VAR_3, FUNC_10 (), VAR_4);
        return 3;
      }
      VAR_8->value = FUNC_11 (VAR_8->value, VAR_4, ~VAR_7->value->fields_mask, 1);
    }
    FUNC_5 (VAR_4);
    return 3;
  }

  FUNC_2 (0);
  return -1;
}
