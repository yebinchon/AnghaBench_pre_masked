
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int y; int x; } ;
typedef TYPE_2__ pair_int_int ;
struct TYPE_11__ {int dir; int ids_n; int new_ids_n; int ids_i; int ids_end; int new_ids_i; int new_ids_end; int * new_local_ids; int * new_ids; TYPE_4__* d; int old_perm; int ids; } ;
typedef TYPE_3__ data_iterator ;
struct TYPE_9__ {int new_v; int y; int x; } ;
struct TYPE_12__ {int objects_n; TYPE_1__ id_to_local_id; } ;
typedef TYPE_4__ data ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (int *) ;

void FUNC_6 (data_iterator *VAR_0, data *VAR_1, int VAR_2) {
  FUNC_0 (VAR_2 == -1 || VAR_2 == +1);
  VAR_0->ids = VAR_1->id_to_local_id.x;
  VAR_0->old_perm = VAR_1->id_to_local_id.y;
  VAR_0->d = VAR_1;
  VAR_0->dir = VAR_2;

  VAR_0->ids_n = VAR_1->objects_n;
  int VAR_3 = VAR_0->new_ids_n = FUNC_5 (&VAR_1->id_to_local_id.new_v);

  VAR_0->new_ids = FUNC_2 (VAR_3 * sizeof (int));
  VAR_0->new_local_ids = FUNC_2 (VAR_3 * sizeof (int));

  FUNC_0 (FUNC_4 (&VAR_1->id_to_local_id.new_v, VAR_0->new_ids, VAR_0->new_local_ids, VAR_3) == VAR_3);

  size_t VAR_4 = sizeof (pair_int_int) * VAR_3;
  pair_int_int *VAR_5 = FUNC_2 (VAR_4);
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    VAR_5[VAR_6].x = VAR_0->new_ids[VAR_6];
    VAR_5[VAR_6].y = VAR_0->new_local_ids[VAR_6];
  }
  FUNC_3 (VAR_5, VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    VAR_0->new_ids[VAR_6] = VAR_5[VAR_6].x;
    VAR_0->new_local_ids[VAR_6] = VAR_5[VAR_6].y;
  }
  FUNC_1 (VAR_5, VAR_4);

  if (VAR_2 < 0) {
    VAR_0->ids_i = VAR_0->ids_n - 1;
    VAR_0->ids_end = -1;

    VAR_0->new_ids_i = VAR_0->new_ids_n - 1;
    VAR_0->new_ids_end = -1;
  } else {
    VAR_0->ids_i = 0;
    VAR_0->ids_end = VAR_0->ids_n;

    VAR_0->new_ids_i = 0;
    VAR_0->new_ids_end = VAR_0->new_ids_n;
  }

}
