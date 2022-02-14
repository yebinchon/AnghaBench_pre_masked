
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dyn_object ;
struct TYPE_5__ {int dyn_snapshots; } ;
typedef TYPE_1__ data ;
typedef int change ;
struct TYPE_6__ {int (* add_change ) (int **,int *) ;} ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int **,int *) ;

int FUNC_4 (data *VAR_0, change *VAR_1, int VAR_2) {



  dyn_object **VAR_3 = (dyn_object **)FUNC_1 (&VAR_0->dyn_snapshots, VAR_2 + 1);
  FUNC_0(VAR_0)->add_change(VAR_3, VAR_1);
  if (*VAR_3 == ((void*)0)) {
    FUNC_2 (&VAR_0->dyn_snapshots, VAR_2 + 1);
  }

  return 0;
}
