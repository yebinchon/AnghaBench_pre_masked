
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int n; } ;
struct TYPE_5__ {int objects_n; TYPE_2__ hidden_state; TYPE_2__ id_to_local_id; int * objects_offset; int * objects; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2 (data *VAR_0) {
  VAR_0->objects_n = -1;
  VAR_0->objects = ((void*)0);
  VAR_0->objects_offset = ((void*)0);
  FUNC_1 (&VAR_0->id_to_local_id);
  int VAR_1 = VAR_0->hidden_state.n;
  FUNC_1 (&VAR_0->hidden_state);

  return FUNC_0 (VAR_0, VAR_1);
}
