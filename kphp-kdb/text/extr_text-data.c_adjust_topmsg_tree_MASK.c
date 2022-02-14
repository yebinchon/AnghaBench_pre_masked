
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int user_id; void* topmsg_tree; int peer_tree; struct file_user_list_entry* dir_entry; } ;
typedef TYPE_1__ user_t ;
struct TYPE_13__ {int data; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_14__ {int z; int x; } ;
typedef TYPE_3__ tree_num_t ;
struct file_user_list_entry {int user_last_local_id; } ;
struct TYPE_15__ {int N; int last_A; int * A; int root; } ;
typedef TYPE_4__ listree_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,int,int*) ;
 int FUNC_2 (int ,char*,int,TYPE_1__*,char*,struct file_user_list_entry*,int,int,int,int,int,int,int) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_6 (int ,int) ;
 void* FUNC_7 (void*,int) ;
 void* FUNC_8 (void*,int,int ,int) ;
 TYPE_3__* FUNC_9 (void*,int) ;
 int FUNC_10 (int,char*,TYPE_1__*,int,int,int,int,int,char*,struct file_user_list_entry*) ;

int FUNC_11 (user_t *VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  char *VAR_7 = FUNC_3 (VAR_3);
  struct file_user_list_entry *VAR_8 = VAR_3->dir_entry;
  listree_t VAR_9;
  int VAR_10 = 0;
  tree_num_t *VAR_11;

  FUNC_0 (VAR_5 > 0 && (VAR_7 || !VAR_8 || VAR_5 > VAR_8->user_last_local_id));

  if (!VAR_7 && VAR_8) {
    FUNC_0 (VAR_3->topmsg_tree == VAR_1);
    return 0;
  }

  tree_t *VAR_12 = FUNC_6 (VAR_3->peer_tree, VAR_4);

  VAR_9.root = (VAR_12 ? VAR_12->data : VAR_0);

  if (VAR_7) {
    VAR_9.A = FUNC_1 (VAR_7, VAR_4, &VAR_9.N);
    VAR_9.last_A = (VAR_9.N ? VAR_9.A[VAR_9.N-1] : 0);

  } else {
    VAR_9.A = 0;
    VAR_9.N = 0;
    VAR_9.last_A = 0;
  }

  VAR_10 = FUNC_4 (&VAR_9, 0);

  FUNC_10 (4, "adjust_topmsg_tree (%p %d, %d, %d, %d) : prev_id=%d metafile=%p D=%p\n", VAR_3, VAR_3->user_id, VAR_4, VAR_5, VAR_6, VAR_10, VAR_7, VAR_8);

  FUNC_0 (VAR_10 == -1 || VAR_10 > 0);

  if (VAR_5 < VAR_10) {

    return VAR_10;
  }

  if (VAR_6 > 0) {
    if (VAR_10 > 0) {
      VAR_11 = FUNC_9 (VAR_3->topmsg_tree, VAR_10);
      if (VAR_11->z != VAR_4) {
        FUNC_2 (VAR_2, "ERROR in adjust_topmsg_tree: uid=%d, U=%p, mf=%p, D=%p, mf_last_local_id=%d, peer=%d, local_id=%d, prev_id=%d, op=%d, TT.x=%d, TT.z=%d\n", VAR_3->user_id, VAR_3, VAR_7, VAR_8, VAR_8 ? VAR_8->user_last_local_id : 0, VAR_4, VAR_5, VAR_10, VAR_6, VAR_11->x, VAR_11->z);


      }
      FUNC_0 (VAR_11->z == VAR_4);
      VAR_3->topmsg_tree = FUNC_7 (VAR_3->topmsg_tree, VAR_10);
    }
    VAR_3->topmsg_tree = FUNC_8 (VAR_3->topmsg_tree, VAR_5, FUNC_5(), VAR_4);
  } else {
    VAR_11 = FUNC_9 (VAR_3->topmsg_tree, VAR_5);
    if (VAR_11->z != VAR_4) {
      FUNC_2 (VAR_2, "ERROR in adjust_topmsg_tree: uid=%d, U=%p, mf=%p, D=%p, mf_last_local_id=%d, peer=%d, local_id=%d, prev_id=%d, op=%d, TT.x=%d, TT.z=%d\n", VAR_3->user_id, VAR_3, VAR_7, VAR_8, VAR_8 ? VAR_8->user_last_local_id : 0, VAR_4, VAR_5, VAR_10, VAR_6, VAR_11->x, VAR_11->z);


    }
    FUNC_0 (VAR_11->z == VAR_4);
    VAR_3->topmsg_tree = FUNC_7 (VAR_3->topmsg_tree, VAR_5);
    if (VAR_10 > 0) {
      VAR_3->topmsg_tree = FUNC_8 (VAR_3->topmsg_tree, VAR_10, FUNC_5(), VAR_4);
    }
  }

  return VAR_10;
}
