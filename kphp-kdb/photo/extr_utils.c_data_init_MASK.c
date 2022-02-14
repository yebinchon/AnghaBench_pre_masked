
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int data_functions ;
struct TYPE_3__ {int objects_n; int restore_info; int dyn_snapshots; int prm; int hidden_state; int id_to_local_id; scalar_t__ new_objects_n; int * objects_offset; int * objects; int * func; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3 (data *VAR_1, data_functions *VAR_2) {
  VAR_1->func = VAR_2;
  VAR_1->objects_n = -2;
  VAR_1->objects = ((void*)0);
  VAR_1->objects_offset = ((void*)0);
  VAR_1->new_objects_n = 0;
  FUNC_1 (&VAR_1->id_to_local_id);
  FUNC_1 (&VAR_1->hidden_state);


  FUNC_0 (VAR_0, &VAR_1->prm);
  FUNC_2 (&VAR_1->dyn_snapshots);
  FUNC_2 (&VAR_1->restore_info);
}
