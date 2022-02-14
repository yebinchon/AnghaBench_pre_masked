
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int dir_entry; int user_id; scalar_t__ topmsg_tree; scalar_t__ delayed_value_tree; scalar_t__ delayed_tree; int peer_tree; TYPE_1__* Sublists; TYPE_3__* mf; } ;
typedef TYPE_2__ user_t ;
struct TYPE_14__ {char* data; scalar_t__ len; int aio; } ;
typedef TYPE_3__ core_mf_t ;
struct TYPE_15__ {int combined_xor_and; } ;
struct TYPE_12__ {int N; int* A; int last_A; } ;
struct TYPE_11__ {int sublists_num; int sublists_offset; scalar_t__ legacy_list_offset; int peers_offset; int peers_num; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_10__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,TYPE_2__*,int,char*) ;
 TYPE_7__* VAR_3 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int* FUNC_4 (int ,int*,int*,int ,TYPE_2__*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_5 (user_t *VAR_7) {
  core_mf_t *VAR_8 = VAR_7->mf;
  int VAR_9, *VAR_10;
  FUNC_0 (VAR_8 && !VAR_8->aio);
  char *VAR_11 = VAR_8->data;
  FUNC_0 (VAR_7->dir_entry);
  FUNC_0 (VAR_2->sublists_num == VAR_5);

  if (VAR_6 > 2) {
    FUNC_1 (VAR_4, "bind_user_metafile(%p) : user_id=%d mf=%p\n", VAR_7, VAR_7->user_id, VAR_11);
  }

  VAR_10 = (int *) (VAR_11 + VAR_2->sublists_offset);
  FUNC_0 (!VAR_10[0]);
  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
    int *VAR_12 = (int *) (VAR_11 + VAR_2->sublists_offset + VAR_5 * 8 + 4) + VAR_10[2*VAR_9];
    int VAR_13 = VAR_10[2*VAR_9+2] - VAR_10[2*VAR_9];
    FUNC_0 (VAR_10[2*VAR_9+1] == VAR_3[VAR_9].combined_xor_and);
    FUNC_0 (VAR_13 >= 0);
    FUNC_0 (VAR_13 == VAR_7->Sublists[VAR_9].N);
    FUNC_0 (!VAR_7->Sublists[VAR_9].A);
    VAR_7->Sublists[VAR_9].A = VAR_12;
    FUNC_0 (!VAR_13 || VAR_12[VAR_13-1] <= VAR_7->Sublists[VAR_9].last_A);
    VAR_7->Sublists[VAR_9].last_A = VAR_13 ? VAR_12[VAR_13-1] : 0;
  }
  FUNC_0 (VAR_2->sublists_offset + VAR_5 * 8 + 4 + VAR_10[2*VAR_9] * 4 <= VAR_2->legacy_list_offset && VAR_2->legacy_list_offset <= VAR_8->len);

  FUNC_0 (VAR_7->topmsg_tree == VAR_1);

  int *VAR_14 = (int *) (VAR_11 + VAR_2->peers_offset);
  int *VAR_15 = VAR_14 + 2 * VAR_2->peers_num;

  FUNC_0 (FUNC_4 (VAR_7->peer_tree, VAR_14, VAR_15, VAR_0, VAR_7, VAR_11) == VAR_15);

  if (VAR_7->delayed_tree) {

    FUNC_2 (VAR_7, VAR_7->delayed_tree);
    VAR_7->delayed_tree = 0;
  }

  if (VAR_7->delayed_value_tree) {
    FUNC_3 (VAR_7, VAR_7->delayed_value_tree);
    VAR_7->delayed_value_tree = 0;
  }

}
