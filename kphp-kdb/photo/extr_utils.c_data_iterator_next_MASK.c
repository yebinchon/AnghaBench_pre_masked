
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ids_i; size_t ids_end; size_t new_ids_i; size_t new_ids_end; int* ids; int dir; int* new_ids; int* new_local_ids; int* old_perm; int id; int local_id; int d; } ;
typedef TYPE_1__ data_iterator ;


 scalar_t__ FUNC_0 (int ,int) ;

int FUNC_1 (data_iterator *VAR_0) {

  while (VAR_0->ids_i != VAR_0->ids_end || VAR_0->new_ids_i != VAR_0->new_ids_end) {
    int VAR_1, VAR_2;
    if (VAR_0->new_ids_i == VAR_0->new_ids_end || (VAR_0->ids_i != VAR_0->ids_end && VAR_0->ids[VAR_0->ids_i] * VAR_0->dir <= VAR_0->new_ids[VAR_0->new_ids_i] * VAR_0->dir)) {
      if (VAR_0->new_ids_i != VAR_0->new_ids_end && VAR_0->ids[VAR_0->ids_i] == VAR_0->new_ids[VAR_0->new_ids_i]) {
        VAR_1 = VAR_0->new_ids[VAR_0->new_ids_i];
        VAR_2 = VAR_0->new_local_ids[VAR_0->new_ids_i];

        VAR_0->new_ids_i += VAR_0->dir;
        VAR_0->ids_i += VAR_0->dir;
      } else {
        VAR_1 = VAR_0->ids[VAR_0->ids_i];
        VAR_2 = VAR_0->old_perm[VAR_0->ids_i];
        VAR_0->ids_i += VAR_0->dir;
      }
    } else {
      VAR_1 = VAR_0->new_ids[VAR_0->new_ids_i];
      VAR_2 = VAR_0->new_local_ids[VAR_0->new_ids_i];
      VAR_0->new_ids_i += VAR_0->dir;
    }
    if (VAR_2 >= 0 && FUNC_0 (VAR_0->d, VAR_1) == 0) {


      VAR_0->id = -VAR_1 * VAR_0->dir;
      VAR_0->local_id = VAR_2;
      return 1;
    }
  }
  return 0;
}
