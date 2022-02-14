
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* tp_free ) (int *) ;} ;
struct TYPE_5__ {int observation_indices; int env_c_api; int level_cache_context; } ;
typedef int PyObject ;
typedef TYPE_1__ LabObject ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(PyObject* VAR_0) {
  LabObject* VAR_1 = (LabObject*)VAR_0;
  FUNC_2(VAR_1);
  FUNC_1(VAR_1->level_cache_context);
  FUNC_3(VAR_1->env_c_api);
  FUNC_3(VAR_1->observation_indices);
  FUNC_0(VAR_1)->tp_free(VAR_0);
}
