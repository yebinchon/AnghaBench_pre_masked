
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
struct TYPE_7__ {scalar_t__ weight_m1; } ;
struct TYPE_6__ {unsigned int leased_count; } ;
struct TYPE_8__ {TYPE_2__ conf; TYPE_1__ _shared; } ;



__attribute__((used)) static int FUNC_0(h2o_socketpool_target_vector_t *VAR_0)
{
    size_t VAR_1, VAR_2;

    for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++) {
        for (VAR_2 = VAR_1 + 1; VAR_2 < VAR_0->size; VAR_2++) {
            if (VAR_0->entries[VAR_1]->_shared.leased_count * ((unsigned)VAR_0->entries[VAR_2]->conf.weight_m1 + 1) !=
                VAR_0->entries[VAR_2]->_shared.leased_count * ((unsigned)VAR_0->entries[VAR_1]->conf.weight_m1 + 1))
                return 0;
        }
    }
    return 1;
}
