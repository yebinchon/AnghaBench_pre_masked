
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int new_v; } ;
struct TYPE_5__ {scalar_t__ new_objects_n; TYPE_1__ hidden_state; int dyn_snapshots; int prm; } ;
typedef TYPE_2__ data ;


 scalar_t__ FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3 (data *VAR_1, int VAR_2) {
  return VAR_1->new_objects_n == 0 &&
          FUNC_0 (VAR_0, &VAR_1->prm, VAR_2) &&
          FUNC_2 (&VAR_1->dyn_snapshots) == 0 &&
          FUNC_1 (&VAR_1->hidden_state.new_v) == 0 &&
          1;
}
