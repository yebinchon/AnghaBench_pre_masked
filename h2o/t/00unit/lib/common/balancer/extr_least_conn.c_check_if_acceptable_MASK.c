
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {size_t size; TYPE_3__** entries; } ;
typedef TYPE_4__ h2o_socketpool_target_vector_t ;
struct TYPE_6__ {scalar_t__ weight_m1; } ;
struct TYPE_7__ {double leased_count; } ;
struct TYPE_8__ {TYPE_1__ conf; TYPE_2__ _shared; } ;



__attribute__((used)) static int FUNC_0(h2o_socketpool_target_vector_t *VAR_0, size_t VAR_1)
{
    double VAR_2;
    size_t VAR_3;
    double VAR_4 = VAR_0->entries[VAR_1]->_shared.leased_count;
    VAR_4 /= ((int)VAR_0->entries[VAR_1]->conf.weight_m1) + 1;

    for (VAR_3 = 0; VAR_3 < VAR_0->size; VAR_3++) {
        if (VAR_3 == VAR_1)
            continue;
        VAR_2 = VAR_0->entries[VAR_3]->_shared.leased_count;
        VAR_2 /= ((unsigned)VAR_0->entries[VAR_3]->conf.weight_m1) + 1;
        if (VAR_2 < VAR_4) {
            return -1;
        }
    }

    return 0;
}
