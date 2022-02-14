
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; struct TYPE_4__* right; scalar_t__ value; struct TYPE_4__* left; } ;
typedef TYPE_1__ tree_t ;
struct pair_hostid_result {int host_id; scalar_t__ result; } ;
struct TYPE_5__ {unsigned long long volume_id; int disabled; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1 (struct pair_hostid_result *VAR_2, int *VAR_3, unsigned long long VAR_4, tree_t *VAR_5) {
  if (VAR_5 == ((void*)0)) {
    return;
  }
  FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5->left);
  const int VAR_6 = (!(*VAR_3)) ? 1 : (VAR_2[(*VAR_3)-1].host_id + 1);
  int VAR_7;

  for (VAR_7 = VAR_6; VAR_7 < VAR_5->x; VAR_7++) {
    if (VAR_0[VAR_7]->volume_id == VAR_4 && !VAR_0[VAR_7]->disabled) {
      FUNC_0 ((*VAR_3) < VAR_1);
      VAR_2[*VAR_3].host_id = VAR_7;
      VAR_2[*VAR_3].result = 0;
      (*VAR_3)++;
    }
  }

  FUNC_0 ((*VAR_3) < VAR_1);
  FUNC_0 (VAR_0[VAR_5->x]->volume_id == VAR_4);
  if (!VAR_0[VAR_5->x]->disabled) {
    VAR_2[*VAR_3].host_id = VAR_5->x;
    VAR_2[*VAR_3].result = VAR_5->value;
    (*VAR_3)++;
  }
  FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5->right);
}
