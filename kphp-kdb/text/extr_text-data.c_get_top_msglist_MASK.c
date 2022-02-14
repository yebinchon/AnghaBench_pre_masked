
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* topmsg_tree; scalar_t__ delayed_tree; struct file_user_list_entry* dir_entry; } ;
typedef TYPE_1__ user_t ;
struct TYPE_9__ {int N; } ;
typedef TYPE_2__ tree_num_t ;
struct file_user_list_entry {int dummy; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 struct file_user_list_entry* FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*,int,int,int) ;
 int FUNC_8 (TYPE_2__*,int,int,int) ;
 int VAR_5 ;

int FUNC_9 (int VAR_6, int VAR_7, int VAR_8) {
  user_t *VAR_9;
  tree_num_t *VAR_10;
  struct file_user_list_entry *VAR_11;
  int VAR_12;

  if (VAR_5 > 1) {
    FUNC_2 (VAR_4, "get_top_peers_list(%d,%d,%d)\n", VAR_6, VAR_7, VAR_8);
  }

  if (FUNC_1 (VAR_6) < 0) {
    return -1;
  }

  VAR_9 = FUNC_3 (VAR_6);
  VAR_3 = 0;

  if (VAR_9) {
    VAR_11 = VAR_9->dir_entry;
    if (VAR_9->delayed_tree || VAR_11) {

      if (!FUNC_5 (VAR_6)) {
        return -2;
      }
    }
  } else {
    VAR_11 = FUNC_6 (VAR_6);
    if (VAR_11) {
      VAR_9 = FUNC_4 (VAR_6);
      if (!FUNC_5 (VAR_6)) {
        return -2;
      }
    }
  }


  if (!VAR_9 || VAR_9->topmsg_tree == VAR_1) {
    return 0;
  }

  VAR_10 = VAR_9->topmsg_tree;

  VAR_12 = VAR_10->N;
  FUNC_0 (VAR_12 >= 0);
  if (!VAR_12) {
    return 0;
  }

  if (!VAR_7 || !VAR_8) {
    return VAR_12;
  }
  if (VAR_7 < 0) {
    VAR_7 += VAR_12;
  } else {
    VAR_7--;
  }
  if (VAR_8 < 0) {
    VAR_8 += VAR_12;
  } else {
    VAR_8--;
  }

  if (VAR_7 <= VAR_8) {
    VAR_8 = VAR_8 - VAR_7 + 1;
    if ((unsigned) VAR_8 > VAR_0 / 2) {
      VAR_8 = VAR_0 / 2;
    }
    VAR_3 = FUNC_7 (VAR_10, VAR_2, VAR_7 + 1, VAR_7 + VAR_8) - VAR_2;
  } else {
    VAR_8 = VAR_7 - VAR_8 + 1;
    if ((unsigned) VAR_8 > VAR_0 / 2) {
      VAR_8 = VAR_0 / 2;
    }
    VAR_3 = FUNC_8 (VAR_10, VAR_2, VAR_12 - VAR_7, VAR_12 - VAR_7 + VAR_8 - 1) - VAR_2;
  }

  FUNC_0 (VAR_3 >= 0 && VAR_3 <= VAR_8 * 2);

  return VAR_12;
}
