
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64_t ;
struct least_conn_t {int mutex; } ;
struct TYPE_9__ {size_t size; TYPE_3__** entries; } ;
typedef TYPE_4__ h2o_socketpool_target_vector_t ;
typedef int h2o_balancer_t ;
struct TYPE_7__ {scalar_t__ weight_m1; } ;
struct TYPE_6__ {size_t leased_count; } ;
struct TYPE_8__ {TYPE_2__ conf; TYPE_1__ _shared; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static size_t FUNC_3(h2o_balancer_t *VAR_0, h2o_socketpool_target_vector_t *VAR_1, char *VAR_2)
{
    struct least_conn_t *VAR_3 = (void *)VAR_0;
    size_t VAR_4;
    size_t VAR_5 = -1;
    size_t VAR_6 = 0;
    size_t VAR_7 = 1;
    uint64_t VAR_8, VAR_9;

    FUNC_0(VAR_1->size != 0);
    FUNC_1(&VAR_3->mutex);
    for (VAR_4 = 0; VAR_4 < VAR_1->size; VAR_4++) {
        VAR_8 = VAR_1->entries[VAR_4]->_shared.leased_count;
        VAR_8 *= VAR_6;
        VAR_9 = VAR_7;
        VAR_9 *= ((unsigned)VAR_1->entries[VAR_4]->conf.weight_m1) + 1;
        if (!VAR_2[VAR_4] && VAR_8 < VAR_9) {
            VAR_5 = VAR_4;
            VAR_7 = VAR_1->entries[VAR_4]->_shared.leased_count;
            VAR_6 = ((unsigned)VAR_1->entries[VAR_4]->conf.weight_m1) + 1;
        }
    }
    FUNC_2(&VAR_3->mutex);

    FUNC_0(VAR_5 < VAR_1->size);
    return VAR_5;
}
