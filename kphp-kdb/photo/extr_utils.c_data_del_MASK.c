
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dyn_object ;
struct TYPE_8__ {int dyn_snapshots; int hidden_state; int id_to_local_id; int prm; } ;
typedef TYPE_1__ data ;
struct TYPE_9__ {int (* free_dyn ) (int *,int **) ;} ;


 TYPE_6__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int **) ;

int FUNC_9 (data *VAR_2, int VAR_3) {

  int VAR_4 = FUNC_2 (VAR_2, VAR_3);
  if (VAR_4 < 0) {
    return -1;
  }


  int VAR_5 = FUNC_3 (VAR_2, VAR_4);
  if (VAR_5 >= 0) {
    FUNC_1 (VAR_0, &VAR_2->prm, VAR_5);

    int VAR_6 = VAR_5 == 0 ? -1 : FUNC_1 (VAR_1, &VAR_2->prm, VAR_5 - 1);
    FUNC_4 (VAR_2, VAR_6, VAR_4);
  }

  FUNC_5 (&VAR_2->id_to_local_id, VAR_3, -1);


  FUNC_5 (&VAR_2->hidden_state, VAR_3, 0);

  dyn_object **VAR_7 = (dyn_object **)FUNC_7 (&VAR_2->dyn_snapshots, VAR_4 + 1);
  if (VAR_7 != ((void*)0)) {
    FUNC_0(VAR_2)->free_dyn (((void*)0), VAR_7);
    FUNC_6 (&VAR_2->dyn_snapshots, VAR_4 + 1);
  }

  return 0;
}
