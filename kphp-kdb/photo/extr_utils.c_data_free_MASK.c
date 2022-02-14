
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int restore_info; int dyn_snapshots; int prm; int hidden_state; int id_to_local_id; } ;
typedef TYPE_1__ data ;
struct TYPE_6__ {int free_dyn; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5 (data *VAR_2) {
  FUNC_2 (&VAR_2->id_to_local_id);
  FUNC_2 (&VAR_2->hidden_state);

  FUNC_1 (VAR_0, &VAR_2->prm);
  FUNC_3 (&VAR_2->dyn_snapshots, FUNC_0(VAR_2)->free_dyn);
  FUNC_4 (&VAR_2->dyn_snapshots);


  FUNC_3 (&VAR_2->restore_info, VAR_1);
  FUNC_4 (&VAR_2->restore_info);
}
