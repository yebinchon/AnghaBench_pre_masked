
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t size; TYPE_4__** entries; int * member_0; } ;
typedef TYPE_3__ h2o_socketpool_target_vector_t ;
struct TYPE_9__ {scalar_t__ weight_m1; } ;
struct TYPE_8__ {scalar_t__ leased_count; } ;
struct TYPE_11__ {TYPE_2__ conf; TYPE_1__ _shared; } ;
typedef TYPE_4__ h2o_socketpool_target_t ;


 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*,size_t) ;

__attribute__((used)) static h2o_socketpool_target_vector_t FUNC_2(size_t VAR_0)
{
    size_t VAR_1;
    h2o_socketpool_target_vector_t VAR_2 = {((void*)0)};

    FUNC_1(((void*)0), &VAR_2, VAR_0);
    for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++) {
        h2o_socketpool_target_t *VAR_3 = FUNC_0(sizeof(*VAR_3));
        VAR_3->_shared.leased_count = 0;
        VAR_3->conf.weight_m1 = 0;
        VAR_2.entries[VAR_1] = VAR_3;
    }
    VAR_2.size = VAR_0;

    return VAR_2;
}
