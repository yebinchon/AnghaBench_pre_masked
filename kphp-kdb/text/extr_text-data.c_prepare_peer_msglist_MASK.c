
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ delayed_tree; int peer_tree; struct file_user_list_entry* dir_entry; } ;
typedef TYPE_1__ user_t ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__ tree_t ;
struct file_user_list_entry {int dummy; } ;
struct TYPE_12__ {int last_A; int N; int * A; int root; } ;
typedef TYPE_3__ listree_t ;
struct TYPE_13__ {char* data; } ;
typedef TYPE_4__ core_mf_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (char*,int,int *) ;
 TYPE_1__* FUNC_3 (int) ;
 char* FUNC_4 (TYPE_1__*) ;
 TYPE_4__* FUNC_5 (int) ;
 struct file_user_list_entry* FUNC_6 (int) ;
 TYPE_2__* FUNC_7 (int ,int) ;

int FUNC_8 (int VAR_1, int VAR_2, listree_t *VAR_3) {
  user_t *VAR_4;
  tree_t *VAR_5;
  struct file_user_list_entry *VAR_6;
  char *VAR_7;



  if (FUNC_1 (VAR_1) < 0 || !VAR_2) {
    return -1;
  }

  VAR_4 = FUNC_3 (VAR_1);
  VAR_5 = 0;

  if (VAR_4) {
    VAR_6 = VAR_4->dir_entry;
    if (VAR_4->delayed_tree) {

      if (!FUNC_5 (VAR_1)) {
        return -2;
      }
    }
    VAR_5 = FUNC_7 (VAR_4->peer_tree, VAR_2);
  } else {
    VAR_6 = FUNC_6 (VAR_1);
  }

  if (!VAR_5 && !VAR_6) {
    return 0;
  }

  VAR_3->root = (VAR_5 ? VAR_5->data : VAR_0);

  if (VAR_6) {
    if (!VAR_4 || !FUNC_4 (VAR_4)) {
      core_mf_t *VAR_8 = FUNC_5 (VAR_1);
      if (!VAR_8) {
        return -2;
      }
      VAR_7 = VAR_8->data;
    } else {
      VAR_7 = FUNC_4 (VAR_4);
    }
    VAR_3->A = FUNC_2 (VAR_7, VAR_2, &VAR_3->N);
    VAR_3->last_A = (VAR_3->N ? VAR_3->A[VAR_3->N-1] : 0);

  } else {
    VAR_3->A = 0;
    VAR_3->N = 0;
    VAR_3->last_A = 0;
  }

  FUNC_0 (!VAR_4 || !VAR_4->delayed_tree);
  return 1;
}
